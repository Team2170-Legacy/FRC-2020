#include "Commands/ControlOuttake.h"
#include <iostream>

ControlOuttake::ControlOuttake(double speed): frc::Command() {
    Requires(Robot::intake.get());
}

void ControlOuttake::Initialize(){

}

void ControlOuttake::Execute(double speed){
    Robot::intake->IntakeOn(speed);
}