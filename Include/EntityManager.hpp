#pragma once
#include "Game.hpp"

class EntityManager
{
public:
    Entity* CreateEntity(Entity* entity, Vector2* pos, Renderer* renderer, Input* input);
    void DestroyEntity(Entity* entity);
    void EntityExists(Entity* entity);
    void ReorganizeEntities();
    void InitEntities();
    void LoadEntitiesResources();
    void UpdateEntities();
    void RenderEntities();
private:
    int entities_c = 0;
    static const int max_entities = 5000;
    Entity* entities[max_entities] = { NULL };
};