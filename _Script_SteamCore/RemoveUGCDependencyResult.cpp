#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RemoveUGCDependencyResult.hpp"
void* _Script_SteamCore::RemoveUGCDependencyResult::get_Result() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_SteamCore::RemoveUGCDependencyResult::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.RemoveUGCDependencyResult");
    return result;
}
void* _Script_SteamCore::RemoveUGCDependencyResult::get_PublishedFileID() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_SteamCore::RemoveUGCDependencyResult::get_ChildPublishedFileId() {
    return (void*)((uintptr_t)this + 0x10);
}
