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
struct ConstantQNRTSettings : public AudioSynesthesiaNRTSettings {
    private: char pad_28[0x20]; public:
    float& get_StartingFrequency();
    int32_t& get_NumBands();
    float& get_NumBandsPerOctave();
    float& get_AnalysisPeriod();
    bool get_bDownmixToMono();
    void set_bDownmixToMono(bool value);
    void* get_FFTSize();
    void* get_WindowType();
    void* get_SpectrumType();
    float& get_BandWidthStretch();
    void* get_CQTNormalization();
    float& get_NoiseFloorDb();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
