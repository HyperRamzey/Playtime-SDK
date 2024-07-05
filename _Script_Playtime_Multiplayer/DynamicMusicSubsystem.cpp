#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AudioComponent.hpp"
#include "..\_Script_Engine\GameInstanceSubsystem.hpp"
#include "..\_Script_Engine\SoundBase.hpp"
#include "DynamicMusicSubsystem.hpp"
void* _Script_Playtime_Multiplayer::DynamicMusicSubsystem::get_Audios() {
    return (void*)((uintptr_t)this + 0xa0);
}
void _Script_Playtime_Multiplayer::DynamicMusicSubsystem::set_bIsCrossfading(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x80 + 0);
    *(uint8_t*)((uintptr_t)this + 0x80 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Playtime_Multiplayer::DynamicMusicSubsystem::get_TaggedMusics() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Playtime_Multiplayer::DynamicMusicSubsystem::get_Timer() {
    return (void*)((uintptr_t)this + 0xb8);
}
bool _Script_Playtime_Multiplayer::DynamicMusicSubsystem::get_bIsCrossfading() {
    return (*(uint8_t*)((uintptr_t)this + 0x80 + 0)) & 1 != 0;
}
_Script_Engine::SoundBase*& _Script_Playtime_Multiplayer::DynamicMusicSubsystem::get_CurrentAmbience() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0xb0);
}
void _Script_Playtime_Multiplayer::DynamicMusicSubsystem::SetAmbientMusic(_Script_Engine::SoundBase* AmbientMusic) {
    return;
}
bool _Script_Playtime_Multiplayer::DynamicMusicSubsystem::get_bCurrentAudio() {
    return (*(uint8_t*)((uintptr_t)this + 0x81 + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::DynamicMusicSubsystem::set_bCurrentAudio(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x81 + 0);
    *(uint8_t*)((uintptr_t)this + 0x81 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::DynamicMusicSubsystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.DynamicMusicSubsystem");
    return result;
}
void _Script_Playtime_Multiplayer::DynamicMusicSubsystem::SetTaggedMusic(void* Tag, _Script_Engine::SoundBase* Music) {
    return;
}
void _Script_Playtime_Multiplayer::DynamicMusicSubsystem::SetInactiveAudio(_Script_Engine::AudioComponent* Inactive) {
    return;
}
void _Script_Playtime_Multiplayer::DynamicMusicSubsystem::SetActiveAudio(_Script_Engine::AudioComponent* Active) {
    return;
}
void _Script_Playtime_Multiplayer::DynamicMusicSubsystem::ReturnToAmbientMusic(float FadeTime, float NewVolume) {
    return;
}
_Script_Engine::AudioComponent* _Script_Playtime_Multiplayer::DynamicMusicSubsystem::GetInactiveAudio() {
    return;
}
_Script_Engine::AudioComponent* _Script_Playtime_Multiplayer::DynamicMusicSubsystem::GetActiveAudio() {
    return;
}
void _Script_Playtime_Multiplayer::DynamicMusicSubsystem::FadeToTaggedMusic(void* Tag, float FadeTime, float NewVolume) {
    return;
}
void _Script_Playtime_Multiplayer::DynamicMusicSubsystem::FadeOut(float FadeTime) {
    return;
}
void _Script_Playtime_Multiplayer::DynamicMusicSubsystem::ExecuteNextCrossfadeRequest() {
    return;
}
void _Script_Playtime_Multiplayer::DynamicMusicSubsystem::CrossfadeToAtTime(_Script_Engine::SoundBase* NewMusic, float StartTime, float FadeTime, float NewVolume) {
    return;
}
void _Script_Playtime_Multiplayer::DynamicMusicSubsystem::CrossfadeToAtPercent(_Script_Engine::SoundBase* NewMusic, float StartPercent, float FadeTime, float NewVolume) {
    return;
}
void _Script_Playtime_Multiplayer::DynamicMusicSubsystem::CrossfadeTo(_Script_Engine::SoundBase* NewMusic, float FadeTime, float NewVolume) {
    return;
}
