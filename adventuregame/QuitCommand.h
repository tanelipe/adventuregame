////////////////////
/// C++ Object-oriented Programming
/// Adventure Game 6
/// Reference answer 
/// anssi.grohn@pkamk.fi
////////////////////
#ifndef __QuitCommand_h__
#define __QuitCommand_h__
#include "Command.h"
#include "Game.h"
////////////////////////////////////////////////////////////////////////////////
class QuitCommand : public Command 
{
public:
  QuitCommand( Game *pGame ) : Command(pGame){}
  void Execute()
  {
    // Taneli Peltoniemi
	GetGame()->SaveGameState();
    GetGame()->SetRunning(false);
  }
};
////////////////////////////////////////////////////////////////////////////////
#endif
