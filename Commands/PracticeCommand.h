#ifndef PracticeCommand_h
#define PracticeCommand_h

#include "../CommandBase.h"

class PracticeCommand: public CommandBase{

	public{
		PracticeCommand();
		virtual void Initialise();
		virtual void Execute();
		virtual bool IsFinished();
		virtual void End();
		virtual void Interrupted();
	}
}

#endif