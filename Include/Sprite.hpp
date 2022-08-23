#pragma once
#include "Game.hpp"

class Sprite
{
public: 
    /* Sprite: Constructor
        * path: path to sprite (string)
        * renderer (Renderer*)
    */
    Sprite(std::string path, Renderer* renderer);

    /* Sprite: Draw 
        * pos (Vector2*)
    */
    void Draw(Vector2* pos);

    /* Sprite: Set Alpha
        * alpha (float)
    */
    void SetAlpha(float alpha);

    /* Sprite: Destructor */
    ~Sprite();

    /* Sprite: Info*/
    SDL_Rect* _rect;
    SDL_Texture* _texture;
    Renderer* _renderer;
};