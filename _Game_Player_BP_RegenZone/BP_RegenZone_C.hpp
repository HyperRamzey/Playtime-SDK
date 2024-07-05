#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Playtime_Multiplayer\RegenZone.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Player_BP_RegenZone {
#pragma pack(push, 1)
struct BP_RegenZone_C : public _Script_Playtime_Multiplayer::RegenZone {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x4a0
#pragma pack(pop)
}
