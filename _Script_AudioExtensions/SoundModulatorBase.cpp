#include "..\FUObjectArray.hpp"
#include "SoundModulatorBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
_Script_CoreUObject::Class* _Script_AudioExtensions::SoundModulatorBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AudioExtensions.SoundModulatorBase");
    return result;
}
