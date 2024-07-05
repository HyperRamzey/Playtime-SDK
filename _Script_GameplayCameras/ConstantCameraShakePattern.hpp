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
struct ConstantCameraShakePattern : public SimpleCameraShakePattern {
    private: char pad_38[0x18]; public:
    void* get_LocationOffset();
    void* get_RotationOffset();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
