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
struct RigUnit_AccumulateFloatMul : public RigUnit_SimBase {
    private: char pad_8[0x18]; public:
    float& get_Multiplier();
    float& get_InitialValue();
    bool get_bIntegrateDeltaTime();
    void set_bIntegrateDeltaTime(bool value);
    float& get_Result();
    float& get_AccumulatedValue();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
