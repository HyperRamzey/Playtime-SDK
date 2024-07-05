#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "DownloadItemResult.hpp"
#include "PublishedFileID.hpp"
#include "SteamCoreAsyncAction.hpp"
#include "SteamCoreUGCAsyncActionDownloadItem.hpp"
_Script_SteamCore::SteamCoreUGCAsyncActionDownloadItem* _Script_SteamCore::SteamCoreUGCAsyncActionDownloadItem::DownloadItemAsync(_Script_CoreUObject::Object* WorldContextObject, _Script_SteamCore::PublishedFileID PublishedFileID, bool bHighPriority, float Timeout) {
    return;
}
void* _Script_SteamCore::SteamCoreUGCAsyncActionDownloadItem::get_OnCallback() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamCoreUGCAsyncActionDownloadItem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.SteamCoreUGCAsyncActionDownloadItem");
    return result;
}
void _Script_SteamCore::SteamCoreUGCAsyncActionDownloadItem::HandleCallback(_Script_SteamCore::DownloadItemResult& Data, bool bWasSuccessful) {
    return;
}
