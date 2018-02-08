/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include <iostream>
#include <string>

#include <IterativeRobot.h>
#include <LiveWindow/LiveWindow.h>
#include <SmartDashboard/SendableChooser.h>
#include <SmartDashboard/SmartDashboard.h>
#include "ctre/Phoenix.h"


//#include <CANTalon.h>

using namespace frc;
using namespace std;

class Robot : public frc::IterativeRobot {
public:

	Robot() {

	}

	void RobotInit() {
	}

	void AutonomousInit() override {
	}

	void AutonomousPeriodic() {
	}

	void TeleopInit() {}

	void TeleopPeriodic() {}

	void TestPeriodic() {}

};

START_ROBOT_CLASS(Robot)
