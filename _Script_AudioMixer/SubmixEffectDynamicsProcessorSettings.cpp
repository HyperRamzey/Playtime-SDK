#include "..\FUObjectArray.hpp"
#include "SubmixEffectDynamicsProcessorSettings.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AudioBus.hpp"
#include "..\_Script_Engine\SoundSubmix.hpp"
void* _Script_AudioMixer::SubmixEffectDynamicsProcessorSettings::get_DynamicsProcessorType() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_AudioMixer::SubmixEffectDynamicsProcessorSettings::get_LookAheadMsec() {
    return *(float*)((uintptr_t)this + 0x14);
}
void* _Script_AudioMixer::SubmixEffectDynamicsProcessorSettings::get_PeakMode() {
    return (void*)((uintptr_t)this + 0x1);
}
void* _Script_AudioMixer::SubmixEffectDynamicsProcessorSettings::get_LinkMode() {
    return (void*)((uintptr_t)this + 0x2);
}
float& _Script_AudioMixer::SubmixEffectDynamicsProcessorSettings::get_InputGainDb() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_AudioMixer::SubmixEffectDynamicsProcessorSettings::get_OutputGainDb() {
    return *(float*)((uintptr_t)this + 0x40);
}
float& _Script_AudioMixer::SubmixEffectDynamicsProcessorSettings::get_ThresholdDb() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_AudioMixer::SubmixEffectDynamicsProcessorSettings::get_Ratio() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_AudioMixer::SubmixEffectDynamicsProcessorSettings::get_KneeBandwidthDb() {
    return *(float*)((uintptr_t)this + 0x10);
}
void _Script_AudioMixer::SubmixEffectDynamicsProcessorSettings::set_bBypass(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
float& _Script_AudioMixer::SubmixEffectDynamicsProcessorSettings::get_AttackTimeMsec() {
    return *(float*)((uintptr_t)this + 0x18);
}
float& _Script_AudioMixer::SubmixEffectDynamicsProcessorSettings::get_ReleaseTimeMsec() {
    return *(float*)((uintptr_t)this + 0x1c);
}
void* _Script_AudioMixer::SubmixEffectDynamicsProcessorSettings::get_KeySource() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_AudioMixer::SubmixEffectDynamicsProcessorSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AudioMixer.SubmixEffectDynamicsProcessorSettings");
    return result;
}
_Script_Engine::AudioBus*& _Script_AudioMixer::SubmixEffectDynamicsProcessorSettings::get_ExternalAudioBus() {
    return *(_Script_Engine::AudioBus**)((uintptr_t)this + 0x28);
}
_Script_Engine::SoundSubmix*& _Script_AudioMixer::SubmixEffectDynamicsProcessorSettings::get_ExternalSubmix() {
    return *(_Script_Engine::SoundSubmix**)((uintptr_t)this + 0x30);
}
bool _Script_AudioMixer::SubmixEffectDynamicsProcessorSettings::get_bChannelLinked() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
void _Script_AudioMixer::SubmixEffectDynamicsProcessorSettings::set_bChannelLinked(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AudioMixer::SubmixEffectDynamicsProcessorSettings::get_bKeyAudition() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 8 != 0;
}
bool _Script_AudioMixer::SubmixEffectDynamicsProcessorSettings::get_bAnalogMode() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 2 != 0;
}
void _Script_AudioMixer::SubmixEffectDynamicsProcessorSettings::set_bAnalogMode(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_AudioMixer::SubmixEffectDynamicsProcessorSettings::get_bBypass() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 4 != 0;
}
void _Script_AudioMixer::SubmixEffectDynamicsProcessorSettings::set_bKeyAudition(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
float& _Script_AudioMixer::SubmixEffectDynamicsProcessorSettings::get_KeyGainDb() {
    return *(float*)((uintptr_t)this + 0x3c);
}
void* _Script_AudioMixer::SubmixEffectDynamicsProcessorSettings::get_KeyHighshelf() {
    return (void*)((uintptr_t)this + 0x44);
}
void* _Script_AudioMixer::SubmixEffectDynamicsProcessorSettings::get_KeyLowshelf() {
    return (void*)((uintptr_t)this + 0x50);
}
