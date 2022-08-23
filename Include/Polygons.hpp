#include "Game.hpp"

class Polygons
{
public:
    /* Polygons: Draw Cube
        * renderer (Renderer*)
        * pos (Vector2)
        * size (Vector2)
        * fill (bool)
    */
    static void DrawCube(Renderer* renderer, Vector2* pos, Vector2* size, bool fill);
    static void DrawTriangle(Renderer* renderer, Vector2* pos);
};