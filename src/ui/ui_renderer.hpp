#pragma once

#include "raylib.h"
#include "../entities/sprite.hpp"
#include <string>

class UIRenderer {
public:
    void DrawInstructions() const;
    void DrawSpriteInfo(const Sprite& sprite, int yPosition, const std::string& label) const;
    void DrawSwapStatus(bool swapped, int yPosition) const;

private:
    std::string GetColorName(Color color) const;
};
