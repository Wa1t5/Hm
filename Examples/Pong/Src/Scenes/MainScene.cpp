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
    Player1* player1 = nullptr;
    Player2* player2 = nullptr;
    Ball* ball = nullptr;
    int player1_points = 0;
    int player2_points = 0;
    std::string points = "";

    EntityManager* entityManager = nullptr;
    float alpha = 1;

    void Init() override 
    {
        points = "Player1: " + std::to_string(player1_points) + " Player 2: " + std::to_string(player2_points);
        window->SetWindowTitle(points);

        srand(SDL_GetTicks());
        entityManager = new EntityManager();
        
        player1 = new Player1();
        player2 = new Player2();
        ball = new Ball();

        entityManager->CreateEntity(player1, new Vector2(0.0, 0.0), renderer, input);
        entityManager->CreateEntity(player2, new Vector2(0.0, 0.0), renderer, input);
        entityManager->CreateEntity(ball, new Vector2(0.0, 0.0), renderer, input);

        entityManager->InitEntities();
        entityManager->LoadEntitiesResources();
    }

    void LoadResources() override
    {
    }

    void Update() override
    {
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