#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AddAppDependencyResult.hpp"
void* _Script_SteamCore::AddAppDependencyResult::get_Result() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_SteamCore::AddAppDependencyResult::get_PublishedFileID() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_SteamCore::AddAppDependencyResult::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.AddAppDependencyResult");
    return result;
}
int32_t& _Script_SteamCore::AddAppDependencyResult::get_AppID() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
