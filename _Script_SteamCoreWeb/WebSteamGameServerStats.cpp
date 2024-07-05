#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SteamCoreWebSubsystem.hpp"
#include "WebSteamGameServerStats.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::WebSteamGameServerStats::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.WebSteamGameServerStats");
    return result;
}
void _Script_SteamCoreWeb::WebSteamGameServerStats::GetGameServerPlayerStatsForGame(void*& Callback, void* Key, void* GameID, int32_t AppID, void* RangeStart, void* RangeEnd, int32_t MaxResults) {
    return;
}
