#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PublishedFileID.hpp"
#include "ScreenshotHandle.hpp"
#include "Screenshots.hpp"
#include "SteamCoreSubsystem.hpp"
#include "SteamID.hpp"
_Script_SteamCore::ScreenshotHandle _Script_SteamCore::Screenshots::AddScreenshotToLibrary(void* Filename, void* ThumbnailFilename, int32_t Width, int32_t Height) {
    return;
}
void* _Script_SteamCore::Screenshots::get_ScreenshotReady() {
    return (void*)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_SteamCore::Screenshots::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.Screenshots");
    return result;
}
void* _Script_SteamCore::Screenshots::get_ScreenshotRequested() {
    return (void*)((uintptr_t)this + 0x58);
}
bool _Script_SteamCore::Screenshots::SetLocation(_Script_SteamCore::ScreenshotHandle Handle, void* Location) {
    return;
}
_Script_SteamCore::ScreenshotHandle _Script_SteamCore::Screenshots::WriteScreenshot(void* PubRGB, int32_t Width, int32_t Height) {
    return;
}
void _Script_SteamCore::Screenshots::TriggerScreenshot() {
    return;
}
bool _Script_SteamCore::Screenshots::TagUser(_Script_SteamCore::ScreenshotHandle Handle, _Script_SteamCore::SteamID SteamID) {
    return;
}
bool _Script_SteamCore::Screenshots::TagPublishedFile(_Script_SteamCore::ScreenshotHandle Handle, _Script_SteamCore::PublishedFileID PublishedFileID) {
    return;
}
bool _Script_SteamCore::Screenshots::IsScreenshotsHooked() {
    return;
}
void _Script_SteamCore::Screenshots::HookScreenshots(bool bHook) {
    return;
}
_Script_SteamCore::ScreenshotHandle _Script_SteamCore::Screenshots::AddVRScreenshotToLibrary(void* EType, void* Filename, void* VRFileName) {
    return;
}
