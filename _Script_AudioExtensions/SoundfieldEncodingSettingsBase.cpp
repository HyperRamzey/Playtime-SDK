#include "..\FUObjectArray.hpp"
#include "SoundfieldEncodingSettingsBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
_Script_CoreUObject::Class* _Script_AudioExtensions::SoundfieldEncodingSettingsBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AudioExtensions.SoundfieldEncodingSettingsBase");
    return result;
}
