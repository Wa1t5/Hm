#pragma once
#include <Hm/Game.hpp>

class Scene
{
public:
    /* Scene: Info */
    Renderer* renderer = nullptr;
    Window* window = nullptr;
    Input* input = nullptr;

    /* Scene: Init Event */
    virtual void Init();

    /* Scene: Load Resource Event */
    virtual void LoadResources();

    /* Scene: Update Event */
    virtual void Update();

    /* Scene: Render Event */
    virtual void Render();
};