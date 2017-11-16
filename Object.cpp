#include "Object.h"

Object::Object(const char* sprite, int x, int y)
{
	objectTexture = Texturer::loadTexture(sprite);
	xPos = x;
	yPos = y;
}

Object::~Object()
{
}

void Object::update()
{
	xPos ++;
	yPos ++;

	srcRect.x = 0;
	srcRect.y = 0;
	srcRect.w = 13; // These are Aru's sprite dimensions
	srcRect.h = 23;

	destRect.x = xPos;
	destRect.y = yPos;
	destRect.w = srcRect.w * 8; // *8 is scaling for 2560x1440 resolution
	destRect.h = srcRect.h * 8;
}

void Object::render()
{
	SDL_RenderCopy(Game::renderer, objectTexture, &srcRect, &destRect);
}
