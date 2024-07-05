#include "..\FUObjectArray.hpp"
#include "SubmixEffectReverbSettings.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
bool _Script_AudioMixer::SubmixEffectReverbSettings::get_bBypassEarlyReflections() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_AudioMixer::SubmixEffectReverbSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AudioMixer.SubmixEffectReverbSettings");
    return result;
}
bool _Script_AudioMixer::SubmixEffectReverbSettings::get_bBypassLateReflections() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 1 != 0;
}
float& _Script_AudioMixer::SubmixEffectReverbSettings::get_DecayHFRatio() {
    return *(float*)((uintptr_t)this + 0x28);
}
void _Script_AudioMixer::SubmixEffectReverbSettings::set_bBypassEarlyReflections(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_AudioMixer::SubmixEffectReverbSettings::set_bBypassLateReflections(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_AudioMixer::SubmixEffectReverbSettings::get_ReflectionsDelay() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_AudioMixer::SubmixEffectReverbSettings::get_ReflectionsGain() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_AudioMixer::SubmixEffectReverbSettings::get_GainHF() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_AudioMixer::SubmixEffectReverbSettings::get_LateDelay() {
    return *(float*)((uintptr_t)this + 0x14);
}
float& _Script_AudioMixer::SubmixEffectReverbSettings::get_DecayTime() {
    return *(float*)((uintptr_t)this + 0x18);
}
float& _Script_AudioMixer::SubmixEffectReverbSettings::get_Density() {
    return *(float*)((uintptr_t)this + 0x1c);
}
float& _Script_AudioMixer::SubmixEffectReverbSettings::get_Diffusion() {
    return *(float*)((uintptr_t)this + 0x20);
}
float& _Script_AudioMixer::SubmixEffectReverbSettings::get_AirAbsorptionGainHF() {
    return *(float*)((uintptr_t)this + 0x24);
}
float& _Script_AudioMixer::SubmixEffectReverbSettings::get_LateGain() {
    return *(float*)((uintptr_t)this + 0x2c);
}
float& _Script_AudioMixer::SubmixEffectReverbSettings::get_Gain() {
    return *(float*)((uintptr_t)this + 0x30);
}
float& _Script_AudioMixer::SubmixEffectReverbSettings::get_WetLevel() {
    return *(float*)((uintptr_t)this + 0x34);
}
float& _Script_AudioMixer::SubmixEffectReverbSettings::get_DryLevel() {
    return *(float*)((uintptr_t)this + 0x38);
}
bool _Script_AudioMixer::SubmixEffectReverbSettings::get_bBypass() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c + 0)) & 1 != 0;
}
void _Script_AudioMixer::SubmixEffectReverbSettings::set_bBypass(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
