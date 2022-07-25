# Hm: 2D Framework

### Features:
* Entity Manager
* Scene Manager
* Physics (AABB)
* Sprites
* 2D Renderer (SDL_Renderer)

### Structure:
SDL2 is used for input and window handling, SDL_image is used for image loading

### Why:
I wrote this to gain more experience with C++

### Status:
As stated before i wrote this project purely for gaining experience with c++ and having more projects on my portfolio

### How to build:
The project already comes with SDL and SDL_image as submodules

```
mkdir build
cd build
cmake -G Ninja
ninja
```