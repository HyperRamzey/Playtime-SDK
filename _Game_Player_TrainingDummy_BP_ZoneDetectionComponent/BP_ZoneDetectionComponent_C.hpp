#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Playtime_Multiplayer\ZoneDetectionComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Player_TrainingDummy_BP_ZoneDetectionComponent {
#pragma pack(push, 1)
struct BP_ZoneDetectionComponent_C : public _Script_Playtime_Multiplayer::ZoneDetectionComponent {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xd0
#pragma pack(pop)
}
