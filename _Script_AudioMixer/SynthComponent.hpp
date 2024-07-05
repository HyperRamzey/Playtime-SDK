#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\SceneComponent.hpp"
namespace _Script_Engine {
struct SoundAttenuation;
}
namespace _Script_Engine {
struct SoundSubmixBase;
}
namespace _Script_Engine {
struct SoundConcurrency;
}
namespace _Script_Engine {
struct AudioComponent;
}
namespace _Script_Engine {
struct SoundClass;
}
namespace _Script_Engine {
struct SoundEffectSourcePresetChain;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AudioMixer {
struct SynthSound;
}
namespace _Script_AudioMixer {
#pragma pack(push, 1)
struct SynthComponent : public _Script_Engine::SceneComponent {
    private: char pad_200[0x4c0]; public:
    bool get_bAutoDestroy();
    void set_bAutoDestroy(bool value);
    bool get_bStopWhenOwnerDestroyed();
    void set_bStopWhenOwnerDestroyed(bool value);
    bool get_bAllowSpatialization();
    void set_bAllowSpatialization(bool value);
    bool get_bOverrideAttenuation();
    void set_bOverrideAttenuation(bool value);
    bool get_bEnableBusSends();
    void set_bEnableBusSends(bool value);
    bool get_bEnableBaseSubmix();
    void set_bEnableBaseSubmix(bool value);
    bool get_bEnableSubmixSends();
    void set_bEnableSubmixSends(bool value);
    _Script_Engine::SoundAttenuation*& get_AttenuationSettings();
    void* get_AttenuationOverrides();
    _Script_Engine::SoundConcurrency*& get_ConcurrencySettings();
    void* get_ConcurrencySet();
    _Script_Engine::SoundClass*& get_SoundClass();
    _Script_Engine::SoundEffectSourcePresetChain*& get_SourceEffectChain();
    _Script_Engine::SoundSubmixBase*& get_SoundSubmix();
    void* get_SoundSubmixSends();
    void* get_BusSends();
    void* get_PreEffectBusSends();
    bool get_bIsUISound();
    void set_bIsUISound(bool value);
    bool get_bIsPreviewSound();
    void set_bIsPreviewSound(bool value);
    int32_t& get_EnvelopeFollowerAttackTime();
    int32_t& get_EnvelopeFollowerReleaseTime();
    void* get_OnAudioEnvelopeValue();
    _Script_AudioMixer::SynthSound*& get_Synth();
    _Script_Engine::AudioComponent*& get_AudioComponent();
    static _Script_CoreUObject::Class* static_class();
    void Stop();
    void Start();
    void SetVolumeMultiplier(float VolumeMultiplier);
    void SetSubmixSend(_Script_Engine::SoundSubmixBase* Submix, float SendLevel);
    void SetOutputToBusOnly(bool bInOutputToBusOnly);
    void SetLowPassFilterFrequency(float InLowPassFilterFrequency);
    void SetLowPassFilterEnabled(bool InLowPassFilterEnabled);
    bool IsPlaying();
}; // Size: 0x6c0
#pragma pack(pop)
}
