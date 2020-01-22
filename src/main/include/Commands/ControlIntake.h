#ifndef CONTROL_INTAKE_H
#define CONTROL_INTAKE_H

#include "frc/commands/Command.h"
#include "Robot.h"

class ControlIntake: public frc::Command {
    public:
        ControlIntake();
    private:
        void Initialize();
        void Execute(double speed);
};

#endif