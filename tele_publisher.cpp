#include <algorithm>
#include <iostream>
#include <future>

#include <dds/pub/ddspub.hpp>
#include <dds/core/ddscore.hpp>
#include <rti/config/Logger.hpp>
#include <rti/util/util.hpp>

#include "application.hpp"
#include "data.hpp"



void run_tele_publisher_application(std::string tin, std::atomic<bool>& ato_tele_connected) {

	dds::domain::DomainParticipant control_domain_participant(1);

	dds::pub::Publisher control_publisher(control_domain_participant);

	dds::topic::Topic< ::control_data> control_topic(control_domain_participant, "control_data");

	dds::pub::DataWriter< ::control_data> control_writer(control_publisher, control_topic);


	::control_data control_data;

	while (!shutdown_requested) {

		if (ato_tele_connected.load()) {

			control_data.tin(tin);
			control_data.acceleration(100.0);
			control_data.brake(100.0);
			control_data.steering(100.0);
			control_data.gear(100);
			control_data.additional_button1(1);
			control_data.additional_button2(2);
			control_data.additional_button3(3);

			std::cout << "\nWriting control_data: " << control_data << std::endl;

			control_writer.write(control_data);

		}
		// Send once every 1 second
		rti::util::sleep(dds::core::Duration(1));
	}

}
