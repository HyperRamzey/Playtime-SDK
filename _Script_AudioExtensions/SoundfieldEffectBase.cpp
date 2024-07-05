#include "..\FUObjectArray.hpp"
#include "SoundfieldEffectBase.hpp"
#include "SoundfieldEffectSettingsBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
_Script_AudioExtensions::SoundfieldEffectSettingsBase*& _Script_AudioExtensions::SoundfieldEffectBase::get_Settings() {
    return *(_Script_AudioExtensions::SoundfieldEffectSettingsBase**)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_AudioExtensions::SoundfieldEffectBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AudioExtensions.SoundfieldEffectBase");
    return result;
}
