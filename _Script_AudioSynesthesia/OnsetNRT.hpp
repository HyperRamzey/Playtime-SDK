#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AudioSynesthesiaNRT.hpp"
namespace _Script_AudioSynesthesia {
struct OnsetNRTSettings;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AudioSynesthesia {
#pragma pack(push, 1)
struct OnsetNRT : public AudioSynesthesiaNRT {
    private: char pad_78[0x8]; public:
    _Script_AudioSynesthesia::OnsetNRTSettings*& get_Settings();
    static _Script_CoreUObject::Class* static_class();
    void GetNormalizedChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int32_t InChannel, void*& OutOnsetTimestamps, void*& OutOnsetStrengths);
    void GetChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int32_t InChannel, void*& OutOnsetTimestamps, void*& OutOnsetStrengths);
}; // Size: 0x80
#pragma pack(pop)
}
