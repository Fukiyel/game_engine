#pragma once

#include "Texturer.h"

class Object
{
public:
	Object(const char* sprite, int x, int y);
	~Object();

	void update();
	void render();

protected:
	int xPos;
	int yPos;

	SDL_Texture* objectTexture;
	SDL_Rect srcRect, destRect;
};
