#include "../../Include/Game.hpp"

bool Physics::IsColliding(Entity* a, Entity* b)
{
    if (a->pos->_x < b->pos->_x + b->size->_x &&
    a->pos->_x + a->size->_x > b->pos->_x &&
    a->pos->_y < b->pos->_y + b->size->_y &&
    a->pos->_y + a->size->_y > b->pos->_y) return true;
    
    return false;
}