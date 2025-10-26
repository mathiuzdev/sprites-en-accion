#pragma once

#include "raylib.h"
#include "../entities/sprite.hpp"

class InputController {
public:
    void HandleMovement(Sprite& sprite, float deltaTime, float speed) const;
    bool IsSwapRequested() const;
};
