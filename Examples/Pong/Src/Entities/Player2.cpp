#include <Hm/Game.hpp>

class Player2 : public Entity
{
public:
    int spd = 0;
    int y_axis = 0;

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
        // Move
        y_axis = input->IsKeyDown(SDL_SCANCODE_S) - input->IsKeyDown(SDL_SCANCODE_W);
        pos->y += y_axis * spd;

        // Clamp
        if (pos->y <= 0) pos->y += spd;
        if (pos->y >= 600 - size->y) pos->y -= spd;
    }
    
    void Render() override
    {
        // Draw player 2
        Polygons::DrawCube(renderer, pos, size, 0);
    }
};