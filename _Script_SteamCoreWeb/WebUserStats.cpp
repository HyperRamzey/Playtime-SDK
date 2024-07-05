#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SteamCoreWebSubsystem.hpp"
#include "WebUserStats.hpp"
void _Script_SteamCoreWeb::WebUserStats::GetNumberOfCurrentPlayers(void*& Callback, int32_t AppID) {
    return;
}
_Script_CoreUObject::Class* _Script_SteamCoreWeb::WebUserStats::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.WebUserStats");
    return result;
}
void _Script_SteamCoreWeb::WebUserStats::SetUserStatsForGame(void*& Callback, void* Key, void* SteamID, int32_t AppID, void* Names, void* Values) {
    return;
}
void _Script_SteamCoreWeb::WebUserStats::GetGlobalAchievementPercentagesForApp(void*& Callback, void* GameID) {
    return;
}
void _Script_SteamCoreWeb::WebUserStats::GetUserStatsForGame(void*& Callback, void* Key, void* SteamID, int32_t AppID) {
    return;
}
void _Script_SteamCoreWeb::WebUserStats::GetSchemaForGame(void*& Callback, void* Key, void* SteamID, int32_t AppID, void* Language) {
    return;
}
void _Script_SteamCoreWeb::WebUserStats::GetPlayerAchievements(void*& Callback, void* Key, void* SteamID, int32_t AppID, void* Language) {
    return;
}
void _Script_SteamCoreWeb::WebUserStats::GetGlobalStatsForGame(void*& Callback, int32_t AppID, void* Names, int32_t StartDate, int32_t EndDate) {
    return;
}
