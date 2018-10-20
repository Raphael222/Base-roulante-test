/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Robot.h"
#include <iostream>
#include <SmartDashboard/SmartDashboard.h>
#include "WPIlib.h"


void Robot::RobotInit() {
	m_chooser.AddDefault(kAutoNameDefault, kAutoNameDefault);
	m_chooser.AddObject(kAutoNameCustom, kAutoNameCustom);
	frc::SmartDashboard::PutData("Auto Modes", &m_chooser);



}

/**
 * This autonomous (along with the chooser code above) shows how to select
 * between different autonomous modes using the dashboard. The sendable chooser
 * code works with the Java SmartDashboard. If you prefer the LabVIEW Dashboard,
 * remove all of the chooser code and uncomment the GetString line to get the
 * auto name from the text box below the Gyro.
 *
 * You can add additional auto modes by adding additional comparisons to the
 * if-else structure below with additional strings. If using the SendableChooser
 * make sure to add them to the chooser code above as well.
 */
void Robot::AutonomousInit() {
	m_autoSelected = m_chooser.GetSelected();
	// m_autoSelected = SmartDashboard::GetString("Auto Selector",
	//		 kAutoNameDefault);
	std::cout << "Auto selected: " << m_autoSelected << std::endl;

	if (m_autoSelected == kAutoNameCustom) {
		// Custom Auto goes here
	} else {
		// Default Auto goes here
	}
}

void Robot::AutonomousPeriodic() {
	if (m_autoSelected == kAutoNameCustom) {
		// Custom Auto goes here
	} else {
		// Default Auto goes here
	}
}

void Robot::TeleopInit()
{



}

void Robot::TeleopPeriodic()
{

	bool etat=false;

    Moteur1.Set(Joystick1.GetY()*0.75+Joystick1.GetZ()*0.25);
    Moteur2.Set(Joystick1.GetY()*0.75+Joystick1.GetZ()*0.25);
    Moteur3.Set(Joystick1.GetY()*0.75+Joystick1.GetZ()*0.25);
    Moteur4.Set(Joystick1.GetY()*0.75+Joystick1.GetZ()*0.25);

    if (Joystick1.GetTriggerPressed())
		{
    		if (etat)
				{
    				Solenoid1.Set(frc::DoubleSolenoid::kForward);
					Solenoid2.Set(frc::DoubleSolenoid::kForward);
				}
    		else
    			{
    			Solenoid1.Set(frc::DoubleSolenoid::kReverse);
    			Solenoid2.Set(frc::DoubleSolenoid::kReverse);
    			}

}

void Robot::TestPeriodic()
{

}

START_ROBOT_CLASS(Robot)
