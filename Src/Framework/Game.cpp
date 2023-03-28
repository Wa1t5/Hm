#include <Hm/Game.hpp>

Game::Game(std::string title, int width, int height)
{                       
    mainWindow = new Window(title, width, height);
    mainRenderer = new Renderer(mainWindow);
    mainInput = new Input();
}

void Game::Init() {}

void Game::LoadResources() {}

void Game::EventHadling()
{
    while (SDL_PollEvent(&e) != 0)
    {
        // Handle quit events
        if (e.type == SDL_EVENT_QUIT)
        {
            shouldQuit = true;
        }

        // Handle mouse
        mainInput->HandleMouse();
    }
}

void Game::Update() {}

void Game::Render() {}

void Game::SetFPS(int fps) {} // TODO

Game::~Game()
{
    delete mainWindow;
    delete mainRenderer;
    delete mainInput;

    SDL_Quit();
    IMG_Quit();
}