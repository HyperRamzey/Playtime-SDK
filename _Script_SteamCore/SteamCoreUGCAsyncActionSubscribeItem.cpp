#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "PublishedFileID.hpp"
#include "RemoteStorageSubscribePublishedFileResult.hpp"
#include "SteamCoreAsyncAction.hpp"
#include "SteamCoreUGCAsyncActionSubscribeItem.hpp"
void* _Script_SteamCore::SteamCoreUGCAsyncActionSubscribeItem::get_OnCallback() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamCoreUGCAsyncActionSubscribeItem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.SteamCoreUGCAsyncActionSubscribeItem");
    return result;
}
_Script_SteamCore::SteamCoreUGCAsyncActionSubscribeItem* _Script_SteamCore::SteamCoreUGCAsyncActionSubscribeItem::SubscribeItemAsync(_Script_CoreUObject::Object* WorldContextObject, _Script_SteamCore::PublishedFileID PublishedFileIDs, float Timeout) {
    return;
}
void _Script_SteamCore::SteamCoreUGCAsyncActionSubscribeItem::HandleCallback(_Script_SteamCore::RemoteStorageSubscribePublishedFileResult& Data, bool bWasSuccessful) {
    return;
}
