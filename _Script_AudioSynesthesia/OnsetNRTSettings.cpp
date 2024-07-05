#include "..\FUObjectArray.hpp"
#include "AudioSynesthesiaNRTSettings.hpp"
#include "OnsetNRTSettings.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_AudioSynesthesia::OnsetNRTSettings::get_MaximumFrequency() {
    return *(float*)((uintptr_t)this + 0x38);
}
bool _Script_AudioSynesthesia::OnsetNRTSettings::get_bDownmixToMono() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
float& _Script_AudioSynesthesia::OnsetNRTSettings::get_Sensitivity() {
    return *(float*)((uintptr_t)this + 0x30);
}
void _Script_AudioSynesthesia::OnsetNRTSettings::set_bDownmixToMono(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_AudioSynesthesia::OnsetNRTSettings::get_GranularityInSeconds() {
    return *(float*)((uintptr_t)this + 0x2c);
}
float& _Script_AudioSynesthesia::OnsetNRTSettings::get_MinimumFrequency() {
    return *(float*)((uintptr_t)this + 0x34);
}
_Script_CoreUObject::Class* _Script_AudioSynesthesia::OnsetNRTSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AudioSynesthesia.OnsetNRTSettings");
    return result;
}
