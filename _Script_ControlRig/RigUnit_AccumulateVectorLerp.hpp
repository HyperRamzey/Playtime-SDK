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
struct RigUnit_AccumulateVectorLerp : public RigUnit_SimBase {
    private: char pad_8[0x38]; public:
    void* get_TargetValue();
    void* get_InitialValue();
    float& get_Blend();
    bool get_bIntegrateDeltaTime();
    void set_bIntegrateDeltaTime(bool value);
    void* get_Result();
    void* get_AccumulatedValue();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}