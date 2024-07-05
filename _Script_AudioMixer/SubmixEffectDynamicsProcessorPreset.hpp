#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\SoundEffectSubmixPreset.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct AudioBus;
}
namespace _Script_AudioMixer {
struct SubmixEffectDynamicsProcessorSettings;
}
namespace _Script_Engine {
struct SoundSubmix;
}
namespace _Script_AudioMixer {
#pragma pack(push, 1)
struct SubmixEffectDynamicsProcessorPreset : public _Script_Engine::SoundEffectSubmixPreset {
    private: char pad_68[0xe8]; public:
    void* get_Settings();
    static _Script_CoreUObject::Class* static_class();
    void SetSettings(_Script_AudioMixer::SubmixEffectDynamicsProcessorSettings& Settings);
    void SetExternalSubmix(_Script_Engine::SoundSubmix* Submix);
    void SetAudioBus(_Script_Engine::AudioBus* AudioBus);
    void ResetKey();
}; // Size: 0x150
#pragma pack(pop)
}
