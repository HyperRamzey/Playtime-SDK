#include "..\FUObjectArray.hpp"
#include "SpatializationPluginSourceSettingsBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
_Script_CoreUObject::Class* _Script_AudioExtensions::SpatializationPluginSourceSettingsBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AudioExtensions.SpatializationPluginSourceSettingsBase");
    return result;
}
