#include "..\FUObjectArray.hpp"
#include "AudioEndpointSettingsBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
_Script_CoreUObject::Class* _Script_AudioExtensions::AudioEndpointSettingsBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AudioExtensions.AudioEndpointSettingsBase");
    return result;
}
