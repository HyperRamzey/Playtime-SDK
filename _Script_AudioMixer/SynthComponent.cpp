#include "..\FUObjectArray.hpp"
#include "SynthComponent.hpp"
#include "SynthSound.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AudioComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SoundAttenuation.hpp"
#include "..\_Script_Engine\SoundClass.hpp"
#include "..\_Script_Engine\SoundConcurrency.hpp"
#include "..\_Script_Engine\SoundEffectSourcePresetChain.hpp"
#include "..\_Script_Engine\SoundSubmixBase.hpp"
void _Script_AudioMixer::SynthComponent::set_bOverrideAttenuation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1f8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1f8 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void _Script_AudioMixer::SynthComponent::set_bStopWhenOwnerDestroyed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1f8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1f8 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_AudioMixer::SynthComponent::set_bAutoDestroy(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1f8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1f8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AudioMixer::SynthComponent::get_bAutoDestroy() {
    return (*(uint8_t*)((uintptr_t)this + 0x1f8 + 0)) & 1 != 0;
}
bool _Script_AudioMixer::SynthComponent::get_bStopWhenOwnerDestroyed() {
    return (*(uint8_t*)((uintptr_t)this + 0x1f8 + 0)) & 2 != 0;
}
bool _Script_AudioMixer::SynthComponent::get_bAllowSpatialization() {
    return (*(uint8_t*)((uintptr_t)this + 0x1f8 + 0)) & 4 != 0;
}
void _Script_AudioMixer::SynthComponent::set_bAllowSpatialization(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1f8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1f8 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_AudioMixer::SynthComponent::set_bIsUISound(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x648 + 0);
    *(uint8_t*)((uintptr_t)this + 0x648 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AudioMixer::SynthComponent::get_bOverrideAttenuation() {
    return (*(uint8_t*)((uintptr_t)this + 0x1f8 + 0)) & 8 != 0;
}
bool _Script_AudioMixer::SynthComponent::get_bEnableBusSends() {
    return (*(uint8_t*)((uintptr_t)this + 0x1fc + 0)) & 1 != 0;
}
void _Script_AudioMixer::SynthComponent::set_bEnableBusSends(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1fc + 0);
    *(uint8_t*)((uintptr_t)this + 0x1fc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_AudioMixer::SynthComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AudioMixer.SynthComponent");
    return result;
}
bool _Script_AudioMixer::SynthComponent::get_bEnableBaseSubmix() {
    return (*(uint8_t*)((uintptr_t)this + 0x1fc + 0)) & 2 != 0;
}
void _Script_AudioMixer::SynthComponent::set_bEnableSubmixSends(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1fc + 0);
    *(uint8_t*)((uintptr_t)this + 0x1fc + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_AudioMixer::SynthComponent::set_bEnableBaseSubmix(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1fc + 0);
    *(uint8_t*)((uintptr_t)this + 0x1fc + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_AudioMixer::SynthComponent::get_bEnableSubmixSends() {
    return (*(uint8_t*)((uintptr_t)this + 0x1fc + 0)) & 4 != 0;
}
int32_t& _Script_AudioMixer::SynthComponent::get_EnvelopeFollowerReleaseTime() {
    return *(int32_t*)((uintptr_t)this + 0x650);
}
_Script_Engine::SoundAttenuation*& _Script_AudioMixer::SynthComponent::get_AttenuationSettings() {
    return *(_Script_Engine::SoundAttenuation**)((uintptr_t)this + 0x200);
}
void* _Script_AudioMixer::SynthComponent::get_AttenuationOverrides() {
    return (void*)((uintptr_t)this + 0x208);
}
_Script_Engine::SoundConcurrency*& _Script_AudioMixer::SynthComponent::get_ConcurrencySettings() {
    return *(_Script_Engine::SoundConcurrency**)((uintptr_t)this + 0x5a8);
}
bool _Script_AudioMixer::SynthComponent::IsPlaying() {
    return;
}
int32_t& _Script_AudioMixer::SynthComponent::get_EnvelopeFollowerAttackTime() {
    return *(int32_t*)((uintptr_t)this + 0x64c);
}
void* _Script_AudioMixer::SynthComponent::get_ConcurrencySet() {
    return (void*)((uintptr_t)this + 0x5b0);
}
_Script_Engine::SoundClass*& _Script_AudioMixer::SynthComponent::get_SoundClass() {
    return *(_Script_Engine::SoundClass**)((uintptr_t)this + 0x600);
}
_Script_Engine::SoundEffectSourcePresetChain*& _Script_AudioMixer::SynthComponent::get_SourceEffectChain() {
    return *(_Script_Engine::SoundEffectSourcePresetChain**)((uintptr_t)this + 0x608);
}
_Script_Engine::SoundSubmixBase*& _Script_AudioMixer::SynthComponent::get_SoundSubmix() {
    return *(_Script_Engine::SoundSubmixBase**)((uintptr_t)this + 0x610);
}
void _Script_AudioMixer::SynthComponent::SetLowPassFilterFrequency(float InLowPassFilterFrequency) {
    return;
}
void* _Script_AudioMixer::SynthComponent::get_SoundSubmixSends() {
    return (void*)((uintptr_t)this + 0x618);
}
void* _Script_AudioMixer::SynthComponent::get_BusSends() {
    return (void*)((uintptr_t)this + 0x628);
}
void* _Script_AudioMixer::SynthComponent::get_PreEffectBusSends() {
    return (void*)((uintptr_t)this + 0x638);
}
bool _Script_AudioMixer::SynthComponent::get_bIsUISound() {
    return (*(uint8_t*)((uintptr_t)this + 0x648 + 0)) & 1 != 0;
}
bool _Script_AudioMixer::SynthComponent::get_bIsPreviewSound() {
    return (*(uint8_t*)((uintptr_t)this + 0x648 + 0)) & 2 != 0;
}
void _Script_AudioMixer::SynthComponent::SetLowPassFilterEnabled(bool InLowPassFilterEnabled) {
    return;
}
void _Script_AudioMixer::SynthComponent::set_bIsPreviewSound(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x648 + 0);
    *(uint8_t*)((uintptr_t)this + 0x648 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_AudioMixer::SynthComponent::get_OnAudioEnvelopeValue() {
    return (void*)((uintptr_t)this + 0x658);
}
void _Script_AudioMixer::SynthComponent::Stop() {
    return;
}
_Script_AudioMixer::SynthSound*& _Script_AudioMixer::SynthComponent::get_Synth() {
    return *(_Script_AudioMixer::SynthSound**)((uintptr_t)this + 0x688);
}
_Script_Engine::AudioComponent*& _Script_AudioMixer::SynthComponent::get_AudioComponent() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x690);
}
void _Script_AudioMixer::SynthComponent::Start() {
    return;
}
void _Script_AudioMixer::SynthComponent::SetVolumeMultiplier(float VolumeMultiplier) {
    return;
}
void _Script_AudioMixer::SynthComponent::SetSubmixSend(_Script_Engine::SoundSubmixBase* Submix, float SendLevel) {
    return;
}
void _Script_AudioMixer::SynthComponent::SetOutputToBusOnly(bool bInOutputToBusOnly) {
    return;
}
