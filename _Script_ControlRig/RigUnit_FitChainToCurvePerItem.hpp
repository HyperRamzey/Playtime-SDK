#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RigUnit_HighlevelBaseMutable.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct RigUnit_FitChainToCurvePerItem : public RigUnit_HighlevelBaseMutable {
    private: char pad_68[0x198]; public:
    void* get_Items();
    void* get_Bezier();
    void* get_Alignment();
    float& get_Minimum();
    float& get_Maximum();
    int32_t& get_SamplingPrecision();
    void* get_PrimaryAxis();
    void* get_SecondaryAxis();
    void* get_PoleVectorPosition();
    void* get_Rotations();
    void* get_RotationEaseType();
    float& get_Weight();
    bool get_bPropagateToChildren();
    void set_bPropagateToChildren(bool value);
    void* get_DebugSettings();
    void* get_WorkData();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x200
#pragma pack(pop)
}
