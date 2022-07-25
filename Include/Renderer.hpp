#pragma once
#include "Game.hpp"

class Renderer
{
public:
    Renderer(Window* window);
    void Clear();
    //void DrawSprite(Sprite* sprite, Vector2* pos);
    void ChangeBuffer();

public:
    SDL_Renderer* _renderer = nullptr;
    SDL_Window* _window = nullptr;
};