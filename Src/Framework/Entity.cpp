#include "../../Include/Game.hpp"

Entity::Entity() {}

Vector2* Entity::GetPosition()
{
    return pos;
}

Vector2* Entity::GetSize()
{
    return size;
}

void Entity::Init() {}
void Entity::LoadResources() {}
void Entity::Update() {}
void Entity::Render() {}