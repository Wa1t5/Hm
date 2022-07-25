#pragma once
#include "Game.hpp"

class SceneManager
{
public:
    void LoadScene(Scene* scene);
    void InitScene();
    void LoadSceneResources();
    void UpdateScene();
    void RenderScene();
private:
    Scene* _scene;
};