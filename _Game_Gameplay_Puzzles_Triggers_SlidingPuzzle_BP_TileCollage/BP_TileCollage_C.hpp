#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Playtime_Multiplayer\CollagePuzzleTile.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Gameplay_Puzzles_Triggers_SlidingPuzzle_BP_TileCollage {
#pragma pack(push, 1)
struct BP_TileCollage_C : public _Script_Playtime_Multiplayer::CollagePuzzleTile {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x5c0
#pragma pack(pop)
}
