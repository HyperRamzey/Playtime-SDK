#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RigUnit_MathRBFInterpolateQuatBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct RigUnit_MathRBFInterpolateQuatFloat : public RigUnit_MathRBFInterpolateQuatBase {
    private: char pad_d0[0x20]; public:
    void* get_Targets();
    float& get_Output();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xf0
#pragma pack(pop)
}