#include "..\FUObjectArray.hpp"
#include "..\_Script_AudioAnalyzer\AudioAnalyzerNRTSettings.hpp"
#include "AudioSynesthesiaNRTSettings.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_AudioSynesthesia::AudioSynesthesiaNRTSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AudioSynesthesia.AudioSynesthesiaNRTSettings");
    return result;
}
