#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "PublishedFileID.hpp"
#include "RemoteStorageSubscribePublishedFileResult.hpp"
#include "SteamCoreAsyncAction.hpp"
#include "SteamCoreUGCAsyncActionUnsubscribeItem.hpp"
void* _Script_SteamCore::SteamCoreUGCAsyncActionUnsubscribeItem::get_OnCallback() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamCoreUGCAsyncActionUnsubscribeItem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.SteamCoreUGCAsyncActionUnsubscribeItem");
    return result;
}
_Script_SteamCore::SteamCoreUGCAsyncActionUnsubscribeItem* _Script_SteamCore::SteamCoreUGCAsyncActionUnsubscribeItem::UnsubscribeItemAsync(_Script_CoreUObject::Object* WorldContextObject, _Script_SteamCore::PublishedFileID PublishedFileIDs, float Timeout) {
    return;
}
void _Script_SteamCore::SteamCoreUGCAsyncActionUnsubscribeItem::HandleCallback(_Script_SteamCore::RemoteStorageSubscribePublishedFileResult& Data, bool bWasSuccessful) {
    return;
}
