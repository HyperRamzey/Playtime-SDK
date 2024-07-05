#include "..\FUObjectArray.hpp"
#include "AudioEndpointSettingsBase.hpp"
#include "DummyEndpointSettings.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_AudioExtensions::DummyEndpointSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AudioExtensions.DummyEndpointSettings");
    return result;
}
