#include <Hm/Game.hpp>

// Entities
#include "../Entities/Player1.cpp"
#include "../Entities/Player2.cpp"
#include "../Entities/Ball.cpp"
#include <iostream>
#include <string>

class MainScene : public Scene
{
public:
    // Store entities
    Player1* player1 = nullptr;
    Player2* player2 = nullptr;
    Ball* ball = nullptr;

    // Store points
    int player1_points = 0;
    int player2_points = 0;
    std::string points = "";

    /// Store entity manager
    EntityManager* entityManager = nullptr;
    float alpha = 1;

    void Init() override 
    {
        // Set window title to the number of points
        points = "Player1: " + std::to_string(player1_points) + " Player 2: " + std::to_string(player2_points);
        window->SetWindowTitle(points);

        // Randomize RNG
        srand(SDL_GetTicks());

        // Init EntityManager
        entityManager = new EntityManager();
        
        // Init entities
        player1 = new Player1();
        player2 = new Player2();
        ball = new Ball();

        // Create entities on the scene
        entityManager->CreateEntity(player1, new Vector2(0.0, 0.0), renderer, input);
        entityManager->CreateEntity(player2, new Vector2(0.0, 0.0), renderer, input);
        entityManager->CreateEntity(ball, new Vector2(0.0, 0.0), renderer, input);

        // Run entities init event and load resources event
        entityManager->InitEntities();
        entityManager->LoadEntitiesResources();
    }

    void LoadResources() override
    {
    }

    void Update() override
    {
        // Run entities update event
        entityManager->UpdateEntities();

        // Points
        if (ball->pos->x < 0)
        {
            player2_points++;
            Init();
        }
        if (ball->pos->x > 800)
        {
            player1_points++;
            Init();
        }

        // Collision
        if (Physics::IsColliding(player1, ball)) ball->dir = new Vector2(ball->dir->x * -1, rand() % 2);
        if (Physics::IsColliding(player2, ball)) ball->dir = new Vector2(ball->dir->x * -1, rand() % 2);
    }

    void Render() override
    {
        // Draw stuff
        renderer->SetRenderColor(0, 0, 0, 255);
        entityManager->RenderEntities();
        renderer->SetRenderColor(255, 255, 255, 255);
    }
};