#include <Hm/Game.hpp>

void Vector2::SetX(float _x)
{
    x = _x;
}

void Vector2::SetY(float _y)
{
    y = _y;
}

Vector2::Vector2(float x, float y)
{
    Vector2::SetX(x);
    Vector2::SetY(y);
}