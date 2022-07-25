#include "../../Include/Game.hpp"

void SceneManager::LoadScene(Scene* scene)
{
    _scene = scene;
    SceneManager::InitScene();
    SceneManager::LoadSceneResources();
}

void SceneManager::InitScene()
{
    _scene->Init();
}

void SceneManager::LoadSceneResources()
{
    _scene->LoadResources();
}

void SceneManager::UpdateScene()
{
    _scene->Update();
}

void SceneManager::RenderScene()
{
    _scene->Render();
}