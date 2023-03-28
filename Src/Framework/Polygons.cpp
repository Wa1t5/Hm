#include <Hm/Game.hpp>

void Polygons::DrawCube(Renderer* renderer, Vector2* pos, Vector2* size, bool fill)
{
    SDL_FRect* tmpRect = new SDL_FRect;
    tmpRect->x = pos->x;
    tmpRect->y = pos->y;
    tmpRect->w = size->x;
    tmpRect->h = size->y;

    if (!fill)
    {
        SDL_RenderRect(renderer->_renderer, tmpRect);
    }
    else
    {
        SDL_RenderFillRect(renderer->_renderer, tmpRect);
    }
}