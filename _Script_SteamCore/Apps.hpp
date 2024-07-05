#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SteamCoreSubsystem.hpp"
#include "SteamID.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SteamCore {
#pragma pack(push, 1)
struct Apps : public SteamCoreSubsystem {
    private: char pad_48[0x60]; public:
    void* get_DLCInstalled();
    void* get_FileDetailsResultDelegate();
    static _Script_CoreUObject::Class* static_class();
    void UninstallDLC(int32_t AppID);
    bool MarkContentCorrupt(bool bMissingFilesOnly);
    void InstallDLC(int32_t AppID);
    void* GetLaunchQueryParam(void* Key);
    int32_t GetLaunchCommandLine(void*& CommandLine);
    int32_t GetInstalledDepots(int32_t AppID, int32_t MaxDepots, void*& Depots);
    void GetFileDetails(void*& Callback, void* Filename);
    int32_t GetEarliestPurchaseUnixTime(int32_t AppID);
    bool GetDlcDownloadProgress(int32_t AppID, int32_t& BytesDownloaded, int32_t& BytesTotal);
    int32_t GetDLCCount();
    void* GetCurrentGameLanguage();
    bool GetCurrentBetaName(void*& Name);
    void* GetAvailableGameLanguages();
    _Script_SteamCore::SteamID GetAppOwner();
    int32_t GetAppInstallDir(int32_t AppID, void*& Folder);
    int32_t GetAppBuildId();
    bool BIsVACBanned();
    bool BIsTimedTrial(int32_t& SecondsAllowed, int32_t& SecondsPlayed);
    bool BIsSubscribedFromFreeWeekend();
    bool BIsSubscribedFromFamilySharing();
    bool BIsSubscribedApp(int32_t AppID);
    bool BIsSubscribed();
    bool BIsLowViolence();
    bool BIsDlcInstalled(int32_t AppID);
    bool BIsCybercafe();
    bool BIsAppInstalled(int32_t AppID);
    bool BGetDLCDataByIndex(int32_t DLC, int32_t& AppID, bool& bAvailable, void*& Name);
}; // Size: 0xa8
#pragma pack(pop)
}
