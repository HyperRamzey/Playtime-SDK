#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Playtime_Multiplayer\OutlineComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Gameplay_Interaction_BP_OutlineComponent {
#pragma pack(push, 1)
struct BP_OutlineComponent_C : public _Script_Playtime_Multiplayer::OutlineComponent {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb8
#pragma pack(pop)
}
