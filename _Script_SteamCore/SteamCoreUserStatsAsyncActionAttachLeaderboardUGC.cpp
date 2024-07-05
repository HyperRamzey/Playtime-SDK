#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "AttachLeaderboardUGCData.hpp"
#include "SteamCoreAsyncAction.hpp"
#include "SteamCoreUserStatsAsyncActionAttachLeaderboardUGC.hpp"
#include "SteamLeaderboard.hpp"
#include "SteamUGCHandle.hpp"
void* _Script_SteamCore::SteamCoreUserStatsAsyncActionAttachLeaderboardUGC::get_OnCallback() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamCoreUserStatsAsyncActionAttachLeaderboardUGC::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.SteamCoreUserStatsAsyncActionAttachLeaderboardUGC");
    return result;
}
void _Script_SteamCore::SteamCoreUserStatsAsyncActionAttachLeaderboardUGC::HandleCallback(_Script_SteamCore::AttachLeaderboardUGCData& Data, bool bWasSuccessful) {
    return;
}
_Script_SteamCore::SteamCoreUserStatsAsyncActionAttachLeaderboardUGC* _Script_SteamCore::SteamCoreUserStatsAsyncActionAttachLeaderboardUGC::AttachLeaderboardUGCAsync(_Script_CoreUObject::Object* WorldContextObject, _Script_SteamCore::SteamLeaderboard SteamLeaderboard, _Script_SteamCore::SteamUGCHandle Handle, float Timeout) {
    return;
}
