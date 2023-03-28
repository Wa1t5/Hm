#include <Hm/Game.hpp>

bool Physics::IsColliding(Entity* a, Entity* b)
{
    if (a->pos->x < b->pos->x + b->size->x &&
    a->pos->x + a->size->x > b->pos->x &&
    a->pos->y < b->pos->y + b->size->y &&
    a->pos->y + a->size->y > b->pos->y) return true;
    
    return false;
}