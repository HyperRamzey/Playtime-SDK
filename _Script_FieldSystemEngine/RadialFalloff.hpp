#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "FieldNodeFloat.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_FieldSystemEngine {
#pragma pack(push, 1)
struct RadialFalloff : public FieldNodeFloat {
    private: char pad_b0[0x28]; public:
    float& get_Magnitude();
    float& get_MinRange();
    float& get_MaxRange();
    float& get_Default();
    float& get_Radius();
    void* get_Position();
    void* get_Falloff();
    static _Script_CoreUObject::Class* static_class();
    _Script_FieldSystemEngine::RadialFalloff* SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Radius, _Script_CoreUObject::Vector Position, void* Falloff);
}; // Size: 0xd8
#pragma pack(pop)
}
