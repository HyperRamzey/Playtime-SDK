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
#pragma pack(push, 1)
struct AppList : public SteamCoreSubsystem {
    private: char pad_48[0x60]; public:
    void* get_SteamAppInstalled();
    void* get_SteamAppUninstalled();
    static _Script_CoreUObject::Class* static_class();
    int32_t GetNumInstalledApps();
    int32_t GetInstalledApps(void*& AppIDs, int32_t MaxAppIDs);
    int32_t GetAppName(int32_t AppID, void*& Name);
    int32_t GetAppInstallDir(int32_t AppID, void*& Directory);
    int32_t GetAppBuildId(int32_t AppID);
}; // Size: 0xa8
#pragma pack(pop)
}
