#include <Hm/Game.hpp>

SDL_Texture* ResourceLoader::LoadSprite(std::string path, Renderer* renderer)
{
    SDL_Texture* tmpTexture = IMG_LoadTexture(renderer->_renderer, path.c_str());
    return tmpTexture;
}