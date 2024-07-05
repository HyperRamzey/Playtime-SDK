#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "GlobalAchievementPercentagesReady.hpp"
#include "SteamCoreAsyncAction.hpp"
#include "SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages.hpp"
void* _Script_SteamCore::SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages::get_OnCallback() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_SteamCore::SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages");
    return result;
}
_Script_SteamCore::SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages* _Script_SteamCore::SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages::RequestGlobalAchievementPercentagesAsync(_Script_CoreUObject::Object* WorldContextObject, float Timeout) {
    return;
}
void _Script_SteamCore::SteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages::HandleCallback(_Script_SteamCore::GlobalAchievementPercentagesReady& Data, bool bWasSuccessful) {
    return;
}
