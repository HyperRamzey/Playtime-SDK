#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AudioComponent.hpp"
#include "..\_Script_Engine\Material.hpp"
#include "..\_Script_Engine\MaterialInstance.hpp"
#include "..\_Script_Engine\SoundBase.hpp"
#include "..\_Script_Engine\TimelineComponent.hpp"
#include "HandMagnetComponent.hpp"
#include "PuzzleBase.hpp"
#include "PuzzleCode.hpp"
int32_t& _Script_Playtime_Multiplayer::PuzzleCode::get_PatternLength() {
    return *(int32_t*)((uintptr_t)this + 0x478);
}
int32_t& _Script_Playtime_Multiplayer::PuzzleCode::get_StreakMax() {
    return *(int32_t*)((uintptr_t)this + 0x47c);
}
int32_t& _Script_Playtime_Multiplayer::PuzzleCode::get_NumButtons() {
    return *(int32_t*)((uintptr_t)this + 0x480);
}
void _Script_Playtime_Multiplayer::PuzzleCode::set_bIsGeneratingPattern(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4a8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4a8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Playtime_Multiplayer::PuzzleCode::get_Mistakes() {
    return *(int32_t*)((uintptr_t)this + 0x484);
}
void* _Script_Playtime_Multiplayer::PuzzleCode::get_TargetPattern() {
    return (void*)((uintptr_t)this + 0x488);
}
void _Script_Playtime_Multiplayer::PuzzleCode::Multicast_StartNewPatternTimeline() {
    return;
}
void* _Script_Playtime_Multiplayer::PuzzleCode::get_PlayerPattern() {
    return (void*)((uintptr_t)this + 0x498);
}
bool _Script_Playtime_Multiplayer::PuzzleCode::get_bIsGeneratingPattern() {
    return (*(uint8_t*)((uintptr_t)this + 0x4a8 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::PuzzleCode::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.PuzzleCode");
    return result;
}
_Script_Engine::Material*& _Script_Playtime_Multiplayer::PuzzleCode::get_DefaultMaterial() {
    return *(_Script_Engine::Material**)((uintptr_t)this + 0x4b0);
}
_Script_Engine::MaterialInstance*& _Script_Playtime_Multiplayer::PuzzleCode::get_HighlightMaterial() {
    return *(_Script_Engine::MaterialInstance**)((uintptr_t)this + 0x4b8);
}
void _Script_Playtime_Multiplayer::PuzzleCode::SolvedButtonGlow() {
    return;
}
_Script_Engine::MaterialInstance*& _Script_Playtime_Multiplayer::PuzzleCode::get_MistakeMaterial() {
    return *(_Script_Engine::MaterialInstance**)((uintptr_t)this + 0x4c0);
}
void _Script_Playtime_Multiplayer::PuzzleCode::SelectButton(_Script_Playtime_Multiplayer::HandMagnetComponent* Button, int32_t ButtonIndex) {
    return;
}
_Script_Engine::MaterialInstance*& _Script_Playtime_Multiplayer::PuzzleCode::get_IncorrectMaterial() {
    return *(_Script_Engine::MaterialInstance**)((uintptr_t)this + 0x4c8);
}
void* _Script_Playtime_Multiplayer::PuzzleCode::get_ButtonMeshes() {
    return (void*)((uintptr_t)this + 0x4d0);
}
_Script_Engine::SoundBase*& _Script_Playtime_Multiplayer::PuzzleCode::get_ButtonCorrectSound() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x4e0);
}
void _Script_Playtime_Multiplayer::PuzzleCode::Multicast_StopNewPatternTimeline() {
    return;
}
_Script_Engine::SoundBase*& _Script_Playtime_Multiplayer::PuzzleCode::get_ButtonIncorrectSound() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x4e8);
}
_Script_Engine::SoundBase*& _Script_Playtime_Multiplayer::PuzzleCode::get_PatternCorrectSound() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x4f0);
}
_Script_Engine::AudioComponent*& _Script_Playtime_Multiplayer::PuzzleCode::get_RandomizingSound() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x4f8);
}
_Script_Engine::TimelineComponent*& _Script_Playtime_Multiplayer::PuzzleCode::get_SuccessTimeline() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x500);
}
_Script_Engine::TimelineComponent*& _Script_Playtime_Multiplayer::PuzzleCode::get_FailedTimeline() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x508);
}
_Script_Engine::TimelineComponent*& _Script_Playtime_Multiplayer::PuzzleCode::get_NewPatternTimeline() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x510);
}
void _Script_Playtime_Multiplayer::PuzzleCode::PlayRandomizingSound(bool Play) {
    return;
}
void _Script_Playtime_Multiplayer::PuzzleCode::OnRep_PlayerPattern() {
    return;
}
void _Script_Playtime_Multiplayer::PuzzleCode::OnRep_bIsGeneratingPattern() {
    return;
}
void _Script_Playtime_Multiplayer::PuzzleCode::Multicast_ClearButtons() {
    return;
}
void* _Script_Playtime_Multiplayer::PuzzleCode::GenerateRandomPattern() {
    return;
}
void _Script_Playtime_Multiplayer::PuzzleCode::GenerateNewPatternAndShowIt() {
    return;
}
void _Script_Playtime_Multiplayer::PuzzleCode::ButtonHighlight(void*& ButtonsToHighlight, _Script_Engine::MaterialInstance* Material, bool Clear) {
    return;
}
void _Script_Playtime_Multiplayer::PuzzleCode::AllButtonDefault() {
    return;
}
