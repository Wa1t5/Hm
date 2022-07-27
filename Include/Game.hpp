#pragma once
#include <iostream>

// Deps
#include "../Deps/SDL/include/SDL.h"
#include "../Deps/SDL_image/SDL_image.h"

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
    Game(std::string title, int width, int height);
    void Init();
    void LoadResources();
    void EventHadling();
    void Update();
    void Render();
    ~Game();
//private:
    bool shouldQuit = false;
    enum GameStates {RUNNING, PAUSED};
    int GameState = RUNNING;
    Window* mainWindow = nullptr;
    Renderer* mainRenderer = nullptr;
    //SDL_Surface* mainSurface = nullptr;
    Input* mainInput = nullptr;
    SDL_Event e;
};
