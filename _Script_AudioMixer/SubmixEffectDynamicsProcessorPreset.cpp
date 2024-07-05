#include "..\FUObjectArray.hpp"
#include "SubmixEffectDynamicsProcessorPreset.hpp"
#include "SubmixEffectDynamicsProcessorSettings.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AudioBus.hpp"
#include "..\_Script_Engine\SoundEffectSubmixPreset.hpp"
#include "..\_Script_Engine\SoundSubmix.hpp"
void _Script_AudioMixer::SubmixEffectDynamicsProcessorPreset::SetAudioBus(_Script_Engine::AudioBus* AudioBus) {
    return;
}
void _Script_AudioMixer::SubmixEffectDynamicsProcessorPreset::SetExternalSubmix(_Script_Engine::SoundSubmix* Submix) {
    return;
}
void* _Script_AudioMixer::SubmixEffectDynamicsProcessorPreset::get_Settings() {
    return (void*)((uintptr_t)this + 0xf0);
}
_Script_CoreUObject::Class* _Script_AudioMixer::SubmixEffectDynamicsProcessorPreset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AudioMixer.SubmixEffectDynamicsProcessorPreset");
    return result;
}
void _Script_AudioMixer::SubmixEffectDynamicsProcessorPreset::SetSettings(_Script_AudioMixer::SubmixEffectDynamicsProcessorSettings& Settings) {
    return;
}
void _Script_AudioMixer::SubmixEffectDynamicsProcessorPreset::ResetKey() {
    return;
}
