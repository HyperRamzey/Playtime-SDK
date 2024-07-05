#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SimpleCameraShakePattern.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_GameplayCameras {
#pragma pack(push, 1)
struct PerlinNoiseCameraShakePattern : public SimpleCameraShakePattern {
    private: char pad_38[0x80]; public:
    float& get_LocationAmplitudeMultiplier();
    float& get_LocationFrequencyMultiplier();
    void* get_X();
    void* get_Y();
    void* get_Z();
    float& get_RotationAmplitudeMultiplier();
    float& get_RotationFrequencyMultiplier();
    void* get_Pitch();
    void* get_Yaw();
    void* get_Roll();
    void* get_FOV();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb8
#pragma pack(pop)
}
