#ifndef CONTROL_OUTTAKE_H
#define CONTROL_OUTTAKE_H

#include "frc/commands/Command.h"
#include "Robot.h"

class ControlOuttake: public frc::Command {
    public:
        ControlOuttake();
    private:
        void Initialize();
        void Execute(double speed);
};

#endif