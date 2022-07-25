#include "../../Include/Game.hpp"

void Polygons::DrawCube(Renderer* renderer, Vector2* pos, Vector2* size, bool fill)
{
    SDL_Rect* tmpRect = new SDL_Rect;
    tmpRect->x = pos->_x;
    tmpRect->y = pos->_y;
    tmpRect->w = size->_x;
    tmpRect->h = size->_y;

    if (!fill)
    {
        SDL_RenderDrawRect(renderer->_renderer, tmpRect);
    }
    else
    {
        SDL_RenderFillRect(renderer->_renderer, tmpRect);
    }
}