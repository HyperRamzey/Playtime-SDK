#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RemoteStorageUnsubscribePublishedFileResult.hpp"
void* _Script_SteamCore::RemoteStorageUnsubscribePublishedFileResult::get_Result() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_SteamCore::RemoteStorageUnsubscribePublishedFileResult::get_PublishedFileID() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_SteamCore::RemoteStorageUnsubscribePublishedFileResult::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.RemoteStorageUnsubscribePublishedFileResult");
    return result;
}
