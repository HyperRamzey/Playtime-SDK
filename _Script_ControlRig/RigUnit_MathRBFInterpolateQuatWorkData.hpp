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
struct RigUnit_MathRBFInterpolateQuatWorkData {
    private: char pad_0[0x90]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x90
#pragma pack(pop)
}