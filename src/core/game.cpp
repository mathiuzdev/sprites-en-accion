#include "game.hpp"

Game::Game()
    : sprite1({200, 300}, 2.0f, 0.0f, RED, {50, 30}),
      sprite2({600, 300}, 1.5f, 45.0f, BLUE, {-40, 50}),
      swapped(false) {}

Game::~Game() {
    Cleanup();
}

void Game::Run() {
    Initialize();

    while (!WindowShouldClose()) {
        float deltaTime = GetFrameTime();
        ProcessInput();
        Update(deltaTime);
        Render();
    }
}

void Game::Initialize() {
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Sprites en Accion");
    SetTargetFPS(60);

    texture = textureManager.Load("assets/imgs/character/character.png");
    textureManager.ApplyFilter(texture, TEXTURE_FILTER_BILINEAR);
}

void Game::ProcessInput() {
    if (inputController.IsSwapRequested()) {
        spriteSwapper.Swap(sprite1, sprite2);
        swapped = !swapped;
    }

    inputController.HandleMovement(sprite1, GetFrameTime(), MOVEMENT_SPEED);
}

void Game::Update(float deltaTime) {
    sprite1.Update(deltaTime);
    sprite2.Update(deltaTime);

    sprite1.BounceOnBounds(SCREEN_WIDTH, SCREEN_HEIGHT);
    sprite2.BounceOnBounds(SCREEN_WIDTH, SCREEN_HEIGHT);
}

void Game::Render() {
    BeginDrawing();
    ClearBackground(RAYWHITE);

    renderer.Draw(texture, sprite1);
    renderer.Draw(texture, sprite2);

    uiRenderer.DrawInstructions();
    uiRenderer.DrawSpriteInfo(sprite1, SCREEN_HEIGHT - 60, "Sprite 1");
    uiRenderer.DrawSpriteInfo(sprite2, SCREEN_HEIGHT - 40, "Sprite 2");
    uiRenderer.DrawSwapStatus(swapped, SCREEN_HEIGHT - 20);

    EndDrawing();
}

void Game::Cleanup() {
    textureManager.Unload(texture);
    CloseWindow();
}
