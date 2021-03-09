#include "Game.h"

int main()
{
	//Init Game
	Game game;

	//Game loop
	while (game.Running())
	{
		game.Update();

		game.Render();
	}

	return 0;
}