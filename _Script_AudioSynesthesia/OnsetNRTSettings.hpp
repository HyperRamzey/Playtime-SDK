#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AudioSynesthesiaNRTSettings.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AudioSynesthesia {
#pragma pack(push, 1)
struct OnsetNRTSettings : public AudioSynesthesiaNRTSettings {
    private: char pad_28[0x18]; public:
    bool get_bDownmixToMono();
    void set_bDownmixToMono(bool value);
    float& get_GranularityInSeconds();
    float& get_Sensitivity();
    float& get_MinimumFrequency();
    float& get_MaximumFrequency();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
