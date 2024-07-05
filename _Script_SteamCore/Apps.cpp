#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Apps.hpp"
#include "SteamCoreSubsystem.hpp"
#include "SteamID.hpp"
void* _Script_SteamCore::Apps::GetLaunchQueryParam(void* Key) {
    return;
}
void* _Script_SteamCore::Apps::get_DLCInstalled() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_SteamCore::Apps::get_FileDetailsResultDelegate() {
    return (void*)((uintptr_t)this + 0x58);
}
_Script_CoreUObject::Class* _Script_SteamCore::Apps::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.Apps");
    return result;
}
void _Script_SteamCore::Apps::UninstallDLC(int32_t AppID) {
    return;
}
int32_t _Script_SteamCore::Apps::GetLaunchCommandLine(void*& CommandLine) {
    return;
}
bool _Script_SteamCore::Apps::MarkContentCorrupt(bool bMissingFilesOnly) {
    return;
}
void _Script_SteamCore::Apps::InstallDLC(int32_t AppID) {
    return;
}
int32_t _Script_SteamCore::Apps::GetInstalledDepots(int32_t AppID, int32_t MaxDepots, void*& Depots) {
    return;
}
void _Script_SteamCore::Apps::GetFileDetails(void*& Callback, void* Filename) {
    return;
}
int32_t _Script_SteamCore::Apps::GetEarliestPurchaseUnixTime(int32_t AppID) {
    return;
}
bool _Script_SteamCore::Apps::GetDlcDownloadProgress(int32_t AppID, int32_t& BytesDownloaded, int32_t& BytesTotal) {
    return;
}
int32_t _Script_SteamCore::Apps::GetDLCCount() {
    return;
}
void* _Script_SteamCore::Apps::GetCurrentGameLanguage() {
    return;
}
bool _Script_SteamCore::Apps::GetCurrentBetaName(void*& Name) {
    return;
}
void* _Script_SteamCore::Apps::GetAvailableGameLanguages() {
    return;
}
_Script_SteamCore::SteamID _Script_SteamCore::Apps::GetAppOwner() {
    return;
}
int32_t _Script_SteamCore::Apps::GetAppInstallDir(int32_t AppID, void*& Folder) {
    return;
}
int32_t _Script_SteamCore::Apps::GetAppBuildId() {
    return;
}
bool _Script_SteamCore::Apps::BIsVACBanned() {
    return;
}
bool _Script_SteamCore::Apps::BIsTimedTrial(int32_t& SecondsAllowed, int32_t& SecondsPlayed) {
    return;
}
bool _Script_SteamCore::Apps::BIsSubscribedFromFreeWeekend() {
    return;
}
bool _Script_SteamCore::Apps::BIsSubscribedFromFamilySharing() {
    return;
}
bool _Script_SteamCore::Apps::BIsSubscribedApp(int32_t AppID) {
    return;
}
bool _Script_SteamCore::Apps::BIsSubscribed() {
    return;
}
bool _Script_SteamCore::Apps::BIsLowViolence() {
    return;
}
bool _Script_SteamCore::Apps::BIsDlcInstalled(int32_t AppID) {
    return;
}
bool _Script_SteamCore::Apps::BIsCybercafe() {
    return;
}
bool _Script_SteamCore::Apps::BIsAppInstalled(int32_t AppID) {
    return;
}
bool _Script_SteamCore::Apps::BGetDLCDataByIndex(int32_t DLC, int32_t& AppID, bool& bAvailable, void*& Name) {
    return;
}
