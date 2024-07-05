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
struct Music : public SteamCoreSubsystem {
    private: char pad_48[0x60]; public:
    void* get_PlaybackStatusHasChanged();
    void* get_VolumeHasChanged();
    static _Script_CoreUObject::Class* static_class();
    void SetVolume(float flVolume);
    void PlayPrevious();
    void PlayNext();
    void Play();
    void Pause();
    float GetVolume();
    void* GetPlaybackStatus();
    bool BIsPlaying();
    bool BIsEnabled();
}; // Size: 0xa8
#pragma pack(pop)
}
