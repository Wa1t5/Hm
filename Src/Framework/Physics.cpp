#include "../../Include/Game.hpp"

bool Physics::IsColliding(Entity *a, Entity *b)
{
    if (a->GetPosition()->_x < b->GetPosition()->_x + b->GetSize()->_x &&
    a->GetPosition()->_x + a->GetSize()->_x > b->GetPosition()->_x &&
    a->GetPosition()->_y < b->GetPosition()->_y + b->GetSize()->_y &&
    a->GetPosition()->_y + a->GetSize()->_y > b->GetPosition()->_y) return true;
    
    return false;
}