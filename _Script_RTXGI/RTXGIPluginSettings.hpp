#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_DeveloperSettings\DeveloperSettings.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RTXGI {
#pragma pack(push, 1)
struct RTXGIPluginSettings : public _Script_DeveloperSettings::DeveloperSettings {
    private: char pad_38[0x18]; public:
    void* get_IrradianceBits();
    void* get_DistanceBits();
    float& get_DebugProbeRadius();
    int32_t& get_ProbeUpdateRayBudget();
    void* get_ProbesVisualization();
    float& get_ProbesDepthScale();
    bool get_SerializeProbes();
    void set_SerializeProbes(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
