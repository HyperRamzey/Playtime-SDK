#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SteamCoreWebSubsystem.hpp"
#include "WebCheatReporting.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::WebCheatReporting::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.WebCheatReporting");
    return result;
}
void _Script_SteamCoreWeb::WebCheatReporting::RequestPlayerGameBan(void*& Callback, void* Key, void* SteamID, int32_t AppID, void* ReportID, void* CheatDescription, int32_t Duration, bool bDelayBan) {
    return;
}
void _Script_SteamCoreWeb::WebCheatReporting::StartSecureMultiplayerSession(void*& Callback, void* Key, void* SteamID, int32_t AppID) {
    return;
}
void _Script_SteamCoreWeb::WebCheatReporting::RequestVacStatusForUser(void*& Callback, void* Key, void* SteamID, int32_t AppID, void* SessionID) {
    return;
}
void _Script_SteamCoreWeb::WebCheatReporting::GetCheatingReports(void*& Callback, void* Key, int32_t AppID, int32_t TimeEnd, int32_t TimeBegin, void* ReportidMin, bool bIncludeReports, bool bIncludeBans, void* SteamID) {
    return;
}
void _Script_SteamCoreWeb::WebCheatReporting::RemovePlayerGameBan(void*& Callback, void* Key, void* SteamID, int32_t AppID) {
    return;
}
void _Script_SteamCoreWeb::WebCheatReporting::ReportPlayerCheating(void*& Callback, void* Key, int32_t AppID, void* SteamID, void* SteamIdReporter, void* AppData, bool bHeuristic, bool bDetection, bool bPlayerReport, bool bNoReportID, int32_t GameMode, int32_t SuspicionStartTime, int32_t Severity) {
    return;
}
void _Script_SteamCoreWeb::WebCheatReporting::ReportCheatData(void*& Callback, void* Key, void* SteamID, int32_t AppID, void* PathAndFileName, void* WebCheatURL, void* TimeNow, void* TimeStarted, void* TimeStopped, void* CheatName, int32_t GameProcessId, int32_t CheatProcessId, void* CheatParam1, void* CheatParam2) {
    return;
}
void _Script_SteamCoreWeb::WebCheatReporting::EndSecureMultiplayerSession(void*& Callback, void* Key, void* SteamID, int32_t AppID, void* SessionID) {
    return;
}
