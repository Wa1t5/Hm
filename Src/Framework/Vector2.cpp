#include "../../Include/Game.hpp"

void Vector2::SetX(int _x)
{
    x = _x;
}

void Vector2::SetY(int _y)
{
    y = _y;
}

Vector2::Vector2(int x, int y)
{
    Vector2::SetX(x);
    Vector2::SetX(y);
}