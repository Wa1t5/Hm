#pragma once

// Standard libraries
#include <iostream>
#include <random>

// Deps
#include <SDL3/SDL.h>
#include <SDL3/SDL_render.h>
#include <SDL3/SDL_image.h>

// Framework math stuff
#include <Hm/Vector2.hpp>

// Framework stuff
#include <Hm/Window.hpp>
#include <Hm/Renderer.hpp>
#include <Hm/Sprite.hpp>
#include <Hm/Input.hpp>
#include <Hm/Entity.hpp>
#include <Hm/EntityManager.hpp>
#include <Hm/ResourceLoader.hpp>
#include <Hm/Scene.hpp>
#include <Hm/SceneManager.hpp>
#include <Hm/Polygons.hpp>

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
