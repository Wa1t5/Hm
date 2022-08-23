#pragma once
#include "Game.hpp"

class Entity
{
public:
    /* Entity: Constructor */
    Entity();

    /* Entity: Init event */
    virtual void Init();

    /* Entity: Load resources event */
    virtual void LoadResources();

    /* Entity: Update event */
    virtual void Update();

    /* Entity: Render event */
    virtual void Render();

    /* Entity: Info */
    int id = 0;
    Sprite* sprite = nullptr;
    Vector2* size = nullptr;
    Vector2* pos = nullptr;
    Renderer* renderer = nullptr;
    Input* input = nullptr;
};