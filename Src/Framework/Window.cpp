#include "../../Include/Game.hpp"

Window::Window(std::string title, int width, int height)
{
    _window = SDL_CreateWindow(title.c_str(), 100, 100, width, height, 0);
}

void Window::SetWindowTitle(std::string title)
{
    SDL_SetWindowTitle(_window, title.c_str());
}