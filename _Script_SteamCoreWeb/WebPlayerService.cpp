#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SteamCoreWebSubsystem.hpp"
#include "WebPlayerService.hpp"
void _Script_SteamCoreWeb::WebPlayerService::GetSteamLevel(void*& Callback, void* Key, void* SteamID) {
    return;
}
_Script_CoreUObject::Class* _Script_SteamCoreWeb::WebPlayerService::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.WebPlayerService");
    return result;
}
void _Script_SteamCoreWeb::WebPlayerService::IsPlayingSharedGame(void*& Callback, void* Key, void* SteamID, int32_t AppIdPlaying) {
    return;
}
void _Script_SteamCoreWeb::WebPlayerService::GetRecentlyPlayedGames(void*& Callback, void* Key, void* SteamID, int32_t Count) {
    return;
}
void _Script_SteamCoreWeb::WebPlayerService::GetOwnedGames(void*& Callback, void* Key, void* SteamID, bool bIncludeAppInfo, bool bIncludePlayedFreeGames, void* Filter) {
    return;
}
void _Script_SteamCoreWeb::WebPlayerService::GetCommunityBadgeProgress(void*& Callback, void* Key, void* SteamID, int32_t BadgeId) {
    return;
}
void _Script_SteamCoreWeb::WebPlayerService::GetBadges(void*& Callback, void* Key, void* SteamID) {
    return;
}
