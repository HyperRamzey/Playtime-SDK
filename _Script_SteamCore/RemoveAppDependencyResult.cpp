#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RemoveAppDependencyResult.hpp"
void* _Script_SteamCore::RemoveAppDependencyResult::get_Result() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_SteamCore::RemoveAppDependencyResult::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.RemoveAppDependencyResult");
    return result;
}
void* _Script_SteamCore::RemoveAppDependencyResult::get_PublishedFileID() {
    return (void*)((uintptr_t)this + 0x8);
}
int32_t& _Script_SteamCore::RemoveAppDependencyResult::get_AppID() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}