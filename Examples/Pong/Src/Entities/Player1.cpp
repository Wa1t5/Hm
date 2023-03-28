#include <Hm/Game.hpp>

class Player1 : public Entity
{
public:
    int spd = 0;

    void Init() override
    {
        pos = new Vector2(0.0, 200.0);
        size = new Vector2(30.0, 150.0);
        spd = 10;
    }

    void LoadResources() override
    {

    }

    void Update() override
    {
        if (input->IsKeyDown(SDL_SCANCODE_W)) pos->y -= spd;
        if (input->IsKeyDown(SDL_SCANCODE_S)) pos->y += spd;

        // Limit
        //if (pos->y <= 0) pos->y += spd;
        //if (pos->y >= 600 - size->y) pos->y -= spd;
    }
    
    void Render() override
    {
        Polygons::DrawCube(renderer, pos, size, 0);
    }
};