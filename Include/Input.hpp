#pragma once
#include "Game.hpp"

class Input
{
public:
    void HandleKeyboard(SDL_Scancode key, int state);
    void UpdateKeyboardState();
    void ResetKeyboardState();
    bool IsKeyDown(SDL_Scancode key);
    bool IsKeyPressed(SDL_Scancode key);
    bool IsKeyUP(SDL_Scancode key);
//private:
    SDL_Scancode nextKey = SDL_SCANCODE_0;
    SDL_Scancode curKey = SDL_SCANCODE_0;
    SDL_Scancode prevKey = SDL_SCANCODE_0;
    int nextKeyState = NULL;
    int curKeyState = NULL;
    int prevKeyState = NULL;
};