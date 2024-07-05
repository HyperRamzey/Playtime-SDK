#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\CameraShakePattern.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_GameplayCameras {
#pragma pack(push, 1)
struct SimpleCameraShakePattern : public _Script_Engine::CameraShakePattern {
    private: char pad_28[0x10]; public:
    float& get_Duration();
    float& get_BlendInTime();
    float& get_BlendOutTime();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
