#pragma once
#include <Hm/Game.hpp>

class ResourceLoader
{
public:
    /* Resource Loader: Load Sprite
        * path: path to image file (string)
        * renderer (Renderer*)
    */
    static SDL_Texture* LoadSprite(std::string path, Renderer* renderer);
};