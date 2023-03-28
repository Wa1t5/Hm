#pragma once
#include <Hm/Game.hpp>

class EntityManager
{
public:
    /* Entity Manager: Create entity
        * entity: entity (Entity*)
        * pos: position (Vector2*)
        * renderer: renderer (Renderer*)
        * input: input (Input*)
    */
    Entity* CreateEntity(Entity* entity, Vector2* pos, Renderer* renderer, Input* input);

    /* Entity Manager: Destroy Entity
        * entity (Entity*)
    */
    void DestroyEntity(Entity* entity);

    /* Entity Manager: Entity Exists
        * entity (Entity*)
    */
    void EntityExists(Entity* entity);

    /* Entity Manager: Reorganize Entities
        * Should only be used internally
    */
    void ReorganizeEntities();

    /* Entity Manager: Init Entities
        * Should only be used internally
    */
    void InitEntities();

    /* Entity Manager: Load Entities Resources
        * Should only be used internally
    */
    void LoadEntitiesResources();

    /* Entity Manager: Update entities
        * Should only be used internally
    */
    void UpdateEntities();

    /* Entity Manager: Update entities
        * Should only be used internally
    */
    void RenderEntities();

private:
    /* Entity Manager: Info */
    int entities_c = 0;
    static const int max_entities = 5000;
    Entity* entities[max_entities] = { NULL };
};