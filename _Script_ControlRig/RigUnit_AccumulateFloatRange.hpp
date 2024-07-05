#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RigUnit_SimBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct RigUnit_AccumulateFloatRange : public RigUnit_SimBase {
    private: char pad_8[0x18]; public:
    float& get_Value();
    float& get_Minimum();
    float& get_Maximum();
    float& get_AccumulatedMinimum();
    float& get_AccumulatedMaximum();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
