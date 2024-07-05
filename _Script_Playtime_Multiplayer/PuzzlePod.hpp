#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "PuzzlePillar.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct PuzzlePod : public PuzzlePillar {
    static _Script_CoreUObject::Class* static_class();
    void OnPuzzleSolved(int32_t PuzzleIndex);
    void OnPanelHit(int32_t PuzzleIndex);
}; // Size: 0x328
#pragma pack(pop)
}
