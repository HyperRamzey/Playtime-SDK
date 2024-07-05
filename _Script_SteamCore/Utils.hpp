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
struct Utils : public SteamCoreSubsystem {
    private: char pad_48[0xf0]; public:
    void* get_CheckFileSignature();
    void* get_GamepadTextInputDismissed();
    void* get_IPCountry();
    void* get_LowBatteryPower();
    void* get_SteamShutdown();
    static _Script_CoreUObject::Class* static_class();
    void StartVRDashboard();
    bool ShowGamepadTextInput(void* InputMode, void* LineInputMode, void* Description, int32_t CharMax, void* ExistingText);
    void SetVRHeadsetStreamingEnabled(bool bEnabled);
    void SetOverlayNotificationPosition(void* NotificationPosition);
    void SetOverlayNotificationInset(int32_t HorizontalInset, int32_t VerticalInset);
    bool IsVRHeadsetStreamingEnabled();
    bool IsSteamRunningInVR();
    bool IsSteamInBigPictureMode();
    bool IsSteamChinaLauncher();
    bool IsOverlayEnabled();
    bool InitFilterText();
    void* GetSteamUILanguage();
    int32_t GetServerRealTime();
    int32_t GetSecondsSinceComputerActive();
    int32_t GetSecondsSinceAppActive();
    void* GetIPCountry();
    int32_t GetIPCCallCount();
    bool GetImageSize(int32_t iImage, int32_t& Width, int32_t& Height);
    bool GetImageRGBA(int32_t iImage, void*& OutBuffer);
    int32_t GetEnteredGamepadTextLength();
    bool GetEnteredGamepadTextInput(void*& Text);
    int32_t GetCurrentBatteryPower();
    void* GetConnectedUniverse();
    int32_t GetAppID_Pure();
    int32_t GetAppID();
    bool BOverlayNeedsPresent();
}; // Size: 0x138
#pragma pack(pop)
}
