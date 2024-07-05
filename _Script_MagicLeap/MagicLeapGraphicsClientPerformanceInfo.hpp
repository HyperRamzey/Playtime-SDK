#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MagicLeap {
#pragma pack(push, 1)
struct MagicLeapGraphicsClientPerformanceInfo {
    private: char pad_0[0x1c]; public:
    float& get_FrameStartCPUCompAcquireCPUTimeMs();
    float& get_FrameStartCPUFrameEndGPUTimeMs();
    float& get_FrameStartCPUFrameStartCPUTimeMs();
    float& get_FrameDurationCPUTimeMs();
    float& get_FrameDurationGPUTimeMs();
    float& get_FrameInternalDurationCPUTimeMs();
    float& get_FrameInternalDurationGPUTimeMs();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1c
#pragma pack(pop)
}
