#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RigUnit_MathBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct RigUnit_NoiseFloat : public RigUnit_MathBase {
    private: char pad_8[0x20]; public:
    float& get_Value();
    float& get_Speed();
    float& get_Frequency();
    float& get_Minimum();
    float& get_Maximum();
    float& get_Result();
    float& get_Time();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
