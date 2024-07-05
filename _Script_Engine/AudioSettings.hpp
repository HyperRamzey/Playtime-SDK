#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_DeveloperSettings\DeveloperSettings.hpp"
namespace _Script_Engine {
struct SoundClass;
}
namespace _Script_Engine {
struct SoundConcurrency;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AudioSettings : public _Script_DeveloperSettings::DeveloperSettings {
    private: char pad_38[0x160]; public:
    void* get_DefaultSoundClassName();
    void* get_DefaultMediaSoundClassName();
    void* get_DefaultSoundConcurrencyName();
    void* get_DefaultBaseSoundMix();
    void* get_VoiPSoundClass();
    void* get_MasterSubmix();
    void* get_BaseDefaultSubmix();
    void* get_ReverbSubmix();
    void* get_EQSubmix();
    void* get_VoiPSampleRate();
    float& get_DefaultReverbSendLevel();
    int32_t& get_MaximumConcurrentStreams();
    float& get_GlobalMinPitchScale();
    float& get_GlobalMaxPitchScale();
    void* get_QualityLevels();
    bool get_bAllowPlayWhenSilent();
    void set_bAllowPlayWhenSilent(bool value);
    bool get_bDisableMasterEQ();
    void set_bDisableMasterEQ(bool value);
    bool get_bAllowCenterChannel3DPanning();
    void set_bAllowCenterChannel3DPanning(bool value);
    void* get_NumStoppingSources();
    void* get_PanningMethod();
    void* get_MonoChannelUpmixMethod();
    void* get_DialogueFilenameFormat();
    void* get_DebugSounds();
    void* get_DefaultAudioBuses();
    _Script_Engine::SoundClass*& get_DefaultSoundClass();
    _Script_Engine::SoundClass*& get_DefaultMediaSoundClass();
    _Script_Engine::SoundConcurrency*& get_DefaultSoundConcurrency();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x198
#pragma pack(pop)
}
