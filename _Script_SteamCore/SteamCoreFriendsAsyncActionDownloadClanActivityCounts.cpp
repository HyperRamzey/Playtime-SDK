#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "DownloadClanActivityCountsResult.hpp"
#include "SteamCoreAsyncAction.hpp"
#include "SteamCoreFriendsAsyncActionDownloadClanActivityCounts.hpp"
void* _Script_SteamCore::SteamCoreFriendsAsyncActionDownloadClanActivityCounts::get_OnCallback() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_SteamCore::SteamCoreFriendsAsyncActionDownloadClanActivityCounts* _Script_SteamCore::SteamCoreFriendsAsyncActionDownloadClanActivityCounts::DownloadClanActivityCountsAsync(_Script_CoreUObject::Object* WorldContextObject, void* SteamIDClans, float Timeout) {
    return;
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamCoreFriendsAsyncActionDownloadClanActivityCounts::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.SteamCoreFriendsAsyncActionDownloadClanActivityCounts");
    return result;
}
void _Script_SteamCore::SteamCoreFriendsAsyncActionDownloadClanActivityCounts::HandleCallback(_Script_SteamCore::DownloadClanActivityCountsResult& Data, bool bWasSuccessful) {
    return;
}
