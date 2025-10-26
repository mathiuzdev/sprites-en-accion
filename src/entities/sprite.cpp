#include "sprite.hpp"

Sprite::Sprite(Vector2 position, float scale, float rotation, Color tint, Vector2 velocity)
    : position(position), scale(scale), rotation(rotation), tint(tint), velocity(velocity) {}

void Sprite::Update(float deltaTime) {
    position.x += velocity.x * deltaTime;
    position.y += velocity.y * deltaTime;
}

void Sprite::BounceOnBounds(int screenWidth, int screenHeight) {
    if (position.x < 0 || position.x > screenWidth) {
        velocity.x *= -1;
    }
    if (position.y < 0 || position.y > screenHeight) {
        velocity.y *= -1;
    }
}
