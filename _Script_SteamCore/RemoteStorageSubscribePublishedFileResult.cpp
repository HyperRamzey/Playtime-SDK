#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RemoteStorageSubscribePublishedFileResult.hpp"
void* _Script_SteamCore::RemoteStorageSubscribePublishedFileResult::get_Result() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_SteamCore::RemoteStorageSubscribePublishedFileResult::get_PublishedFileID() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_SteamCore::RemoteStorageSubscribePublishedFileResult::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.RemoteStorageSubscribePublishedFileResult");
    return result;
}
