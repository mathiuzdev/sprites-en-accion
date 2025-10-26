#include "sprite_renderer.hpp"

void SpriteRenderer::Draw(const Texture2D& texture, const Sprite& sprite) const {
    Rectangle source = { 0, 0, static_cast<float>(texture.width), static_cast<float>(texture.height) };
    Rectangle dest = {
        sprite.GetPosition().x,
        sprite.GetPosition().y,
        texture.width * sprite.GetScale(),
        texture.height * sprite.GetScale()
    };
    Vector2 origin = {
        (texture.width * sprite.GetScale()) / 2,
        (texture.height * sprite.GetScale()) / 2
    };

    DrawTexturePro(texture, source, dest, origin, sprite.GetRotation(), sprite.GetTint());
}
