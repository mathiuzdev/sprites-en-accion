#include "ui_renderer.hpp"
#include <sstream>

void UIRenderer::DrawInstructions() const {
    DrawText("SPRITES EN ACCION", 10, 10, 30, DARKGRAY);
    DrawText("Presiona ESPACIO para intercambiar propiedades", 10, 50, 16, GRAY);
    DrawText("Flechas: Controlar sprite izquierdo", 10, 70, 16, GRAY);
}

void UIRenderer::DrawSpriteInfo(const Sprite& sprite, int yPosition, const std::string& label) const {
    std::ostringstream oss;
    oss << label << " - Pos: ("
        << static_cast<int>(sprite.GetPosition().x) << ", "
        << static_cast<int>(sprite.GetPosition().y) << ") | Escala: "
        << sprite.GetScale() << " | Rot: "
        << static_cast<int>(sprite.GetRotation()) << "° | Color: "
        << GetColorName(sprite.GetTint());

    DrawText(oss.str().c_str(), 10, yPosition, 14, DARKBLUE);
}

void UIRenderer::DrawSwapStatus(bool swapped, int yPosition) const {
    std::string status = swapped ? "INTERCAMBIADO" : "NORMAL";
    DrawText(("Estado: " + status).c_str(), 10, yPosition, 14, swapped ? RED : GREEN);
}

std::string UIRenderer::GetColorName(Color color) const {
    if (color.r == 255 && color.g == 0 && color.b == 0) return "RED";
    if (color.r == 0 && color.g == 121 && color.b == 241) return "BLUE";
    if (color.r == 0 && color.g == 228 && color.b == 48) return "GREEN";
    if (color.r == 253 && color.g == 249 && color.b == 0) return "YELLOW";
    return "CUSTOM";
}
