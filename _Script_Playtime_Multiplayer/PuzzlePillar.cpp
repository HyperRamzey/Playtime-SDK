#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\MaterialInterface.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "PuzzleList.hpp"
#include "PuzzlePillar.hpp"
_Script_Engine::SceneComponent*& _Script_Playtime_Multiplayer::PuzzlePillar::get_Puzzle1Anchor() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x258);
}
_Script_Engine::StaticMeshComponent*& _Script_Playtime_Multiplayer::PuzzlePillar::get_PillarMesh() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x238);
}
_Script_Engine::SceneComponent*& _Script_Playtime_Multiplayer::PuzzlePillar::get_Puzzle3Anchor() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x268);
}
_Script_Engine::StaticMeshComponent*& _Script_Playtime_Multiplayer::PuzzlePillar::get_BotLights() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x240);
}
_Script_Engine::SceneComponent*& _Script_Playtime_Multiplayer::PuzzlePillar::get_Puzzle2Anchor() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x260);
}
_Script_Engine::StaticMeshComponent*& _Script_Playtime_Multiplayer::PuzzlePillar::get_MidLights() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x248);
}
_Script_Engine::StaticMeshComponent*& _Script_Playtime_Multiplayer::PuzzlePillar::get_TopLights() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x250);
}
_Script_Engine::MaterialInterface*& _Script_Playtime_Multiplayer::PuzzlePillar::get_LightOnMaterial() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x270);
}
void* _Script_Playtime_Multiplayer::PuzzlePillar::get_NavIndicatorClass() {
    return (void*)((uintptr_t)this + 0x278);
}
_Script_Engine::Actor*& _Script_Playtime_Multiplayer::PuzzlePillar::get_NavIndicatorActor() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x280);
}
void* _Script_Playtime_Multiplayer::PuzzlePillar::get_CustomRenderMeshes() {
    return (void*)((uintptr_t)this + 0x288);
}
void* _Script_Playtime_Multiplayer::PuzzlePillar::get_PuzzleAnchors() {
    return (void*)((uintptr_t)this + 0x298);
}
void* _Script_Playtime_Multiplayer::PuzzlePillar::get_ListOfPuzzles() {
    return (void*)((uintptr_t)this + 0x2a8);
}
int32_t& _Script_Playtime_Multiplayer::PuzzlePillar::get_FinalPuzzleSolved() {
    return *(int32_t*)((uintptr_t)this + 0x2b8);
}
bool _Script_Playtime_Multiplayer::PuzzlePillar::get_bHasToyPartSpawned() {
    return (*(uint8_t*)((uintptr_t)this + 0x2bc + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::PuzzlePillar::set_bHasToyPartSpawned(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2bc + 0);
    *(uint8_t*)((uintptr_t)this + 0x2bc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Playtime_Multiplayer::PuzzlePillar::get_SolvedPuzzles() {
    return (void*)((uintptr_t)this + 0x2c0);
}
void* _Script_Playtime_Multiplayer::PuzzlePillar::get_PuzzleProgress() {
    return (void*)((uintptr_t)this + 0x2d0);
}
void _Script_Playtime_Multiplayer::PuzzlePillar::Multicast_UpdateLights() {
    return;
}
_Script_Playtime_Multiplayer::PuzzleList*& _Script_Playtime_Multiplayer::PuzzlePillar::get_ListOfPuzzleTypes() {
    return *(_Script_Playtime_Multiplayer::PuzzleList**)((uintptr_t)this + 0x2e8);
}
void _Script_Playtime_Multiplayer::PuzzlePillar::OnRep_PuzzleList() {
    return;
}
bool _Script_Playtime_Multiplayer::PuzzlePillar::get_bIsTutorial() {
    return (*(uint8_t*)((uintptr_t)this + 0x2f0 + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::PuzzlePillar::set_bIsTutorial(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2f0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2f0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Playtime_Multiplayer::PuzzlePillar::get_UpdatePlayerIndicator() {
    return (void*)((uintptr_t)this + 0x2f8);
}
void* _Script_Playtime_Multiplayer::PuzzlePillar::get_BindPuzzleEvents() {
    return (void*)((uintptr_t)this + 0x308);
}
void* _Script_Playtime_Multiplayer::PuzzlePillar::get_ReleaseToy() {
    return (void*)((uintptr_t)this + 0x318);
}
bool _Script_Playtime_Multiplayer::PuzzlePillar::AllPuzzlesSolved() {
    return;
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::PuzzlePillar::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.PuzzlePillar");
    return result;
}
void _Script_Playtime_Multiplayer::PuzzlePillar::UpdatePuzzleData() {
    return;
}
void _Script_Playtime_Multiplayer::PuzzlePillar::SetHighlight(bool B) {
    return;
}
void _Script_Playtime_Multiplayer::PuzzlePillar::OnRep_FinalPuzzleSolved() {
    return;
}
int32_t _Script_Playtime_Multiplayer::PuzzlePillar::NumPuzzlesSolved() {
    return;
}
int32_t _Script_Playtime_Multiplayer::PuzzlePillar::NumPuzzlesActive() {
    return;
}
void _Script_Playtime_Multiplayer::PuzzlePillar::Multicast_UpdatePlayersIndicator() {
    return;
}
void _Script_Playtime_Multiplayer::PuzzlePillar::Multicast_SetFinalPuzzle(int32_t PuzzleIndex) {
    return;
}
void _Script_Playtime_Multiplayer::PuzzlePillar::DestroyPuzzles() {
    return;
}
void _Script_Playtime_Multiplayer::PuzzlePillar::CheckSolved(int32_t PuzzleIndex) {
    return;
}
bool _Script_Playtime_Multiplayer::PuzzlePillar::AnyPuzzlesActive() {
    return;
}
bool _Script_Playtime_Multiplayer::PuzzlePillar::AllPuzzlesActive() {
    return;
}
