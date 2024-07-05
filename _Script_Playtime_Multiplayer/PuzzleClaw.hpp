#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "PuzzleBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct PuzzleClaw : public PuzzleBase {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x478
#pragma pack(pop)
}
