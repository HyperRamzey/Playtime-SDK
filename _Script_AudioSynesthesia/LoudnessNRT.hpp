#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AudioSynesthesiaNRT.hpp"
namespace _Script_AudioSynesthesia {
struct LoudnessNRTSettings;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AudioSynesthesia {
#pragma pack(push, 1)
struct LoudnessNRT : public AudioSynesthesiaNRT {
    private: char pad_78[0x8]; public:
    _Script_AudioSynesthesia::LoudnessNRTSettings*& get_Settings();
    static _Script_CoreUObject::Class* static_class();
    void GetNormalizedLoudnessAtTime(float InSeconds, float& OutLoudness);
    void GetNormalizedChannelLoudnessAtTime(float InSeconds, int32_t InChannel, float& OutLoudness);
    void GetLoudnessAtTime(float InSeconds, float& OutLoudness);
    void GetChannelLoudnessAtTime(float InSeconds, int32_t InChannel, float& OutLoudness);
}; // Size: 0x80
#pragma pack(pop)
}
