#include "..\FUObjectArray.hpp"
#include "AudioSynesthesiaNRT.hpp"
#include "OnsetNRT.hpp"
#include "OnsetNRTSettings.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void _Script_AudioSynesthesia::OnsetNRT::GetChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int32_t InChannel, void*& OutOnsetTimestamps, void*& OutOnsetStrengths) {
    return;
}
_Script_AudioSynesthesia::OnsetNRTSettings*& _Script_AudioSynesthesia::OnsetNRT::get_Settings() {
    return *(_Script_AudioSynesthesia::OnsetNRTSettings**)((uintptr_t)this + 0x78);
}
void _Script_AudioSynesthesia::OnsetNRT::GetNormalizedChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int32_t InChannel, void*& OutOnsetTimestamps, void*& OutOnsetStrengths) {
    return;
}
_Script_CoreUObject::Class* _Script_AudioSynesthesia::OnsetNRT::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AudioSynesthesia.OnsetNRT");
    return result;
}
