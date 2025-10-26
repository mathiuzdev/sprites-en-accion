#pragma once

#include "raylib.h"
#include "../entities/sprite.hpp"

class SpriteRenderer {
public:
    void Draw(const Texture2D& texture, const Sprite& sprite) const;
};
