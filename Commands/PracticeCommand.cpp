#include "PracticeCommand.h"

PracticeCommand::PracticeCommand(): CommandBase "PracticeCommand" {
	requires (subsystemx);
}

virtual void Initialise(){
}

virtual void Execute(){
subsystemx -> moveMotor (1.0);
}

virtual bool IsFinished(){
return false;
}

virtual void End(){
}

virtual void Interrupted(){
subsystemx -> moveMotor (0.0);
}