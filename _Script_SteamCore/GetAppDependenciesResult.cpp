#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GetAppDependenciesResult.hpp"
void* _Script_SteamCore::GetAppDependenciesResult::get_Result() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_SteamCore::GetAppDependenciesResult::get_TotalNumAppDependencies() {
    return *(int32_t*)((uintptr_t)this + 0x24);
}
void* _Script_SteamCore::GetAppDependenciesResult::get_PublishedFileID() {
    return (void*)((uintptr_t)this + 0x8);
}
int32_t& _Script_SteamCore::GetAppDependenciesResult::get_NumAppDependencies() {
    return *(int32_t*)((uintptr_t)this + 0x20);
}
void* _Script_SteamCore::GetAppDependenciesResult::get_AppIDs() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_SteamCore::GetAppDependenciesResult::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.GetAppDependenciesResult");
    return result;
}
