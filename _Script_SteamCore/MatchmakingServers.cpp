#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MatchmakingServers.hpp"
#include "ServerFilter.hpp"
#include "SteamCoreSubsystem.hpp"
_Script_CoreUObject::Class* _Script_SteamCore::MatchmakingServers::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.MatchmakingServers");
    return result;
}
void _Script_SteamCore::MatchmakingServers::ServerRules(void*& Callback, void* IP, int32_t QueryPort) {
    return;
}
void _Script_SteamCore::MatchmakingServers::RequestFriendsServerList(void*& ServerCallback, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, _Script_SteamCore::ServerFilter* ServerFilter) {
    return;
}
void _Script_SteamCore::MatchmakingServers::RequestHistoryServerList(void*& ServerCallback, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, _Script_SteamCore::ServerFilter* ServerFilter) {
    return;
}
void _Script_SteamCore::MatchmakingServers::RequestSpectatorServerList(void*& ServerCallback, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, _Script_SteamCore::ServerFilter* ServerFilter) {
    return;
}
void _Script_SteamCore::MatchmakingServers::RequestLANServerList(void*& ServerCallback, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, _Script_SteamCore::ServerFilter* ServerFilter) {
    return;
}
void _Script_SteamCore::MatchmakingServers::RequestInternetServerList(void*& ServerCallback, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, _Script_SteamCore::ServerFilter* ServerFilter) {
    return;
}
void _Script_SteamCore::MatchmakingServers::RequestFavoritesServerList(void*& ServerCallback, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, _Script_SteamCore::ServerFilter* ServerFilter) {
    return;
}
void _Script_SteamCore::MatchmakingServers::PingServer(void*& Callback, void* IP, int32_t QueryPort) {
    return;
}
