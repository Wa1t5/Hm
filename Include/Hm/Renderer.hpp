#pragma once
#include <Hm/Game.hpp>

class Renderer
{
public:
    /* Renderer: Constructor
        * window (Window*)
    */
    Renderer(Window* window);

    /* Renderer: Clear */
    void Clear();

    /* Renderer: Set Render Color
        * r: red (int)
        * g: green (int)
        * b: blue (int)
        * a: alpha (int)
    */
    void SetRenderColor(int r, int g, int b, int a);

    /* Renderer: Change Buffer */
    void ChangeBuffer();

    /* Renderer: Info */
    SDL_Renderer* _renderer = nullptr;
    SDL_Window* _window = nullptr;
};