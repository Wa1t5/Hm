#pragma once
#include "Game.hpp"

class Window
{
public:
    Window(std::string title, int width, int height);
    void SetWindowTitle(std::string title);

public:
    SDL_Window* _window = nullptr;
};