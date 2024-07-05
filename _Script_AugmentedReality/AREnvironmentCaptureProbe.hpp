#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ARTrackedGeometry.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
namespace _Script_AugmentedReality {
struct AREnvironmentCaptureProbeTexture;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AugmentedReality {
#pragma pack(push, 1)
struct AREnvironmentCaptureProbe : public ARTrackedGeometry {
    private: char pad_100[0x10]; public:
    void* get_Extent();
    _Script_AugmentedReality::AREnvironmentCaptureProbeTexture*& get_EnvironmentCaptureTexture();
    static _Script_CoreUObject::Class* static_class();
    _Script_CoreUObject::Vector GetExtent();
    _Script_AugmentedReality::AREnvironmentCaptureProbeTexture* GetEnvironmentCaptureTexture();
}; // Size: 0x110
#pragma pack(pop)
}
