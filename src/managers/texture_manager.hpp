#pragma once

#include "raylib.h"
#include <string>

class TextureManager {
public:
    Texture2D Load(const std::string& path) const;
    void ApplyFilter(Texture2D& texture, int filter) const;
    void Unload(Texture2D& texture) const;
};
