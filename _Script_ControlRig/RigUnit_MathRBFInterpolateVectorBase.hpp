#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RigUnit_MathRBFInterpolateBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct RigUnit_MathRBFInterpolateVectorBase : public RigUnit_MathRBFInterpolateBase {
    private: char pad_8[0xa8]; public:
    void* get_Input();
    void* get_DistanceFunction();
    void* get_SmoothingFunction();
    float& get_SmoothingRadius();
    bool get_bNormalizeOutput();
    void set_bNormalizeOutput(bool value);
    void* get_WorkData();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb0
#pragma pack(pop)
}
