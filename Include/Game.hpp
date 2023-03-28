#pragma once

// Standard libraries
#include <iostream>
#include <random>

// Deps
#include "../build/vcpkg_installed/x64-windows/include/SDL2/SDL.h"
#include "../build/vcpkg_installed/x64-windows/include/SDL2/SDL_image.h"


// Framework math stuff
#include "Vector2.hpp"

// Framework stuff
#include "Window.hpp"
#include "Renderer.hpp"
#include "Sprite.hpp"
#include "Input.hpp"
#include "Entity.hpp"
#include "EntityManager.hpp"
#include "ResourceLoader.hpp"
#include "Scene.hpp"
#include "SceneManager.hpp"
#include "Polygons.hpp"

// Framework physics stuff
#include "Physics.hpp"

class Game
{
public:
    /* Game: Constructor
        * title: window title (string)
        * width: window width (int)
        * height: window height (int)
    */
    Game(std::string title, int width, int height);

    /* Game: Init Event */
    void Init();

    /* Game: Load Resources Event */
    void LoadResources();

    /* Game: Event Handling Event */
    void EventHadling();

    /* Game: Update Event */
    void Update();

    /* Game: Render Event */
    void Render();

    void SetFPS(int fps); // TODO

    /* Game: Destructor */
    ~Game();

    /* Game: Info */
    bool shouldQuit = false;
    enum GameStates {RUNNING, PAUSED};
    int GameState = RUNNING;
    Window* mainWindow = nullptr;
    Renderer* mainRenderer = nullptr;
    Input* mainInput = nullptr;
    SDL_Event e;
};
