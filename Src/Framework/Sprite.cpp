#include "../../Include/Game.hpp"

Sprite::Sprite(std::string path, Renderer* renderer)
{
    _renderer = renderer;
    _texture = IMG_LoadTexture(renderer->_renderer, path.c_str());
    _rect = new SDL_Rect;
    SDL_QueryTexture(_texture, NULL, NULL, &_rect->w, &_rect->h);
}

void Sprite::Draw(Vector2* pos)
{
    SDL_Rect* tmpRect = new SDL_Rect;
    tmpRect->w = _rect->w;
    tmpRect->h = _rect->h;
    tmpRect->x = pos->x;
    tmpRect->y = pos->y;
    SDL_RenderCopy(_renderer->_renderer, _texture, NULL, tmpRect);
}

void Sprite::SetAlpha(float alpha)
{
    SDL_SetTextureBlendMode(_texture, SDL_BLENDMODE_BLEND);
    SDL_SetTextureAlphaMod(_texture, alpha);
}

Sprite::~Sprite()
{
    SDL_DestroyTexture(_texture);
}