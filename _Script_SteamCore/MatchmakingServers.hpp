#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SteamCoreSubsystem.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SteamCore {
struct ServerFilter;
}
namespace _Script_SteamCore {
#pragma pack(push, 1)
struct MatchmakingServers : public SteamCoreSubsystem {
    static _Script_CoreUObject::Class* static_class();
    void ServerRules(void*& Callback, void* IP, int32_t QueryPort);
    void RequestSpectatorServerList(void*& ServerCallback, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, _Script_SteamCore::ServerFilter* ServerFilter);
    void RequestLANServerList(void*& ServerCallback, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, _Script_SteamCore::ServerFilter* ServerFilter);
    void RequestInternetServerList(void*& ServerCallback, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, _Script_SteamCore::ServerFilter* ServerFilter);
    void RequestHistoryServerList(void*& ServerCallback, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, _Script_SteamCore::ServerFilter* ServerFilter);
    void RequestFriendsServerList(void*& ServerCallback, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, _Script_SteamCore::ServerFilter* ServerFilter);
    void RequestFavoritesServerList(void*& ServerCallback, int32_t AppID, float Timeout, int32_t MaxResults, bool bIgnoreNonResponsive, _Script_SteamCore::ServerFilter* ServerFilter);
    void PingServer(void*& Callback, void* IP, int32_t QueryPort);
}; // Size: 0x48
#pragma pack(pop)
}
