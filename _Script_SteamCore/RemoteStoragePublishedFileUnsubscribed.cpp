#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RemoteStoragePublishedFileUnsubscribed.hpp"
void* _Script_SteamCore::RemoteStoragePublishedFileUnsubscribed::get_PublishedFileID() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_SteamCore::RemoteStoragePublishedFileUnsubscribed::get_AppID() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_SteamCore::RemoteStoragePublishedFileUnsubscribed::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.RemoteStoragePublishedFileUnsubscribed");
    return result;
}
