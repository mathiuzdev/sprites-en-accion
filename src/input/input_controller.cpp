#include "input_controller.hpp"

void InputController::HandleMovement(Sprite& sprite, float deltaTime, float speed) const {
    Vector2 position = sprite.GetPosition();

    if (IsKeyDown(KEY_RIGHT)) position.x += speed * deltaTime;
    if (IsKeyDown(KEY_LEFT)) position.x -= speed * deltaTime;
    if (IsKeyDown(KEY_DOWN)) position.y += speed * deltaTime;
    if (IsKeyDown(KEY_UP)) position.y -= speed * deltaTime;

    sprite.SetPosition(position);
}

bool InputController::IsSwapRequested() const {
    return IsKeyPressed(KEY_SPACE);
}
