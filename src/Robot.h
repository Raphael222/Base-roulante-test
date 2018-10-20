/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <string>
#include <SmartDashboard/SendableChooser.h>
#include <TimedRobot.h>
#include "WPIlib.h"

class Robot : public frc::TimedRobot {
public:
	void RobotInit() override;
	void AutonomousInit() override;
	void AutonomousPeriodic() override;
	void TeleopInit() override;
	void TeleopPeriodic() override;
	void TestPeriodic() override;

private:
	frc::SendableChooser<std::string> m_chooser;
	const std::string kAutoNameDefault = "Default";
	const std::string kAutoNameCustom = "My Auto";
	std::string m_autoSelected;

    frc::PWMVictorSPX Moteur1{1};
    frc::PWMVictorSPX Moteur2{2};
    frc::PWMVictorSPX Moteur3{3};
    frc::PWMVictorSPX Moteur4{4};

    frc::Joystick Joystick1{1};

    frc::DoubleSolenoid Solenoid1{1,0,0};
    frc::DoubleSolenoid Solenoid2{1,0,0};




};
