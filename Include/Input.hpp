#pragma once
#include "Game.hpp"

class Input
{
public:
    /* Input: Handle Mouse
        * Should only be used internally
     */
    void HandleMouse();
    //void UpdateKeyboardState();
    //void ResetKeyboardState();

    /* Input: Is Key Down
        * key: keyboard key (SDL_Scancode)
    */
    bool IsKeyDown(SDL_Scancode key);
    //bool IsKeyPressed(SDL_Scancode key);
    //bool IsKeyUP(SDL_Scancode key);

    /* Input: Is Mouse Button Down
        * button: mouse button (Uint32)
    */
    bool IsMouseButtonDown(Uint32 button);
    //bool IsMouseButtonPressed();
    //bool IsMouseButtonUP();
//private:

    /* Input: Info */
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