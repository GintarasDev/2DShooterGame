#include <stdlib.h>  
#include <crtdbg.h>  
#include "pch.h"
//#include "Player.h"
//#include "Maps_maker.h"
#include "Game.h"
#include <Windows.h>

#pragma comment(lib, "user32")

int main()
{
	//variable, and preparation:
	Game::prepareForGame();
	//game
	Game::Game();

	return 0;
}
