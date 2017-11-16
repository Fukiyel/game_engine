#include "Game.h"
using std::cout;
using std::endl;

Game *game = nullptr;

int main(int argc, char* argv[])
{
	game = new Game();
	game->init("Tardos Project", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 2560, 1440);

	while (game->isRunning())
        {
		game->events();
		game->update();
		game->render();
	}

	game->clean();
	delete game;
	return 0;
}
