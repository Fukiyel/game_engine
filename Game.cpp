#include "Character.h"
using std::cout;
using std::endl;

SDL_Renderer* Game::renderer = nullptr;
Character* aru = nullptr;

Game::Game()
{
}

Game::~Game()
{
}

void Game::init(const char *title, int xPos, int yPos, int width, int height)
{
	window = SDL_CreateWindow(title, xPos, yPos, width, height, 0);
	if (window)
	{
		cout << "Window created." << endl;
		renderer = SDL_CreateRenderer(window, -1, 0);
		if (renderer)
		{
			cout << "Renderer created." << endl;
			aru = new Character("D:/Bureau/Tardos Project/Sprites/v4/aru_right-0.png", 0, 0);
			running = true;
		}
		else
		{
			running = false;
		}
	}
}

void Game::events()
{
	SDL_Event event;
	SDL_PollEvent(&event);
	switch (event.type)
	{
		case SDL_QUIT:
			running = false;
			break;

		default:
			break;
	}
}

void Game::update()
{
	aru->update();
}

void Game::render()
{
	SDL_RenderClear(renderer);
	aru->render();
	SDL_RenderPresent(renderer);
}

void Game::clean()
{
	delete aru;
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	SDL_Quit();
	cout << "Game cleaned." << endl;
}
