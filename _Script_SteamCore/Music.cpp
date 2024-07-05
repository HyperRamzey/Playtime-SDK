#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Music.hpp"
#include "SteamCoreSubsystem.hpp"
void _Script_SteamCore::Music::Pause() {
    return;
}
void _Script_SteamCore::Music::Play() {
    return;
}
void* _Script_SteamCore::Music::get_VolumeHasChanged() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_SteamCore::Music::get_PlaybackStatusHasChanged() {
    return (void*)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_SteamCore::Music::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SteamCore.Music");
    return result;
}
void _Script_SteamCore::Music::PlayNext() {
    return;
}
void _Script_SteamCore::Music::SetVolume(float flVolume) {
    return;
}
void _Script_SteamCore::Music::PlayPrevious() {
    return;
}
float _Script_SteamCore::Music::GetVolume() {
    return;
}
void* _Script_SteamCore::Music::GetPlaybackStatus() {
    return;
}
bool _Script_SteamCore::Music::BIsPlaying() {
    return;
}
bool _Script_SteamCore::Music::BIsEnabled() {
    return;
}
