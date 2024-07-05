#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SteamCoreSubsystem.hpp"
#include "Utils.hpp"
void* _Script_SteamCore::Utils::get_GamepadTextInputDismissed() {
    return (void*)((uintptr_t)this + 0x58);
}
bool _Script_SteamCore::Utils::GetImageRGBA(int32_t iImage, void*& OutBuffer) {
    return;
}
void* _Script_SteamCore::Utils::get_CheckFileSignature() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_SteamCore::Utils::GetIPCountry() {
    return;
}
bool _Script_SteamCore::Utils::ShowGamepadTextInput(void* InputMode, void* LineInputMode, void* Description, int32_t CharMax, void* ExistingText) {
    return;
}
void* _Script_SteamCore::Utils::get_LowBatteryPower() {
    return (void*)((uintptr_t)this + 0x78);
}
int32_t _Script_SteamCore::Utils::GetAppID() {
    return;
}
void* _Script_SteamCore::Utils::get_IPCountry() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_SteamCore::Utils::get_SteamShutdown() {
    return (void*)((uintptr_t)this + 0x88);
}
_Script_CoreUObject::Class* _Script_SteamCore::Utils::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.Utils");
    return result;
}
void _Script_SteamCore::Utils::StartVRDashboard() {
    return;
}
void _Script_SteamCore::Utils::SetVRHeadsetStreamingEnabled(bool bEnabled) {
    return;
}
int32_t _Script_SteamCore::Utils::GetEnteredGamepadTextLength() {
    return;
}
void _Script_SteamCore::Utils::SetOverlayNotificationPosition(void* NotificationPosition) {
    return;
}
void _Script_SteamCore::Utils::SetOverlayNotificationInset(int32_t HorizontalInset, int32_t VerticalInset) {
    return;
}
bool _Script_SteamCore::Utils::IsVRHeadsetStreamingEnabled() {
    return;
}
bool _Script_SteamCore::Utils::IsSteamRunningInVR() {
    return;
}
bool _Script_SteamCore::Utils::GetEnteredGamepadTextInput(void*& Text) {
    return;
}
bool _Script_SteamCore::Utils::IsSteamInBigPictureMode() {
    return;
}
bool _Script_SteamCore::Utils::IsSteamChinaLauncher() {
    return;
}
bool _Script_SteamCore::Utils::IsOverlayEnabled() {
    return;
}
bool _Script_SteamCore::Utils::InitFilterText() {
    return;
}
void* _Script_SteamCore::Utils::GetSteamUILanguage() {
    return;
}
int32_t _Script_SteamCore::Utils::GetServerRealTime() {
    return;
}
int32_t _Script_SteamCore::Utils::GetSecondsSinceComputerActive() {
    return;
}
int32_t _Script_SteamCore::Utils::GetSecondsSinceAppActive() {
    return;
}
int32_t _Script_SteamCore::Utils::GetIPCCallCount() {
    return;
}
bool _Script_SteamCore::Utils::GetImageSize(int32_t iImage, int32_t& Width, int32_t& Height) {
    return;
}
int32_t _Script_SteamCore::Utils::GetCurrentBatteryPower() {
    return;
}
void* _Script_SteamCore::Utils::GetConnectedUniverse() {
    return;
}
int32_t _Script_SteamCore::Utils::GetAppID_Pure() {
    return;
}
bool _Script_SteamCore::Utils::BOverlayNeedsPresent() {
    return;
}
