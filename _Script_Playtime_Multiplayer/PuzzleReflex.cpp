#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AudioComponent.hpp"
#include "..\_Script_Engine\MaterialInstance.hpp"
#include "..\_Script_Engine\SoundBase.hpp"
#include "HandMagnetComponent.hpp"
#include "PuzzleBase.hpp"
#include "PuzzleReflex.hpp"
int32_t& _Script_Playtime_Multiplayer::PuzzleReflex::get_CorrectTile() {
    return *(int32_t*)((uintptr_t)this + 0x478);
}
bool _Script_Playtime_Multiplayer::PuzzleReflex::get_bIsTileGenerated() {
    return (*(uint8_t*)((uintptr_t)this + 0x484 + 0)) & 1 != 0;
}
int32_t& _Script_Playtime_Multiplayer::PuzzleReflex::get_StreakMax() {
    return *(int32_t*)((uintptr_t)this + 0x47c);
}
_Script_Engine::MaterialInstance*& _Script_Playtime_Multiplayer::PuzzleReflex::get_HighlightMaterial() {
    return *(_Script_Engine::MaterialInstance**)((uintptr_t)this + 0x4a0);
}
void _Script_Playtime_Multiplayer::PuzzleReflex::set_bIsTileGenerated(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x484 + 0);
    *(uint8_t*)((uintptr_t)this + 0x484 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Playtime_Multiplayer::PuzzleReflex::get_NumTiles() {
    return *(int32_t*)((uintptr_t)this + 0x480);
}
_Script_Engine::SoundBase*& _Script_Playtime_Multiplayer::PuzzleReflex::get_CorrectTileSound() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x4e8);
}
float& _Script_Playtime_Multiplayer::PuzzleReflex::get_TimeToSmack() {
    return *(float*)((uintptr_t)this + 0x488);
}
void* _Script_Playtime_Multiplayer::PuzzleReflex::get_TileFaces() {
    return (void*)((uintptr_t)this + 0x490);
}
void* _Script_Playtime_Multiplayer::PuzzleReflex::get_NormalTileMaterials() {
    return (void*)((uintptr_t)this + 0x4a8);
}
_Script_Engine::SoundBase*& _Script_Playtime_Multiplayer::PuzzleReflex::get_TickingSound() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x4e0);
}
_Script_Engine::SoundBase*& _Script_Playtime_Multiplayer::PuzzleReflex::get_WrongTileSound() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x4f0);
}
_Script_Engine::AudioComponent*& _Script_Playtime_Multiplayer::PuzzleReflex::get_AudioComponent() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x4f8);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::PuzzleReflex::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.PuzzleReflex");
    return result;
}
void _Script_Playtime_Multiplayer::PuzzleReflex::UpdateSelection() {
    return;
}
void _Script_Playtime_Multiplayer::PuzzleReflex::SolvedButtonGlow() {
    return;
}
void _Script_Playtime_Multiplayer::PuzzleReflex::ShowTileToBeSmacked() {
    return;
}
void _Script_Playtime_Multiplayer::PuzzleReflex::Select(_Script_Playtime_Multiplayer::HandMagnetComponent* SelectedButton, int32_t Index) {
    return;
}
void _Script_Playtime_Multiplayer::PuzzleReflex::PlaySolvedSound() {
    return;
}
void _Script_Playtime_Multiplayer::PuzzleReflex::PlaySelectedSound(bool Correct) {
    return;
}
void _Script_Playtime_Multiplayer::PuzzleReflex::ClearTiles() {
    return;
}
