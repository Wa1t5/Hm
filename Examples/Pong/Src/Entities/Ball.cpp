#include <Hm/Game.hpp>

class Ball : public Entity
{
public:
    Vector2* dir = nullptr;
    int spd = 0;

    void Init() override
    {
        // Properties
        pos = new Vector2(400, 300);
        dir = new Vector2(0, 0);
        size = new Vector2(20, 20);
        spd = 8;    

        // Randomize direction
        dir->x = rand() % 2;
        dir->y = rand() % 2;

        // Avoid getting 0 on radomization
        if (dir->x == 0) dir->x = -1;
    }

    void LoadResources() override
    {

    }

    void Update() override
    {
        // Avoid getting y speed on 0
        if (dir->y == 0) dir->y = -1;

        // Clamp
        if (pos->y <= 0) dir->y = 1;
        else if (pos->y >= 600) dir->y = -1;

        // Move
        pos->x += dir->x * spd;
        pos->y += dir->y * spd;
    }
    
    void Render() override
    {
        // Draw ball
        Polygons::DrawCube(renderer, pos, size, 1);
    }
};