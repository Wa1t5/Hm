#pragma once
#include "Game.hpp"

class SceneManager
{
public:
    /* Scene Manager: Load Scene
        * scene: scene to load (Scene*)
        * renderer (Renderer*)
        * window (Window*)
        * input (Input*)
    */
    void LoadScene(Scene* scene, Renderer* renderer, Window* window, Input* input);

    /* SceneManager: Init Scene Event */
    void InitScene();

    /* SceneManager: Load Scene Resource Event */
    void LoadSceneResources();

    /* SceneManager: Update Scene Event */
    void UpdateScene();

    /* SceneManager: Render Scene Event */
    void RenderScene();
    
private:
    /* SceneManager: Current Scene */
    Scene* _scene;
};