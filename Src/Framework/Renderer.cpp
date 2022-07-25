#include "../../Include/Game.hpp"


Renderer::Renderer(Window* window)
{
    _renderer = SDL_CreateRenderer(window->_window, 0, SDL_RENDERER_ACCELERATED);
}

void Renderer::Clear()
{
    SDL_RenderClear(Renderer::_renderer);
}
/*
void Renderer::DrawSprite(Sprite* sprite, Vector2* pos)
{
    SDL_Rect* tmpRect = new SDL_Rect;
    tmpRect->w = sprite->_rect->w;
    tmpRect->h = sprite->_rect->h;
    tmpRect->x = pos->_x;
    tmpRect->y = pos->_y;
    SDL_RenderCopy(Renderer::_renderer, sprite->_texture, NULL, tmpRect);
}
*/
void Renderer::ChangeBuffer()
{
    SDL_RenderPresent(Renderer::_renderer);
}