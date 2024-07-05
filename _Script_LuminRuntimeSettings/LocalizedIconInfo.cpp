#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LocalizedIconInfo.hpp"
void* _Script_LuminRuntimeSettings::LocalizedIconInfo::get_IconModelPath() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_LuminRuntimeSettings::LocalizedIconInfo::get_LanguageCode() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_LuminRuntimeSettings::LocalizedIconInfo::get_IconPortalPath() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_LuminRuntimeSettings::LocalizedIconInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LuminRuntimeSettings.LocalizedIconInfo");
    return result;
}
