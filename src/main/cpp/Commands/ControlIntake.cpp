#include "Commands/ControlIntake.h"
#include <iostream>

ControlIntake::ControlIntake(double speed): frc::Command() {
    Requires(Robot::intake.get());
}

void ControlIntake::Initialize(){

}

void ControlIntake::Execute(double speed){
    Robot::intake->IntakeOn(speed);
}