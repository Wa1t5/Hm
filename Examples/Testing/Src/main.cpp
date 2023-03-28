#include <Hm/Game.hpp>


Game* game = nullptr;
SceneManager* sceneManager = nullptr;


class Testing : public Game
{
public:
    static void Init()
    {
    }

    static void Update()
    {
        // Main loop
        while (!game->shouldQuit)
        {
            // Event handling
            game->EventHadling();

            // Main game logic

            // Rendering
            Render();
        }
    }

    static void Render()
    {
        // Clear screen
        game->mainRenderer->Clear();

        // Draw stuff
        game->mainRenderer->SetRenderColor(50, 0, 50, 100);

        // Swap buffers
        game->mainRenderer->ChangeBuffer();
    }
};

int main(int argc, char *argv[])
{
    // Create game class
    game = new Game("Testing", 800, 600);
    Testing::Init();
    Testing::Update();

    // Destroy game
    delete game;

    // Return sucess
    return 0;
}