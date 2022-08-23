#include "../../Include/Game.hpp"

void Polygons::DrawCube(Renderer* renderer, Vector2* pos, Vector2* size, bool fill)
{
    SDL_Rect* tmpRect = new SDL_Rect;
    tmpRect->x = pos->x;
    tmpRect->y = pos->y;
    tmpRect->w = size->x;
    tmpRect->h = size->y;

    if (!fill)
    {
        SDL_RenderDrawRect(renderer->_renderer, tmpRect);
    }
    else
    {
        SDL_RenderFillRect(renderer->_renderer, tmpRect);
    }
}