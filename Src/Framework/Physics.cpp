#include "../../Include/Game.hpp"

bool Physics::IsColliding(Entity *a, Entity *b)
{
    if (a->pos->_x < b->pos->_x + b->sprite->_rect->w &&
    a->pos->_x + a->sprite->_rect->w > b->pos->_x &&
    a->pos->_y < b->pos->_y + b->sprite->_rect->h &&
    a->pos->_y + a->sprite->_rect->h > b->pos->_y) return true;
    
    return false;
}