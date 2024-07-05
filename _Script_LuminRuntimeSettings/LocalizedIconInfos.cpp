#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LocalizedIconInfos.hpp"
void* _Script_LuminRuntimeSettings::LocalizedIconInfos::get_IconData() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_LuminRuntimeSettings::LocalizedIconInfos::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LuminRuntimeSettings.LocalizedIconInfos");
    return result;
}
