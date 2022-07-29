#pragma once
#include "Game.hpp"

class Entity
{
public:
    Entity();
    Vector2* GetPosition();
    Vector2* GetSize();
    virtual void Init();
    virtual void LoadResources();
    virtual void Update();
    virtual void Render();

    int id = 0;
    Sprite* sprite = nullptr;
    Vector2* size = nullptr;
    Vector2* pos = nullptr;
    Renderer* renderer = nullptr;
    Input* input = nullptr;
};