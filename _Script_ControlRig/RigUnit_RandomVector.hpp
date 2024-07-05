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
struct RigUnit_RandomVector : public RigUnit_MathBase {
    private: char pad_8[0x30]; public:
    int32_t& get_Seed();
    float& get_Minimum();
    float& get_Maximum();
    float& get_Duration();
    void* get_Result();
    void* get_LastResult();
    int32_t& get_LastSeed();
    float& get_TimeLeft();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
