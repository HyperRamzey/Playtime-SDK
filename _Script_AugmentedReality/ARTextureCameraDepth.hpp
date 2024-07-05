#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ARTexture.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AugmentedReality {
#pragma pack(push, 1)
struct ARTextureCameraDepth : public ARTexture {
    void* get_DepthQuality();
    void* get_DepthAccuracy();
    bool get_bIsTemporallySmoothed();
    void set_bIsTemporallySmoothed(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1a0
#pragma pack(pop)
}
