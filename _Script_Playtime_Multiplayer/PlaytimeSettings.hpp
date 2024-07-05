#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct PlayerController;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct PlaytimeSettings : public _Script_CoreUObject::Object {
    private: char pad_28[0x70]; public:
    void* get_OnSettingsApplied();
    double& get_MouseSensitivity();
    double& get_FieldOfView();
    int32_t& get_MainVolume();
    int32_t& get_MusicVolume();
    int32_t& get_SFXVolume();
    int32_t& get_GrabpackVolume();
    bool get_bSubtitlesOn();
    void set_bSubtitlesOn(bool value);
    bool get_bSkipCinematic();
    void set_bSkipCinematic(bool value);
    bool get_bEnableChat();
    void set_bEnableChat(bool value);
    bool get_bEnablePlayerStatusPerks();
    void set_bEnablePlayerStatusPerks(bool value);
    bool get_bHeadBobbingEnabled();
    void set_bHeadBobbingEnabled(bool value);
    bool get_bStreamerModeEnabled();
    void set_bStreamerModeEnabled(bool value);
    int32_t& get_ReflectionQuality();
    int32_t& get_ScreenPercentage();
    int32_t& get_ColorblindMode();
    double& get_ColorblindStrength();
    bool get_bHasBeenLoaded();
    void set_bHasBeenLoaded(bool value);
    static _Script_CoreUObject::Class* static_class();
    void SetSubtitlesOn(bool SubtitlesOn);
    void SetStreamerModeEnabled(bool StreamerModeEnabled);
    void SetSkipCinematic(bool SkipCinematic);
    void SetSFXVolume(int32_t InSFXVolume, _Script_CoreUObject::Object* WorldContextObject);
    void SetScreenPercentage(int32_t InScreenPercentage);
    void SetReflectionQuality(int32_t InReflectionQuality);
    void SetMusicVolume(int32_t InMusicVolume, _Script_CoreUObject::Object* WorldContextObject);
    void SetMouseSensitivity(_Script_CoreUObject::Object* WorldContextObject, float InMouseSensitivity);
    void SetMainVolume(int32_t InMainVolume, _Script_CoreUObject::Object* WorldContextObject);
    void SetHeadBobbingEnabled(bool HeadBobbingEnabled);
    void SetGrabpackVolume(int32_t InGrabpackVolume, _Script_CoreUObject::Object* WorldContextObject);
    void SetFieldOfView(float InFieldOfView, _Script_CoreUObject::Object* WorldContextObject);
    void SetEnablePlayerStatusPerks(bool EnablePlayerStatusPerks);
    void SetColorblindStrength(float InColorblindStrength);
    void SetColorblindMode(int32_t InColorblindMode);
    void SetChatEnabled(bool ChatEnabled);
    void SavePlaytimeSettings();
    bool IsStreamerModeEnabled();
    bool IsSkipCinematic();
    bool IsHeadBobbingEnabled();
    bool IsEnablePlayerStatusPerks();
    bool IsChatEnabled();
    int32_t GetSFXVolume();
    int32_t GetScreenPercentage();
    int32_t GetReflectionQuality();
    _Script_Playtime_Multiplayer::PlaytimeSettings* GetPlaytimeSettings();
    int32_t GetMusicVolume();
    float GetMouseSensitivity();
    int32_t GetMainVolume();
    int32_t GetGrabpackVolume();
    float GetFieldOfView();
    float GetColorblindStrength();
    int32_t GetColorblindMode();
    bool AreSubtitlesOn();
    void Apply(_Script_Engine::PlayerController* Controller);
}; // Size: 0x98
#pragma pack(pop)
}
