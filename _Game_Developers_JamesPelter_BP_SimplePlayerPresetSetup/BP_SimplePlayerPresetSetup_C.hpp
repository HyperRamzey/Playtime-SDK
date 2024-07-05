#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_Player\BP_MeshContainer_Player_C.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Developers_JamesPelter_BP_SimplePlayerPresetSetup {
#pragma pack(push, 1)
struct BP_SimplePlayerPresetSetup_C : public _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_Player::BP_MeshContainer_Player_C {
    private: char pad_278[0xa0]; public:
    void* get_Default_Preset();
    void* get_Preset_Colors();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
}; // Size: 0x318
#pragma pack(pop)
}
