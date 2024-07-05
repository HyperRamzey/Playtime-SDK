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
struct LoudnessNRTSettings : public AudioSynesthesiaNRTSettings {
    private: char pad_28[0x18]; public:
    float& get_AnalysisPeriod();
    float& get_MinimumFrequency();
    float& get_MaximumFrequency();
    void* get_CurveType();
    float& get_NoiseFloorDb();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
