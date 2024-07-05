#include "..\FUObjectArray.hpp"
#include "AudioSynesthesiaNRT.hpp"
#include "LoudnessNRT.hpp"
#include "LoudnessNRTSettings.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_AudioSynesthesia::LoudnessNRTSettings*& _Script_AudioSynesthesia::LoudnessNRT::get_Settings() {
    return *(_Script_AudioSynesthesia::LoudnessNRTSettings**)((uintptr_t)this + 0x78);
}
void _Script_AudioSynesthesia::LoudnessNRT::GetChannelLoudnessAtTime(float InSeconds, int32_t InChannel, float& OutLoudness) {
    return;
}
_Script_CoreUObject::Class* _Script_AudioSynesthesia::LoudnessNRT::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AudioSynesthesia.LoudnessNRT");
    return result;
}
void _Script_AudioSynesthesia::LoudnessNRT::GetLoudnessAtTime(float InSeconds, float& OutLoudness) {
    return;
}
void _Script_AudioSynesthesia::LoudnessNRT::GetNormalizedLoudnessAtTime(float InSeconds, float& OutLoudness) {
    return;
}
void _Script_AudioSynesthesia::LoudnessNRT::GetNormalizedChannelLoudnessAtTime(float InSeconds, int32_t InChannel, float& OutLoudness) {
    return;
}
