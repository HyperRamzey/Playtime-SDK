#include "..\FUObjectArray.hpp"
#include "AudioSynesthesiaNRT.hpp"
#include "ConstantQNRT.hpp"
#include "ConstantQNRTSettings.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void _Script_AudioSynesthesia::ConstantQNRT::GetChannelConstantQAtTime(float InSeconds, int32_t InChannel, void*& OutConstantQ) {
    return;
}
_Script_AudioSynesthesia::ConstantQNRTSettings*& _Script_AudioSynesthesia::ConstantQNRT::get_Settings() {
    return *(_Script_AudioSynesthesia::ConstantQNRTSettings**)((uintptr_t)this + 0x78);
}
_Script_CoreUObject::Class* _Script_AudioSynesthesia::ConstantQNRT::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AudioSynesthesia.ConstantQNRT");
    return result;
}
void _Script_AudioSynesthesia::ConstantQNRT::GetNormalizedChannelConstantQAtTime(float InSeconds, int32_t InChannel, void*& OutConstantQ) {
    return;
}
