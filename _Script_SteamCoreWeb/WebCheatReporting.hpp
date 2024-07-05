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
struct WebCheatReporting : public SteamCoreWebSubsystem {
    static _Script_CoreUObject::Class* static_class();
    void StartSecureMultiplayerSession(void*& Callback, void* Key, void* SteamID, int32_t AppID);
    void RequestVacStatusForUser(void*& Callback, void* Key, void* SteamID, int32_t AppID, void* SessionID);
    void RequestPlayerGameBan(void*& Callback, void* Key, void* SteamID, int32_t AppID, void* ReportID, void* CheatDescription, int32_t Duration, bool bDelayBan);
    void ReportPlayerCheating(void*& Callback, void* Key, int32_t AppID, void* SteamID, void* SteamIdReporter, void* AppData, bool bHeuristic, bool bDetection, bool bPlayerReport, bool bNoReportID, int32_t GameMode, int32_t SuspicionStartTime, int32_t Severity);
    void ReportCheatData(void*& Callback, void* Key, void* SteamID, int32_t AppID, void* PathAndFileName, void* WebCheatURL, void* TimeNow, void* TimeStarted, void* TimeStopped, void* CheatName, int32_t GameProcessId, int32_t CheatProcessId, void* CheatParam1, void* CheatParam2);
    void RemovePlayerGameBan(void*& Callback, void* Key, void* SteamID, int32_t AppID);
    void GetCheatingReports(void*& Callback, void* Key, int32_t AppID, int32_t TimeEnd, int32_t TimeBegin, void* ReportidMin, bool bIncludeReports, bool bIncludeBans, void* SteamID);
    void EndSecureMultiplayerSession(void*& Callback, void* Key, void* SteamID, int32_t AppID, void* SessionID);
}; // Size: 0x48
#pragma pack(pop)
}
