#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct MathRBFInterpolateVectorColor_Target {
    private: char pad_0[0x1c]; public:
    void* get_Target();
    void* get_Value();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1c
#pragma pack(pop)
}