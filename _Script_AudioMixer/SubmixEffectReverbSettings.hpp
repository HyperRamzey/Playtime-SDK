#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AudioMixer {
#pragma pack(push, 1)
struct SubmixEffectReverbSettings {
    private: char pad_0[0x40]; public:
    bool get_bBypassEarlyReflections();
    void set_bBypassEarlyReflections(bool value);
    float& get_ReflectionsDelay();
    float& get_GainHF();
    float& get_ReflectionsGain();
    bool get_bBypassLateReflections();
    void set_bBypassLateReflections(bool value);
    float& get_LateDelay();
    float& get_DecayTime();
    float& get_Density();
    float& get_Diffusion();
    float& get_AirAbsorptionGainHF();
    float& get_DecayHFRatio();
    float& get_LateGain();
    float& get_Gain();
    float& get_WetLevel();
    float& get_DryLevel();
    bool get_bBypass();
    void set_bBypass(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
