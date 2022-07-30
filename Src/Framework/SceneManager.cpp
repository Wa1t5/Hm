#include "../../Include/Game.hpp"

void SceneManager::LoadScene(Scene* scene, Renderer* renderer, Window* window, Input* input)
{
    _scene = scene;
    _scene->input = input;
    _scene->renderer = renderer;
    _scene->window = window;

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