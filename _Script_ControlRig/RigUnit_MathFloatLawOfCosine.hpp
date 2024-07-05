#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RigUnit_MathFloatBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ControlRig {
#pragma pack(push, 1)
struct RigUnit_MathFloatLawOfCosine : public RigUnit_MathFloatBase {
    private: char pad_8[0x20]; public:
    float& get_A();
    float& get_B();
    float& get_C();
    float& get_AlphaAngle();
    float& get_BetaAngle();
    float& get_GammaAngle();
    bool get_bValid();
    void set_bValid(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
