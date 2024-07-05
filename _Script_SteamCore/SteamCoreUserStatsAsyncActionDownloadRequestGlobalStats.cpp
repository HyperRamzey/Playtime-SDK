#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "GlobalStatsReceived.hpp"
#include "SteamCoreAsyncAction.hpp"
#include "SteamCoreUserStatsAsyncActionDownloadRequestGlobalStats.hpp"
void* _Script_SteamCore::SteamCoreUserStatsAsyncActionDownloadRequestGlobalStats::get_OnCallback() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamCoreUserStatsAsyncActionDownloadRequestGlobalStats::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.SteamCoreUserStatsAsyncActionDownloadRequestGlobalStats");
    return result;
}
_Script_SteamCore::SteamCoreUserStatsAsyncActionDownloadRequestGlobalStats* _Script_SteamCore::SteamCoreUserStatsAsyncActionDownloadRequestGlobalStats::RequestGlobalStatsAsync(_Script_CoreUObject::Object* WorldContextObject, int32_t HistoryDays, float Timeout) {
    return;
}
void _Script_SteamCore::SteamCoreUserStatsAsyncActionDownloadRequestGlobalStats::HandleCallback(_Script_SteamCore::GlobalStatsReceived& Data, bool bWasSuccessful) {
    return;
}
