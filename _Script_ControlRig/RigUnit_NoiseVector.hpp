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
struct RigUnit_NoiseVector : public RigUnit_MathBase {
    private: char pad_8[0x48]; public:
    void* get_Position();
    void* get_Speed();
    void* get_Frequency();
    float& get_Minimum();
    float& get_Maximum();
    void* get_Result();
    void* get_Time();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
