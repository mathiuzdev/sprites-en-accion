#include "texture_manager.hpp"

Texture2D TextureManager::Load(const std::string& path) const {
    return LoadTexture(path.c_str());
}

void TextureManager::ApplyFilter(Texture2D& texture, int filter) const {
    SetTextureFilter(texture, filter);
}

void TextureManager::Unload(Texture2D& texture) const {
    UnloadTexture(texture);
}
