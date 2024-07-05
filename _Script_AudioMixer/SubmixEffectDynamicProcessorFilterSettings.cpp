#include "..\FUObjectArray.hpp"
#include "SubmixEffectDynamicProcessorFilterSettings.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void _Script_AudioMixer::SubmixEffectDynamicProcessorFilterSettings::set_bEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AudioMixer::SubmixEffectDynamicProcessorFilterSettings::get_bEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
float& _Script_AudioMixer::SubmixEffectDynamicProcessorFilterSettings::get_Cutoff() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_AudioMixer::SubmixEffectDynamicProcessorFilterSettings::get_GainDb() {
    return *(float*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_AudioMixer::SubmixEffectDynamicProcessorFilterSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AudioMixer.SubmixEffectDynamicProcessorFilterSettings");
    return result;
}
