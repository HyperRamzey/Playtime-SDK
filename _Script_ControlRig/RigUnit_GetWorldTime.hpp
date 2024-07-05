#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RigUnit_AnimBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct RigUnit_GetWorldTime : public RigUnit_AnimBase {
    private: char pad_8[0x20]; public:
    float& get_Year();
    float& get_Month();
    float& get_Day();
    float& get_WeekDay();
    float& get_Hours();
    float& get_Minutes();
    float& get_Seconds();
    float& get_OverallSeconds();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
