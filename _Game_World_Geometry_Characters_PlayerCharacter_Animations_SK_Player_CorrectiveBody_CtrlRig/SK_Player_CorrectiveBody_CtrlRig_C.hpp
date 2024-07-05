#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_ControlRig\ControlRig.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_World_Geometry_Characters_PlayerCharacter_Animations_SK_Player_CorrectiveBody_CtrlRig {
#pragma pack(push, 1)
struct SK_Player_CorrectiveBody_CtrlRig_C : public _Script_ControlRig::ControlRig {
    private: char pad_650[0x18]; public:
    void* get_Player_Location();
    void* get_Player_Forward();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x668
#pragma pack(pop)
}
