#include <iostream>

#include <dds/pub/ddspub.hpp>
#include <rti/util/util.hpp>      // for sleep()
#include <rti/config/Logger.hpp>  // for logging

//#include "application.hpp"  // for command line parsing and ctrl-c
#include "data.hpp"

void run_publisher_application(unsigned int domain_id, unsigned int sample_count)
{

    // Start communicating in a domain, usually one participant per application
    dds::domain::DomainParticipant participant(domain_id);

    // Create a Topic with a name and a datatype
    dds::topic::Topic< ::IMU_data> topic(participant, "Example IMU_data");

    // Create a Publisher
    dds::pub::Publisher publisher(participant);

    // Create a DataWriter with default QoS
    dds::pub::DataWriter< ::IMU_data> writer(publisher, topic);

    ::IMU_data data;
    // Main loop, write data
    for (unsigned int samples_written = 0;
     samples_written < sample_count;
    samples_written++) {
        // Modify the data to be written here
        std::cout << "Writing ::IMU_data, count " << samples_written << std::endl;

        writer.write(data);

        // Send once every second
        rti::util::sleep(dds::core::Duration(1));
    }
}

int main(int argc, char *argv[])
{


    try {
        run_publisher_application(0, 1);
    } catch (const std::exception& ex) {
        // This will catch DDS exceptions
        std::cerr << "Exception in run_publisher_application(): " << ex.what()
        << std::endl;
        return EXIT_FAILURE;
    }

    // Releases the memory used by the participant factory.  Optional at
    // application exit
    dds::domain::DomainParticipant::finalize_participant_factory();

    return EXIT_SUCCESS;
}
