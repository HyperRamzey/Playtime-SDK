#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct AudioBus;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct SoundSubmix;
}
namespace _Script_AudioMixer {
#pragma pack(push, 1)
struct SubmixEffectDynamicsProcessorSettings {
    private: char pad_0[0x60]; public:
    void* get_DynamicsProcessorType();
    void* get_PeakMode();
    void* get_LinkMode();
    float& get_InputGainDb();
    float& get_ThresholdDb();
    float& get_Ratio();
    float& get_KneeBandwidthDb();
    float& get_LookAheadMsec();
    float& get_AttackTimeMsec();
    float& get_ReleaseTimeMsec();
    void* get_KeySource();
    _Script_Engine::AudioBus*& get_ExternalAudioBus();
    _Script_Engine::SoundSubmix*& get_ExternalSubmix();
    bool get_bChannelLinked();
    void set_bChannelLinked(bool value);
    bool get_bAnalogMode();
    void set_bAnalogMode(bool value);
    bool get_bBypass();
    void set_bBypass(bool value);
    bool get_bKeyAudition();
    void set_bKeyAudition(bool value);
    float& get_KeyGainDb();
    float& get_OutputGainDb();
    void* get_KeyHighshelf();
    void* get_KeyLowshelf();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
