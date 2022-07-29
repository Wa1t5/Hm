#include "../../Include/Game.hpp"

Entity* EntityManager::CreateEntity(Entity* entity, Vector2* pos, Renderer* renderer, Input* input)
{
    EntityManager::entities_c++;
    EntityManager::entities[EntityManager::entities_c] = entity;
    EntityManager::entities[EntityManager::entities_c]->id = entities_c;
    EntityManager::entities[EntityManager::entities_c]->renderer = renderer;
    EntityManager::entities[EntityManager::entities_c]->input = input;
    EntityManager::entities[EntityManager::entities_c]->pos = pos;
    EntityManager::entities[EntityManager::entities_c]->size = new Vector2(0, 0);

    EntityManager::InitEntities();
    EntityManager::LoadEntitiesResources();

    return EntityManager::entities[EntityManager::entities_c];
}

void EntityManager::InitEntities()
{
    for (int i = 1; i <= EntityManager::entities_c; i++)
    {
        EntityManager::entities[i]->Init();
    }
}

void EntityManager::LoadEntitiesResources()
{
    for (int i = 1; i <= EntityManager::entities_c; i++)
    {
        EntityManager::entities[i]->LoadResources();
    }
}

void EntityManager::UpdateEntities()
{
    for (int i = 1; i <= EntityManager::entities_c; i++)
    {
        if (EntityManager::entities[i] != NULL)
        {
            EntityManager::entities[i]->Update();
        }
    }
}

void EntityManager::RenderEntities()
{
    for (int i = 1; i <= EntityManager::entities_c; i++)
    {
        if (EntityManager::entities[i] != NULL)
        {
            EntityManager::entities[i]->Render();
        }
    }
}

void EntityManager::DestroyEntity(Entity* entity)
{
    if (EntityManager::entities[entity->id] != NULL)
    {
        EntityManager::entities[entity->id] = NULL;
        ReorganizeEntities();
    }
}

void EntityManager::ReorganizeEntities()
{
    for (int i = 0; i < EntityManager::entities_c; i++)
    {
        if (EntityManager::entities[i + 1] != NULL)
        {
            EntityManager::entities[i + 1]->id--;
            EntityManager::entities[i] = EntityManager::entities[i + 1];
        }
    }
    EntityManager::entities_c--;
}