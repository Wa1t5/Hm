#pragma once
#include <Hm/Game.hpp>

class Vector2
{
public:
    /* Vector2: Info */
    void SetX(float _x);
    void SetY(float _y);
    Vector2(float x, float y);
    float x = -1;
    float y = -1;
};