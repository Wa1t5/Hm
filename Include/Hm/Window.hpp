#pragma once
#include <Hm/Game.hpp>

class Window
{
public:
    /* Window: Constructor 
        * title: window title (string)
        * width: window width (int)
        * height: window height (int)
    */
    Window(std::string title, int width, int height);

    /* Window: Set Window Title
        * title: window title (strong)
    */
    void SetWindowTitle(std::string title);

    /* Window: Info */
    SDL_Window* _window = nullptr;
};