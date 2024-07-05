#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\PlayerController.hpp"
#include "PlaytimeSettings.hpp"
double& _Script_Playtime_Multiplayer::PlaytimeSettings::get_MouseSensitivity() {
    return *(double*)((uintptr_t)this + 0x38);
}
bool _Script_Playtime_Multiplayer::PlaytimeSettings::get_bSubtitlesOn() {
    return (*(uint8_t*)((uintptr_t)this + 0x58 + 0)) & 1 != 0;
}
int32_t _Script_Playtime_Multiplayer::PlaytimeSettings::GetMusicVolume() {
    return;
}
int32_t& _Script_Playtime_Multiplayer::PlaytimeSettings::get_ScreenPercentage() {
    return *(int32_t*)((uintptr_t)this + 0x64);
}
int32_t& _Script_Playtime_Multiplayer::PlaytimeSettings::get_MusicVolume() {
    return *(int32_t*)((uintptr_t)this + 0x4c);
}
bool _Script_Playtime_Multiplayer::PlaytimeSettings::IsStreamerModeEnabled() {
    return;
}
void* _Script_Playtime_Multiplayer::PlaytimeSettings::get_OnSettingsApplied() {
    return (void*)((uintptr_t)this + 0x28);
}
double& _Script_Playtime_Multiplayer::PlaytimeSettings::get_FieldOfView() {
    return *(double*)((uintptr_t)this + 0x40);
}
void _Script_Playtime_Multiplayer::PlaytimeSettings::SetFieldOfView(float InFieldOfView, _Script_CoreUObject::Object* WorldContextObject) {
    return;
}
int32_t& _Script_Playtime_Multiplayer::PlaytimeSettings::get_GrabpackVolume() {
    return *(int32_t*)((uintptr_t)this + 0x54);
}
void _Script_Playtime_Multiplayer::PlaytimeSettings::SavePlaytimeSettings() {
    return;
}
int32_t& _Script_Playtime_Multiplayer::PlaytimeSettings::get_MainVolume() {
    return *(int32_t*)((uintptr_t)this + 0x48);
}
int32_t _Script_Playtime_Multiplayer::PlaytimeSettings::GetSFXVolume() {
    return;
}
int32_t& _Script_Playtime_Multiplayer::PlaytimeSettings::get_SFXVolume() {
    return *(int32_t*)((uintptr_t)this + 0x50);
}
float _Script_Playtime_Multiplayer::PlaytimeSettings::GetFieldOfView() {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeSettings::set_bSubtitlesOn(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x58 + 0);
    *(uint8_t*)((uintptr_t)this + 0x58 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Playtime_Multiplayer::PlaytimeSettings::get_bSkipCinematic() {
    return (*(uint8_t*)((uintptr_t)this + 0x59 + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::PlaytimeSettings::set_bSkipCinematic(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x59 + 0);
    *(uint8_t*)((uintptr_t)this + 0x59 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Playtime_Multiplayer::PlaytimeSettings::SetEnablePlayerStatusPerks(bool EnablePlayerStatusPerks) {
    return;
}
bool _Script_Playtime_Multiplayer::PlaytimeSettings::get_bEnableChat() {
    return (*(uint8_t*)((uintptr_t)this + 0x5a + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::PlaytimeSettings::set_bEnableChat(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5a + 0);
    *(uint8_t*)((uintptr_t)this + 0x5a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Playtime_Multiplayer::PlaytimeSettings::get_bEnablePlayerStatusPerks() {
    return (*(uint8_t*)((uintptr_t)this + 0x5b + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::PlaytimeSettings::set_bEnablePlayerStatusPerks(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5b + 0);
    *(uint8_t*)((uintptr_t)this + 0x5b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Playtime_Multiplayer::PlaytimeSettings::get_bHeadBobbingEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x5c + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::PlaytimeSettings::set_bHeadBobbingEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5c + 0);
    *(uint8_t*)((uintptr_t)this + 0x5c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float _Script_Playtime_Multiplayer::PlaytimeSettings::GetMouseSensitivity() {
    return;
}
bool _Script_Playtime_Multiplayer::PlaytimeSettings::get_bStreamerModeEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x5d + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::PlaytimeSettings::set_bStreamerModeEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5d + 0);
    *(uint8_t*)((uintptr_t)this + 0x5d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Playtime_Multiplayer::PlaytimeSettings::SetScreenPercentage(int32_t InScreenPercentage) {
    return;
}
int32_t& _Script_Playtime_Multiplayer::PlaytimeSettings::get_ReflectionQuality() {
    return *(int32_t*)((uintptr_t)this + 0x60);
}
int32_t& _Script_Playtime_Multiplayer::PlaytimeSettings::get_ColorblindMode() {
    return *(int32_t*)((uintptr_t)this + 0x68);
}
double& _Script_Playtime_Multiplayer::PlaytimeSettings::get_ColorblindStrength() {
    return *(double*)((uintptr_t)this + 0x70);
}
bool _Script_Playtime_Multiplayer::PlaytimeSettings::get_bHasBeenLoaded() {
    return (*(uint8_t*)((uintptr_t)this + 0x78 + 0)) & 1 != 0;
}
int32_t _Script_Playtime_Multiplayer::PlaytimeSettings::GetColorblindMode() {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeSettings::set_bHasBeenLoaded(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x78 + 0);
    *(uint8_t*)((uintptr_t)this + 0x78 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::PlaytimeSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.PlaytimeSettings");
    return result;
}
void _Script_Playtime_Multiplayer::PlaytimeSettings::SetSubtitlesOn(bool SubtitlesOn) {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeSettings::SetStreamerModeEnabled(bool StreamerModeEnabled) {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeSettings::SetSkipCinematic(bool SkipCinematic) {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeSettings::SetSFXVolume(int32_t InSFXVolume, _Script_CoreUObject::Object* WorldContextObject) {
    return;
}
int32_t _Script_Playtime_Multiplayer::PlaytimeSettings::GetMainVolume() {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeSettings::SetReflectionQuality(int32_t InReflectionQuality) {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeSettings::SetMusicVolume(int32_t InMusicVolume, _Script_CoreUObject::Object* WorldContextObject) {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeSettings::SetMouseSensitivity(_Script_CoreUObject::Object* WorldContextObject, float InMouseSensitivity) {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeSettings::SetMainVolume(int32_t InMainVolume, _Script_CoreUObject::Object* WorldContextObject) {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeSettings::SetHeadBobbingEnabled(bool HeadBobbingEnabled) {
    return;
}
bool _Script_Playtime_Multiplayer::PlaytimeSettings::IsHeadBobbingEnabled() {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeSettings::SetGrabpackVolume(int32_t InGrabpackVolume, _Script_CoreUObject::Object* WorldContextObject) {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeSettings::SetColorblindStrength(float InColorblindStrength) {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeSettings::SetColorblindMode(int32_t InColorblindMode) {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeSettings::SetChatEnabled(bool ChatEnabled) {
    return;
}
bool _Script_Playtime_Multiplayer::PlaytimeSettings::IsSkipCinematic() {
    return;
}
bool _Script_Playtime_Multiplayer::PlaytimeSettings::IsEnablePlayerStatusPerks() {
    return;
}
bool _Script_Playtime_Multiplayer::PlaytimeSettings::IsChatEnabled() {
    return;
}
int32_t _Script_Playtime_Multiplayer::PlaytimeSettings::GetScreenPercentage() {
    return;
}
int32_t _Script_Playtime_Multiplayer::PlaytimeSettings::GetReflectionQuality() {
    return;
}
_Script_Playtime_Multiplayer::PlaytimeSettings* _Script_Playtime_Multiplayer::PlaytimeSettings::GetPlaytimeSettings() {
    return;
}
int32_t _Script_Playtime_Multiplayer::PlaytimeSettings::GetGrabpackVolume() {
    return;
}
float _Script_Playtime_Multiplayer::PlaytimeSettings::GetColorblindStrength() {
    return;
}
bool _Script_Playtime_Multiplayer::PlaytimeSettings::AreSubtitlesOn() {
    return;
}
void _Script_Playtime_Multiplayer::PlaytimeSettings::Apply(_Script_Engine::PlayerController* Controller) {
    return;
}
