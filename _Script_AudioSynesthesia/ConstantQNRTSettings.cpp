#include "..\FUObjectArray.hpp"
#include "AudioSynesthesiaNRTSettings.hpp"
#include "ConstantQNRTSettings.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_AudioSynesthesia::ConstantQNRTSettings::get_StartingFrequency() {
    return *(float*)((uintptr_t)this + 0x28);
}
void* _Script_AudioSynesthesia::ConstantQNRTSettings::get_WindowType() {
    return (void*)((uintptr_t)this + 0x3a);
}
int32_t& _Script_AudioSynesthesia::ConstantQNRTSettings::get_NumBands() {
    return *(int32_t*)((uintptr_t)this + 0x2c);
}
float& _Script_AudioSynesthesia::ConstantQNRTSettings::get_NumBandsPerOctave() {
    return *(float*)((uintptr_t)this + 0x30);
}
bool _Script_AudioSynesthesia::ConstantQNRTSettings::get_bDownmixToMono() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
float& _Script_AudioSynesthesia::ConstantQNRTSettings::get_AnalysisPeriod() {
    return *(float*)((uintptr_t)this + 0x34);
}
void _Script_AudioSynesthesia::ConstantQNRTSettings::set_bDownmixToMono(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_AudioSynesthesia::ConstantQNRTSettings::get_FFTSize() {
    return (void*)((uintptr_t)this + 0x39);
}
void* _Script_AudioSynesthesia::ConstantQNRTSettings::get_SpectrumType() {
    return (void*)((uintptr_t)this + 0x3b);
}
float& _Script_AudioSynesthesia::ConstantQNRTSettings::get_BandWidthStretch() {
    return *(float*)((uintptr_t)this + 0x3c);
}
void* _Script_AudioSynesthesia::ConstantQNRTSettings::get_CQTNormalization() {
    return (void*)((uintptr_t)this + 0x40);
}
float& _Script_AudioSynesthesia::ConstantQNRTSettings::get_NoiseFloorDb() {
    return *(float*)((uintptr_t)this + 0x44);
}
_Script_CoreUObject::Class* _Script_AudioSynesthesia::ConstantQNRTSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AudioSynesthesia.ConstantQNRTSettings");
    return result;
}
