#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MobileInstalledContent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MobilePatchingUtils {
#pragma pack(push, 1)
struct MobilePendingContent : public MobileInstalledContent {
    private: char pad_48[0x40]; public:
    static _Script_CoreUObject::Class* static_class();
    void StartInstall(void* OnSucceeded, void* OnFailed);
    float GetTotalDownloadedSize();
    float GetRequiredDiskSpace();
    float GetInstallProgress();
    void* GetDownloadStatusText();
    float GetDownloadSpeed();
    float GetDownloadSize();
}; // Size: 0x88
#pragma pack(pop)
}
