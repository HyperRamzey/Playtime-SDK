#include "..\FUObjectArray.hpp"
#include "..\_Game_Gameplay_Interaction_Sewers_BP_PseudoHand\BP_PseudoHand_C.hpp"
#include "..\_Game_Gameplay_Interaction_Sewers_BP_WormholeExit\BP_WormholeExit_C.hpp"
#include "BP_WuggyHole_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_Engine\AudioComponent.hpp"
#include "..\_Script_Engine\ChildActorComponent.hpp"
#include "..\_Script_Engine\CurveFloat.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Playtime_Multiplayer\ANetworkCharacter.hpp"
#include "..\_Script_Playtime_Multiplayer\WuggyHole.hpp"
void* _Game_Gameplay_Interaction_Sewers_BP_WuggyHole::BP_WuggyHole_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x258);
}
void _Game_Gameplay_Interaction_Sewers_BP_WuggyHole::BP_WuggyHole_C::GrabNextCharacter(_Game_Gameplay_Interaction_Sewers_BP_PseudoHand::BP_PseudoHand_C*& PseudoHand, _Script_Playtime_Multiplayer::ANetworkCharacter*& GrabbedCharacter, _Game_Gameplay_Interaction_Sewers_BP_WormholeExit::BP_WormholeExit_C*& WormHole, bool& Success) {
    return;
}
_Script_Engine::ChildActorComponent*& _Game_Gameplay_Interaction_Sewers_BP_WuggyHole::BP_WuggyHole_C::get_BP_WhackAWuggySpawnPoint4() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x310);
}
_Script_Engine::AudioComponent*& _Game_Gameplay_Interaction_Sewers_BP_WuggyHole::BP_WuggyHole_C::get_Audio() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x260);
}
_Script_Engine::ChildActorComponent*& _Game_Gameplay_Interaction_Sewers_BP_WuggyHole::BP_WuggyHole_C::get_BP_WormholeExit1() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x268);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Interaction_Sewers_BP_WuggyHole::BP_WuggyHole_C::get_Entrances() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x288);
}
_Script_Engine::ChildActorComponent*& _Game_Gameplay_Interaction_Sewers_BP_WuggyHole::BP_WuggyHole_C::get_BP_WormholeExit6() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x270);
}
_Script_Engine::ChildActorComponent*& _Game_Gameplay_Interaction_Sewers_BP_WuggyHole::BP_WuggyHole_C::get_BP_WormholeExit3() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x280);
}
_Script_Engine::ChildActorComponent*& _Game_Gameplay_Interaction_Sewers_BP_WuggyHole::BP_WuggyHole_C::get_BP_WormholeExit5() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x278);
}
void _Game_Gameplay_Interaction_Sewers_BP_WuggyHole::BP_WuggyHole_C::BP_AuthorityBeginMinigame0() {
    return;
}
_Script_Engine::ChildActorComponent*& _Game_Gameplay_Interaction_Sewers_BP_WuggyHole::BP_WuggyHole_C::get_BP_WhackAWuggySpawnPoint20() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x290);
}
void _Game_Gameplay_Interaction_Sewers_BP_WuggyHole::BP_WuggyHole_C::ReceiveBeginPlay() {
    return;
}
_Script_Engine::ChildActorComponent*& _Game_Gameplay_Interaction_Sewers_BP_WuggyHole::BP_WuggyHole_C::get_BP_WhackAWuggySpawnPoint19() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x298);
}
_Script_Engine::ChildActorComponent*& _Game_Gameplay_Interaction_Sewers_BP_WuggyHole::BP_WuggyHole_C::get_BP_WhackAWuggySpawnPoint18() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x2a0);
}
_Script_Engine::ChildActorComponent*& _Game_Gameplay_Interaction_Sewers_BP_WuggyHole::BP_WuggyHole_C::get_BP_WhackAWuggySpawnPoint17() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x2a8);
}
void _Game_Gameplay_Interaction_Sewers_BP_WuggyHole::BP_WuggyHole_C::ResolveDoors() {
    return;
}
_Script_Engine::ChildActorComponent*& _Game_Gameplay_Interaction_Sewers_BP_WuggyHole::BP_WuggyHole_C::get_BP_WhackAWuggySpawnPoint16() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x2b0);
}
_Script_Engine::ChildActorComponent*& _Game_Gameplay_Interaction_Sewers_BP_WuggyHole::BP_WuggyHole_C::get_BP_WhackAWuggySpawnPoint15() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x2b8);
}
void _Game_Gameplay_Interaction_Sewers_BP_WuggyHole::BP_WuggyHole_C::UpdateNetDormancy() {
    return;
}
void _Game_Gameplay_Interaction_Sewers_BP_WuggyHole::BP_WuggyHole_C::GetRandomWormholeExit(_Game_Gameplay_Interaction_Sewers_BP_WormholeExit::BP_WormholeExit_C*& WormholeExit) {
    return;
}
_Script_Engine::ChildActorComponent*& _Game_Gameplay_Interaction_Sewers_BP_WuggyHole::BP_WuggyHole_C::get_BP_WhackAWuggySpawnPoint14() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x2c0);
}
void _Game_Gameplay_Interaction_Sewers_BP_WuggyHole::BP_WuggyHole_C::BP_OnRep_OldestPlayer0() {
    return;
}
_Script_Engine::ChildActorComponent*& _Game_Gameplay_Interaction_Sewers_BP_WuggyHole::BP_WuggyHole_C::get_BP_WhackAWuggySpawnPoint13() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x2c8);
}
void _Game_Gameplay_Interaction_Sewers_BP_WuggyHole::BP_WuggyHole_C::UserConstructionScript() {
    return;
}
_Script_CoreUObject::Class* _Game_Gameplay_Interaction_Sewers_BP_WuggyHole::BP_WuggyHole_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Gameplay/Interaction/Sewers/BP_WuggyHole.BP_WuggyHole_C");
    return result;
}
_Script_Engine::ChildActorComponent*& _Game_Gameplay_Interaction_Sewers_BP_WuggyHole::BP_WuggyHole_C::get_BP_WhackAWuggySpawnPoint12() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x2d0);
}
_Script_Engine::ChildActorComponent*& _Game_Gameplay_Interaction_Sewers_BP_WuggyHole::BP_WuggyHole_C::get_BP_WhackAWuggySpawnPoint11() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x2d8);
}
_Script_Engine::ChildActorComponent*& _Game_Gameplay_Interaction_Sewers_BP_WuggyHole::BP_WuggyHole_C::get_BP_WhackAWuggySpawnPoint10() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x2e0);
}
_Script_Engine::ChildActorComponent*& _Game_Gameplay_Interaction_Sewers_BP_WuggyHole::BP_WuggyHole_C::get_BP_WhackAWuggySpawnPoint9() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x2e8);
}
_Script_Engine::ChildActorComponent*& _Game_Gameplay_Interaction_Sewers_BP_WuggyHole::BP_WuggyHole_C::get_BP_WhackAWuggySpawnPoint8() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x2f0);
}
_Script_Engine::ChildActorComponent*& _Game_Gameplay_Interaction_Sewers_BP_WuggyHole::BP_WuggyHole_C::get_BP_WhackAWuggySpawnPoint7() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x2f8);
}
_Script_Engine::ChildActorComponent*& _Game_Gameplay_Interaction_Sewers_BP_WuggyHole::BP_WuggyHole_C::get_BP_WhackAWuggySpawnPoint6() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x300);
}
void _Game_Gameplay_Interaction_Sewers_BP_WuggyHole::BP_WuggyHole_C::ExecuteUbergraph_BP_WuggyHole(int32_t EntryPoint) {
    return;
}
_Script_Engine::ChildActorComponent*& _Game_Gameplay_Interaction_Sewers_BP_WuggyHole::BP_WuggyHole_C::get_BP_WhackAWuggySpawnPoint5() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x308);
}
_Script_Engine::ChildActorComponent*& _Game_Gameplay_Interaction_Sewers_BP_WuggyHole::BP_WuggyHole_C::get_BP_WhackAWuggySpawnPoint3() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x318);
}
_Script_Engine::ChildActorComponent*& _Game_Gameplay_Interaction_Sewers_BP_WuggyHole::BP_WuggyHole_C::get_BP_WhackAWuggySpawnPoint2() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x320);
}
_Script_Engine::ChildActorComponent*& _Game_Gameplay_Interaction_Sewers_BP_WuggyHole::BP_WuggyHole_C::get_BP_WhackAWuggySpawnPoint1() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x328);
}
_Script_Engine::ChildActorComponent*& _Game_Gameplay_Interaction_Sewers_BP_WuggyHole::BP_WuggyHole_C::get_BP_WhackAWuggySpawnPoint0() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x330);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Interaction_Sewers_BP_WuggyHole::BP_WuggyHole_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x338);
}
void* _Game_Gameplay_Interaction_Sewers_BP_WuggyHole::BP_WuggyHole_C::get_WormHoleExits() {
    return (void*)((uintptr_t)this + 0x340);
}
int32_t& _Game_Gameplay_Interaction_Sewers_BP_WuggyHole::BP_WuggyHole_C::get_I() {
    return *(int32_t*)((uintptr_t)this + 0x350);
}
void* _Game_Gameplay_Interaction_Sewers_BP_WuggyHole::BP_WuggyHole_C::get_WormHoleEntrances() {
    return (void*)((uintptr_t)this + 0x358);
}
int32_t& _Game_Gameplay_Interaction_Sewers_BP_WuggyHole::BP_WuggyHole_C::get_NumOpenDoors() {
    return *(int32_t*)((uintptr_t)this + 0x368);
}
void* _Game_Gameplay_Interaction_Sewers_BP_WuggyHole::BP_WuggyHole_C::get_Between_Spawns_Timer() {
    return (void*)((uintptr_t)this + 0x370);
}
void* _Game_Gameplay_Interaction_Sewers_BP_WuggyHole::BP_WuggyHole_C::get_BetweenWuggiesTimer() {
    return (void*)((uintptr_t)this + 0x378);
}
void _Game_Gameplay_Interaction_Sewers_BP_WuggyHole::BP_WuggyHole_C::HasPlayers(bool& Has) {
    return;
}
int32_t& _Game_Gameplay_Interaction_Sewers_BP_WuggyHole::BP_WuggyHole_C::get_Multiplier() {
    return *(int32_t*)((uintptr_t)this + 0x380);
}
float& _Game_Gameplay_Interaction_Sewers_BP_WuggyHole::BP_WuggyHole_C::get_BP_MinigameStartTime() {
    return *(float*)((uintptr_t)this + 0x384);
}
_Script_Playtime_Multiplayer::ANetworkCharacter*& _Game_Gameplay_Interaction_Sewers_BP_WuggyHole::BP_WuggyHole_C::get_Valid_Oldest_Player() {
    return *(_Script_Playtime_Multiplayer::ANetworkCharacter**)((uintptr_t)this + 0x388);
}
bool _Game_Gameplay_Interaction_Sewers_BP_WuggyHole::BP_WuggyHole_C::get_Oldest_Player_Exists() {
    return (*(uint8_t*)((uintptr_t)this + 0x390 + 0)) & 1 != 0;
}
void _Game_Gameplay_Interaction_Sewers_BP_WuggyHole::BP_WuggyHole_C::set_Oldest_Player_Exists(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x390 + 0);
    *(uint8_t*)((uintptr_t)this + 0x390 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::CurveFloat*& _Game_Gameplay_Interaction_Sewers_BP_WuggyHole::BP_WuggyHole_C::get_TimingCurve() {
    return *(_Script_Engine::CurveFloat**)((uintptr_t)this + 0x398);
}
void _Game_Gameplay_Interaction_Sewers_BP_WuggyHole::BP_WuggyHole_C::OnRep_Valid_Oldest_Player() {
    return;
}
void _Game_Gameplay_Interaction_Sewers_BP_WuggyHole::BP_WuggyHole_C::GetWormholeToGrabFrom(_Script_Playtime_Multiplayer::ANetworkCharacter* Player, _Script_CoreUObject::Transform& Transform, _Game_Gameplay_Interaction_Sewers_BP_WormholeExit::BP_WormholeExit_C*& WormHole) {
    return;
}
void _Game_Gameplay_Interaction_Sewers_BP_WuggyHole::BP_WuggyHole_C::SpawnWuggyWave() {
    return;
}
void _Game_Gameplay_Interaction_Sewers_BP_WuggyHole::BP_WuggyHole_C::AddPlayer(_Script_Playtime_Multiplayer::ANetworkCharacter* NetworkCharacter, bool ShouldIncreaseStrikes, bool SpawnedToRevive_) {
    return;
}
void _Game_Gameplay_Interaction_Sewers_BP_WuggyHole::BP_WuggyHole_C::BP_AuthorityEndMinigame0() {
    return;
}
void _Game_Gameplay_Interaction_Sewers_BP_WuggyHole::BP_WuggyHole_C::SpawnWuggyEvent() {
    return;
}
void _Game_Gameplay_Interaction_Sewers_BP_WuggyHole::BP_WuggyHole_C::StartGame() {
    return;
}
