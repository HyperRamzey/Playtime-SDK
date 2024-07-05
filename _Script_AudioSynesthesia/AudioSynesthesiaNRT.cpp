#include "..\FUObjectArray.hpp"
#include "..\_Script_AudioAnalyzer\AudioAnalyzerNRT.hpp"
#include "AudioSynesthesiaNRT.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_AudioSynesthesia::AudioSynesthesiaNRT::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AudioSynesthesia.AudioSynesthesiaNRT");
    return result;
}
