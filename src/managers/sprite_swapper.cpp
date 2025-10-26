#include "sprite_swapper.hpp"

void SpriteSwapper::Swap(Sprite& sprite1, Sprite& sprite2) const {
    Vector2 tempPosition = sprite1.GetPosition();
    float tempScale = sprite1.GetScale();
    float tempRotation = sprite1.GetRotation();
    Color tempTint = sprite1.GetTint();
    Vector2 tempVelocity = sprite1.GetVelocity();

    sprite1.SetPosition(sprite2.GetPosition());
    sprite1.SetScale(sprite2.GetScale());
    sprite1.SetRotation(sprite2.GetRotation());
    sprite1.SetTint(sprite2.GetTint());
    sprite1.SetVelocity(sprite2.GetVelocity());

    sprite2.SetPosition(tempPosition);
    sprite2.SetScale(tempScale);
    sprite2.SetRotation(tempRotation);
    sprite2.SetTint(tempTint);
    sprite2.SetVelocity(tempVelocity);
}
