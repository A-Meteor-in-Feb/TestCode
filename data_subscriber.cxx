
#include <algorithm>
#include <iostream>
#include <thread>
#include <future>

#include <dds/sub/ddssub.hpp>
#include <dds/core/ddscore.hpp>
#include <rti/config/Logger.hpp>  
#include <rti/util/util.hpp>

#include "data.hpp"
#include "application.hpp" 



void process_status_data(dds::sub::DataReader< ::status_data> status_reader, bool& online) {

    dds::sub::LoanedSamples< ::status_data> samples = status_reader.take();

    for (const auto& sample : samples) {

        if (sample.info().valid()) {

            std::cout << "\nStatus data: " << sample.data() << std::endl;

            if (sample.data().online()) {
                online = TRUE;

            }
            else {
                online = FALSE;
            }

        }
        else {
            std::cout << "Instance state changed to " << sample.info().state().instance_state() << std::endl;
        }
    }

}



void run_tele_subscriber_application(std::string tin) {

    dds::domain::DomainParticipant control_domain_participant(1);

    dds::sub::Subscriber status_subscriber(control_domain_participant);
    dds::sub::Subscriber imu_subscriber(control_domain_participant);

    // Topic
    dds::topic::Topic< ::status_data> status_topic(control_domain_participant, "status_data");
    dds::topic::Topic< ::IMU_data> imu_topic(control_domain_participant, "IMU_data");

    dds::sub::DataReader< ::status_data> status_reader(status_subscriber, status_topic);
    dds::sub::DataReader< ::IMU_data> imu_reader(imu_subscriber, imu_topic);

    bool online;

    dds::sub::cond::ReadCondition status_read_condition(
        status_reader,
        dds::sub::status::DataState::any(),
        [status_reader, &online]() {
            process_status_data(status_reader, online);
        }
    );

    dds::sub::cond::ReadCondition imu_read_condition(
        imu_reader,
        dds::sub::status::DataState::any(),
        [&imu_reader]() {
            dds::sub::LoanedSamples< ::IMU_data> samples = imu_reader.take();
            for (const auto& sample : samples) {
                if (sample.info().valid()) {
                    if (sample.info().valid()) {
                        std::cout << "\nreceiving imu data: " << sample.data() << std::endl;
                    }
                    else {
                        std::cout << "Instance state changed to "
                            << sample.info().state().instance_state() << std::endl;
                    }
                }
            }
        }
    );


    // WaitSet will be woken when the attached condition is triggered
    dds::core::cond::WaitSet control_domain_waitset;

    control_domain_waitset += status_read_condition;
    control_domain_waitset += imu_read_condition;


    while (!shutdown_requested) {
        control_domain_waitset.dispatch(dds::core::Duration(0.01));
    }

}


int main(int argc, char* argv[]) {

    // Parse arguments and handle control-C
    auto arguments = parse_arguments(argc, argv);
    if (arguments.parse_result == ParseReturn::exit) {
        return EXIT_SUCCESS;
    }
    else if (arguments.parse_result == ParseReturn::failure) {
        return EXIT_FAILURE;
    }
    setup_signal_handlers();

    // Sets Connext verbosity to help debugging
    rti::config::Logger::instance().verbosity(arguments.verbosity);

    if (!shutdown_requested) {

        int tele_id = arguments.sample_count;
        std::string tin = "tele" + std::to_string(tele_id);

        run_tele_subscriber_application(tin);
        
    }

    // Releases the memory used by the participant factory.  Optional at application exit
    dds::domain::DomainParticipant::finalize_participant_factory();

    return EXIT_SUCCESS;

}