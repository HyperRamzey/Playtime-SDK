#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SteamCoreWebSubsystem.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SteamCoreWeb {
#pragma pack(push, 1)
struct WebApps : public SteamCoreWebSubsystem {
    static _Script_CoreUObject::Class* static_class();
    void UpToDateCheck(void*& Callback, int32_t AppID, int32_t Version);
    void SetAppBuildLive(void*& Callback, void* Key, int32_t AppID, int32_t BuildID, void* BetaKey, void* Description);
    void GetServersAtAddress(void*& Callback, void* Addr);
    void GetServerList(void*& Callback, void* Key, void* Filter, int32_t Limit);
    void GetPlayersBanned(void*& Callback, void* Key, int32_t AppID);
    void GetCheatingReports(void*& Callback, void* Key, int32_t AppID, int32_t TimeBegin, int32_t TimeEnd, bool bIncludeReports, bool bIncludeBans, int32_t ReportidMin);
    void GetAppList(void*& Callback, void* Key);
    void GetAppDepotVersions(void*& Callback, void* Key, int32_t AppID);
    void GetAppBuilds(void*& Callback, void* Key, int32_t AppID, int32_t Count);
    void GetAppBetas(void*& Callback, void* Key, int32_t AppID);
}; // Size: 0x48
#pragma pack(pop)
}
