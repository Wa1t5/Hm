#include <Hm/Game.hpp>

Window::Window(std::string title, int width, int height)
{
    _window = SDL_CreateWindow(title.c_str(), width, height, NULL);
}

void Window::SetWindowTitle(std::string title)
{
    SDL_SetWindowTitle(_window, title.c_str());
}