#pragma once
#include "Game.hpp"

class Vector2
{
public:
    /* Vector2: Info */
    void SetX(int _x);
    void SetY(int _y);
    Vector2(int x, int y);
    int x = -1;
    int y = -1;
};