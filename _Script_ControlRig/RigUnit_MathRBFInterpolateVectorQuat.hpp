#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RigUnit_MathRBFInterpolateVectorBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct RigUnit_MathRBFInterpolateVectorQuat : public RigUnit_MathRBFInterpolateVectorBase {
    private: char pad_b0[0x20]; public:
    void* get_Targets();
    void* get_Output();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xd0
#pragma pack(pop)
}
