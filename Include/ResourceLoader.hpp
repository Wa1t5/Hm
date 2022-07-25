#pragma once
#include "Game.hpp"

class ResourceLoader
{
public:
    static SDL_Texture* LoadSprite(std::string path, Renderer* renderer);
};