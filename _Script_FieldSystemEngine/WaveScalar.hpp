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
struct WaveScalar : public FieldNodeFloat {
    private: char pad_b0[0x20]; public:
    float& get_Magnitude();
    void* get_Position();
    float& get_Wavelength();
    float& get_Period();
    void* get_Function();
    void* get_Falloff();
    static _Script_CoreUObject::Class* static_class();
    _Script_FieldSystemEngine::WaveScalar* SetWaveScalar(float Magnitude, _Script_CoreUObject::Vector Position, float Wavelength, float Period, float Time, void* Function, void* Falloff);
}; // Size: 0xd0
#pragma pack(pop)
}
