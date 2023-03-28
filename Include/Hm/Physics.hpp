#pragma once
#include <Hm/Game.hpp>

class Physics
{
public:
    /* Physics: Is Colliding
        * a (Entity*)
        * b (Entity*)
    */
    static bool IsColliding(Entity* a, Entity* b);
};