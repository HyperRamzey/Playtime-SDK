#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\SkyLight.hpp"
namespace _Script_AugmentedReality {
struct AREnvironmentCaptureProbe;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AugmentedReality {
#pragma pack(push, 1)
struct ARSkyLight : public _Script_Engine::SkyLight {
    private: char pad_230[0x10]; public:
    _Script_AugmentedReality::AREnvironmentCaptureProbe*& get_CaptureProbe();
    static _Script_CoreUObject::Class* static_class();
    void SetEnvironmentCaptureProbe(_Script_AugmentedReality::AREnvironmentCaptureProbe* InCaptureProbe);
}; // Size: 0x240
#pragma pack(pop)
}
