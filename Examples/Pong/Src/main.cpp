#include <Hm/Game.hpp>

// Scenes
#include "Scenes/MainScene.cpp"

Game* game = nullptr;
SceneManager* sceneManager = nullptr;

MainScene* mainScene = nullptr;

class Pong : public Game
{
public:
    static void Init()
    {
        sceneManager = new SceneManager();

        mainScene = new MainScene;

        sceneManager->LoadScene(mainScene, game->mainRenderer, game->mainWindow, game->mainInput);
    }

    static void Update()
    {
        // Main loop
        while (!game->shouldQuit)
        {
            // Event handling
            game->EventHadling();

            // Main game logic
            sceneManager->UpdateScene();
            
            // Rendering
            Render();
        }
    }

    static void Render()
    {
        // Clear screen
        game->mainRenderer->Clear();

        // Draw stuff
        sceneManager->RenderScene();

        // Swap buffers
        game->mainRenderer->ChangeBuffer();
    }
};

int main(int argc, char *argv[])
{
    // Create game class
    game = new Game("Pong", 800, 600);

    // Init and start main loop
    Pong::Init();
    Pong::Update();

    // Destroy game
    delete game;

    // Return sucess
    return 0;
}