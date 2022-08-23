#pragma once
#include "Game.hpp"

class Input
{
public:
    void HandleKeyboard(SDL_Scancode key, int state);
    void HandleMouse();
    void UpdateKeyboardState();
    void ResetKeyboardState();

    bool IsKeyDown(SDL_Scancode key);
    bool IsKeyPressed(SDL_Scancode key);
    bool IsKeyUP(SDL_Scancode key);

    bool IsMouseButtonDown(Uint32 button);
    bool IsMouseButtonPressed();
    bool IsMouseButtonUP();
//private:
    SDL_Scancode nextKey = SDL_SCANCODE_0;
    SDL_Scancode curKey = SDL_SCANCODE_0;
    SDL_Scancode prevKey = SDL_SCANCODE_0;
    int nextKeyState = NULL;
    int curKeyState = NULL;
    int prevKeyState = NULL;

    Uint32 mouseButton = NULL;
    int mouseX = NULL;
    int mouseY = NULL;
};