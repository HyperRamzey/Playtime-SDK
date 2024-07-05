#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SteamCoreWebSubsystem.hpp"
#include "WebApps.hpp"
_Script_CoreUObject::Class* _Script_SteamCoreWeb::WebApps::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCoreWeb.WebApps");
    return result;
}
void _Script_SteamCoreWeb::WebApps::GetServerList(void*& Callback, void* Key, void* Filter, int32_t Limit) {
    return;
}
void _Script_SteamCoreWeb::WebApps::UpToDateCheck(void*& Callback, int32_t AppID, int32_t Version) {
    return;
}
void _Script_SteamCoreWeb::WebApps::GetAppList(void*& Callback, void* Key) {
    return;
}
void _Script_SteamCoreWeb::WebApps::SetAppBuildLive(void*& Callback, void* Key, int32_t AppID, int32_t BuildID, void* BetaKey, void* Description) {
    return;
}
void _Script_SteamCoreWeb::WebApps::GetServersAtAddress(void*& Callback, void* Addr) {
    return;
}
void _Script_SteamCoreWeb::WebApps::GetCheatingReports(void*& Callback, void* Key, int32_t AppID, int32_t TimeBegin, int32_t TimeEnd, bool bIncludeReports, bool bIncludeBans, int32_t ReportidMin) {
    return;
}
void _Script_SteamCoreWeb::WebApps::GetPlayersBanned(void*& Callback, void* Key, int32_t AppID) {
    return;
}
void _Script_SteamCoreWeb::WebApps::GetAppDepotVersions(void*& Callback, void* Key, int32_t AppID) {
    return;
}
void _Script_SteamCoreWeb::WebApps::GetAppBuilds(void*& Callback, void* Key, int32_t AppID, int32_t Count) {
    return;
}
void _Script_SteamCoreWeb::WebApps::GetAppBetas(void*& Callback, void* Key, int32_t AppID) {
    return;
}
