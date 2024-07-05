#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RemoteStoragePublishedFileSubscribed.hpp"
_Script_CoreUObject::Class* _Script_SteamCore::RemoteStoragePublishedFileSubscribed::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.RemoteStoragePublishedFileSubscribed");
    return result;
}
void* _Script_SteamCore::RemoteStoragePublishedFileSubscribed::get_PublishedFileID() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_SteamCore::RemoteStoragePublishedFileSubscribed::get_AppID() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
