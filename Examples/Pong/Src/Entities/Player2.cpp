#include <Hm/Game.hpp>

class Player2 : public Entity
{
public:
    //Vector2* pos = nullptr;
    //Vector2* size = nullptr;
    int spd = 0;

    void Init() override
    {
        pos = new Vector2(770.0, 200.0);
        size = new Vector2(30.0, 150.0);
        spd = 10;
    }

    void LoadResources() override
    {

    }

    void Update() override
    {
        if (input->IsKeyDown(SDL_SCANCODE_UP)) pos->y -= spd;
        if (input->IsKeyDown(SDL_SCANCODE_DOWN)) pos->y += spd;

        // Limit
        if (pos->y <= 0) pos->y += spd;
        if (pos->y >= 600 - size->y) pos->y -= spd;
    }
    
    void Render() override
    {
        Polygons::DrawCube(renderer, pos, size, 0);
    }
};