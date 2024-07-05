#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RTXGI {
#pragma pack(push, 1)
struct ProbeRelocation {
    private: char pad_0[0xc]; public:
    bool get_AutomaticProbeRelocation();
    void set_AutomaticProbeRelocation(bool value);
    float& get_ProbeMinFrontfaceDistance();
    float& get_ProbeBackfaceThreshold();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc
#pragma pack(pop)
}
