#pragma once
#include "Game.hpp"

class SceneManager
{
public:
    void LoadScene(Scene* scene, Renderer* renderer, Input* input);
    void InitScene();
    void LoadSceneResources();
    void UpdateScene();
    void RenderScene();
private:
    Scene* _scene;
};