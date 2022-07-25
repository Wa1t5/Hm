#include "Game.hpp"

class Polygons
{
public:
    static void DrawCube(Renderer* renderer, Vector2* pos, Vector2* size, bool fill);
    static void DrawTriangle(Renderer* renderer, Vector2* pos);
};