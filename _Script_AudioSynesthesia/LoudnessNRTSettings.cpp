#include "..\FUObjectArray.hpp"
#include "AudioSynesthesiaNRTSettings.hpp"
#include "LoudnessNRTSettings.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_AudioSynesthesia::LoudnessNRTSettings::get_AnalysisPeriod() {
    return *(float*)((uintptr_t)this + 0x28);
}
float& _Script_AudioSynesthesia::LoudnessNRTSettings::get_NoiseFloorDb() {
    return *(float*)((uintptr_t)this + 0x38);
}
float& _Script_AudioSynesthesia::LoudnessNRTSettings::get_MinimumFrequency() {
    return *(float*)((uintptr_t)this + 0x2c);
}
float& _Script_AudioSynesthesia::LoudnessNRTSettings::get_MaximumFrequency() {
    return *(float*)((uintptr_t)this + 0x30);
}
void* _Script_AudioSynesthesia::LoudnessNRTSettings::get_CurveType() {
    return (void*)((uintptr_t)this + 0x34);
}
_Script_CoreUObject::Class* _Script_AudioSynesthesia::LoudnessNRTSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AudioSynesthesia.LoudnessNRTSettings");
    return result;
}
