#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "PublishedFileID.hpp"
#include "ScreenshotHandle.hpp"
#include "SteamCoreSubsystem.hpp"
#include "SteamID.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SteamCore {
#pragma pack(push, 1)
struct Screenshots : public SteamCoreSubsystem {
    private: char pad_48[0x60]; public:
    void* get_ScreenshotReady();
    void* get_ScreenshotRequested();
    static _Script_CoreUObject::Class* static_class();
    _Script_SteamCore::ScreenshotHandle WriteScreenshot(void* PubRGB, int32_t Width, int32_t Height);
    void TriggerScreenshot();
    bool TagUser(_Script_SteamCore::ScreenshotHandle Handle, _Script_SteamCore::SteamID SteamID);
    bool TagPublishedFile(_Script_SteamCore::ScreenshotHandle Handle, _Script_SteamCore::PublishedFileID PublishedFileID);
    bool SetLocation(_Script_SteamCore::ScreenshotHandle Handle, void* Location);
    bool IsScreenshotsHooked();
    void HookScreenshots(bool bHook);
    _Script_SteamCore::ScreenshotHandle AddVRScreenshotToLibrary(void* EType, void* Filename, void* VRFileName);
    _Script_SteamCore::ScreenshotHandle AddScreenshotToLibrary(void* Filename, void* ThumbnailFilename, int32_t Width, int32_t Height);
}; // Size: 0xa8
#pragma pack(pop)
}
