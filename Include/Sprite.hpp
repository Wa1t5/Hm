#pragma once
#include "Game.hpp"

class Sprite
{
public: 
    Sprite(std::string path, Renderer* renderer);
    void Draw(Vector2* pos);
    void SetAlpha(float alpha);
    ~Sprite();

//public:
    SDL_Rect* _rect;
    SDL_Texture* _texture;
    Renderer* _renderer;
};