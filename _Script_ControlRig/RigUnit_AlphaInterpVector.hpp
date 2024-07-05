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
struct RigUnit_AlphaInterpVector : public RigUnit_SimBase {
    private: char pad_8[0x80]; public:
    void* get_Value();
    float& get_Scale();
    float& get_Bias();
    bool get_bMapRange();
    void set_bMapRange(bool value);
    void* get_InRange();
    void* get_OutRange();
    bool get_bClampResult();
    void set_bClampResult(bool value);
    float& get_ClampMin();
    float& get_ClampMax();
    bool get_bInterpResult();
    void set_bInterpResult(bool value);
    float& get_InterpSpeedIncreasing();
    float& get_InterpSpeedDecreasing();
    void* get_Result();
    void* get_ScaleBiasClamp();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x88
#pragma pack(pop)
}
