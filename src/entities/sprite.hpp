#pragma once

#include "raylib.h"

class Sprite {
public:
    Sprite(Vector2 position, float scale, float rotation, Color tint, Vector2 velocity);

    void Update(float deltaTime);
    void BounceOnBounds(int screenWidth, int screenHeight);

    Vector2 GetPosition() const { return position; }
    float GetScale() const { return scale; }
    float GetRotation() const { return rotation; }
    Color GetTint() const { return tint; }
    Vector2 GetVelocity() const { return velocity; }

    void SetPosition(Vector2 newPosition) { position = newPosition; }
    void SetScale(float newScale) { scale = newScale; }
    void SetRotation(float newRotation) { rotation = newRotation; }
    void SetTint(Color newTint) { tint = newTint; }
    void SetVelocity(Vector2 newVelocity) { velocity = newVelocity; }

private:
    Vector2 position;
    float scale;
    float rotation;
    Color tint;
    Vector2 velocity;
};
