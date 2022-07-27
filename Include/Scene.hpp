#pragma once
#include "Game.hpp"

class Scene
{
public:
    Renderer* renderer = nullptr;
    Input* input = nullptr;
    
    virtual void Init();
    virtual void LoadResources();
    virtual void Update();
    virtual void Render();
};