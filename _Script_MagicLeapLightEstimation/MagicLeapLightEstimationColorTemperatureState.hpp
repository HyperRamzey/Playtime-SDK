#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MagicLeapLightEstimation {
#pragma pack(push, 1)
struct MagicLeapLightEstimationColorTemperatureState {
    private: char pad_0[0x20]; public:
    float& get_ColorTemperatureKelvin();
    void* get_AmbientColor();
    void* get_Timestamp();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
