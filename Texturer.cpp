#include "Texturer.h"

SDL_Texture* Texturer::loadTexture(const char* file)
{
        SDL_Surface* surface = IMG_Load(file);
        SDL_Texture* texture = SDL_CreateTextureFromSurface(Game::renderer, surface);
        SDL_FreeSurface(surface);

        return texture;
}
