#include "../../Include/Game.hpp"

Game::Game(std::string title, int width, int height)
{
    SDL_Init(SDL_INIT_EVERYTHING);
    IMG_Init(0);
    mainWindow = new Window(title, width, height);
    //mainSurface = SDL_GetWindowSurface(mainWindow);
    mainRenderer = new Renderer(mainWindow);
    mainInput = new Input();
    //Game::EventHadling();
}

void Game::Init() {}

void Game::LoadResources() {}

void Game::EventHadling()
{
    while (SDL_PollEvent(&e) != 0)
    {
        // Handle quit events
        if (e.type == SDL_QUIT)
        {
            shouldQuit = true;
        }

        // Handle released key
        if (e.type == SDL_KEYUP)
        {
            mainInput->HandleKeyboard(e.key.keysym.scancode, 1);
        }

        // Handle pressed key
        if (e.type == SDL_KEYDOWN)
        {
            mainInput->HandleKeyboard(e.key.keysym.scancode, 2);
        }
    }
}

void Game::Update() {}

void Game::Render() {}

Game::~Game()
{
    delete mainWindow;
    delete mainRenderer;
    delete mainInput;

    SDL_Quit();
    IMG_Quit();
}