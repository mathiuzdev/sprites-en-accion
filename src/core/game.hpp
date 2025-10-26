#pragma once

#include "raylib.h"
#include "../entities/sprite.hpp"
#include "../rendering/sprite_renderer.hpp"
#include "../input/input_controller.hpp"
#include "../managers/texture_manager.hpp"
#include "../managers/sprite_swapper.hpp"
#include "../ui/ui_renderer.hpp"

class Game {
public:
    Game();
    ~Game();

    void Run();

private:
    void Initialize();
    void ProcessInput();
    void Update(float deltaTime);
    void Render();
    void Cleanup();

    static constexpr int SCREEN_WIDTH = 800;
    static constexpr int SCREEN_HEIGHT = 600;
    static constexpr float MOVEMENT_SPEED = 200.0f;

    Texture2D texture;
    Sprite sprite1;
    Sprite sprite2;
    bool swapped;

    SpriteRenderer renderer;
    InputController inputController;
    TextureManager textureManager;
    SpriteSwapper spriteSwapper;
    UIRenderer uiRenderer;
};
