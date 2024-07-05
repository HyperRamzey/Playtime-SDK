#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LocalizedAppName.hpp"
void* _Script_LuminRuntimeSettings::LocalizedAppName::get_LanguageCode() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_LuminRuntimeSettings::LocalizedAppName::get_AppName() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_LuminRuntimeSettings::LocalizedAppName::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LuminRuntimeSettings.LocalizedAppName");
    return result;
}
