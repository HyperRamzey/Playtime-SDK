#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AddUGCDependencyResult.hpp"
void* _Script_SteamCore::AddUGCDependencyResult::get_PublishedFileID() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_SteamCore::AddUGCDependencyResult::get_Result() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_SteamCore::AddUGCDependencyResult::get_ChildPublishedFileId() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_SteamCore::AddUGCDependencyResult::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.AddUGCDependencyResult");
    return result;
}
