#pragma once

#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

class Game
{
public:
	Game();
	~Game();

	void init(const char *title, int xPos, int yPos, int width, int height);

	void events();
	void update();
	void render();
	void clean();

	static SDL_Renderer* renderer;

	bool isRunning()
	{
		return running;
	}

private:
	bool running;

	SDL_Window* window;
};
