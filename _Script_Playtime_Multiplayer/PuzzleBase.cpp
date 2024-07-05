#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\MaterialInstance.hpp"
#include "..\_Script_Engine\ParticleSystem.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "..\_Script_Engine\SoundBase.hpp"
#include "..\_Script_Engine\StaticMesh.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "ANetworkCharacter.hpp"
#include "HandMagnetComponent.hpp"
#include "PuzzleBase.hpp"
#include "PuzzleSoundPack.hpp"
_Script_Playtime_Multiplayer::HandMagnetComponent*& _Script_Playtime_Multiplayer::PuzzleBase::get_HandMagnet() {
    return *(_Script_Playtime_Multiplayer::HandMagnetComponent**)((uintptr_t)this + 0x248);
}
_Script_Engine::SceneComponent*& _Script_Playtime_Multiplayer::PuzzleBase::get_Root() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x228);
}
_Script_Playtime_Multiplayer::ANetworkCharacter*& _Script_Playtime_Multiplayer::PuzzleBase::get_Player() {
    return *(_Script_Playtime_Multiplayer::ANetworkCharacter**)((uintptr_t)this + 0x300);
}
_Script_Engine::BoxComponent*& _Script_Playtime_Multiplayer::PuzzleBase::get_CollisionBox() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x238);
}
_Script_Engine::StaticMeshComponent*& _Script_Playtime_Multiplayer::PuzzleBase::get_Face() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x230);
}
_Script_Engine::SceneComponent*& _Script_Playtime_Multiplayer::PuzzleBase::get_SpawnAreaParent() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x260);
}
_Script_Engine::SkeletalMeshComponent*& _Script_Playtime_Multiplayer::PuzzleBase::get_Hand() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x250);
}
_Script_Engine::StaticMeshComponent*& _Script_Playtime_Multiplayer::PuzzleBase::get_HandPanel() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x240);
}
_Script_Engine::BoxComponent*& _Script_Playtime_Multiplayer::PuzzleBase::get_HandMagnetCollision() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x258);
}
_Script_Engine::BoxComponent*& _Script_Playtime_Multiplayer::PuzzleBase::get_SparkArea() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x268);
}
void _Script_Playtime_Multiplayer::PuzzleBase::set_InProgress(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2fd + 0);
    *(uint8_t*)((uintptr_t)this + 0x2fd + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::BoxComponent*& _Script_Playtime_Multiplayer::PuzzleBase::get_BoobyTrapArea() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x270);
}
bool _Script_Playtime_Multiplayer::PuzzleBase::get_isArcadePuzzle() {
    return (*(uint8_t*)((uintptr_t)this + 0x321 + 0)) & 1 != 0;
}
_Script_Engine::BoxComponent*& _Script_Playtime_Multiplayer::PuzzleBase::get_FailAnimArea() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x278);
}
_Script_Engine::SceneComponent*& _Script_Playtime_Multiplayer::PuzzleBase::get_DoorParent() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x280);
}
_Script_Engine::SceneComponent*& _Script_Playtime_Multiplayer::PuzzleBase::get_LeftDoorHinge() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x288);
}
_Script_Engine::SceneComponent*& _Script_Playtime_Multiplayer::PuzzleBase::get_RightDoorHinge() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x290);
}
_Script_Engine::StaticMeshComponent*& _Script_Playtime_Multiplayer::PuzzleBase::get_LeftDoor() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x298);
}
bool _Script_Playtime_Multiplayer::PuzzleBase::IsInProgress() {
    return;
}
_Script_Engine::StaticMeshComponent*& _Script_Playtime_Multiplayer::PuzzleBase::get_RightDoor() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x2a0);
}
void* _Script_Playtime_Multiplayer::PuzzleBase::get_BP_NavBoobyTrapIndicator() {
    return (void*)((uintptr_t)this + 0x2e0);
}
_Script_Engine::SoundBase*& _Script_Playtime_Multiplayer::PuzzleBase::get_SolvedSound() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x2a8);
}
_Script_Engine::StaticMesh*& _Script_Playtime_Multiplayer::PuzzleBase::get_FaceMesh() {
    return *(_Script_Engine::StaticMesh**)((uintptr_t)this + 0x2b0);
}
_Script_Engine::StaticMesh*& _Script_Playtime_Multiplayer::PuzzleBase::get_PanelMesh() {
    return *(_Script_Engine::StaticMesh**)((uintptr_t)this + 0x2b8);
}
int32_t& _Script_Playtime_Multiplayer::PuzzleBase::get_PillarIndex() {
    return *(int32_t*)((uintptr_t)this + 0x2f0);
}
_Script_Engine::StaticMesh*& _Script_Playtime_Multiplayer::PuzzleBase::get_LeftDoorMesh() {
    return *(_Script_Engine::StaticMesh**)((uintptr_t)this + 0x2c0);
}
_Script_Engine::StaticMesh*& _Script_Playtime_Multiplayer::PuzzleBase::get_RightDoorMesh() {
    return *(_Script_Engine::StaticMesh**)((uintptr_t)this + 0x2c8);
}
void _Script_Playtime_Multiplayer::PuzzleBase::set_isArcadePuzzle(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x321 + 0);
    *(uint8_t*)((uintptr_t)this + 0x321 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Playtime_Multiplayer::PuzzleBase::get_BP_FailAnim() {
    return (void*)((uintptr_t)this + 0x2d0);
}
void* _Script_Playtime_Multiplayer::PuzzleBase::get_BP_NavFailPuzzleIndicator() {
    return (void*)((uintptr_t)this + 0x2d8);
}
_Script_Engine::ParticleSystem*& _Script_Playtime_Multiplayer::PuzzleBase::get_SparkEmitter() {
    return *(_Script_Engine::ParticleSystem**)((uintptr_t)this + 0x2e8);
}
int32_t& _Script_Playtime_Multiplayer::PuzzleBase::get_Progress() {
    return *(int32_t*)((uintptr_t)this + 0x2f4);
}
int32_t& _Script_Playtime_Multiplayer::PuzzleBase::get_puzzleSoundReplicator() {
    return *(int32_t*)((uintptr_t)this + 0x2f8);
}
bool _Script_Playtime_Multiplayer::PuzzleBase::get_Solved() {
    return (*(uint8_t*)((uintptr_t)this + 0x2fc + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::PuzzleBase::set_Solved(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2fc + 0);
    *(uint8_t*)((uintptr_t)this + 0x2fc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Playtime_Multiplayer::PuzzleBase::IsShutDown() {
    return;
}
bool _Script_Playtime_Multiplayer::PuzzleBase::get_InProgress() {
    return (*(uint8_t*)((uintptr_t)this + 0x2fd + 0)) & 1 != 0;
}
_Script_Playtime_Multiplayer::ANetworkCharacter*& _Script_Playtime_Multiplayer::PuzzleBase::get_MostRecentPlayer() {
    return *(_Script_Playtime_Multiplayer::ANetworkCharacter**)((uintptr_t)this + 0x308);
}
void _Script_Playtime_Multiplayer::PuzzleBase::ToSolved() {
    return;
}
void _Script_Playtime_Multiplayer::PuzzleBase::OnRep_Progress() {
    return;
}
void* _Script_Playtime_Multiplayer::PuzzleBase::get_State() {
    return (void*)((uintptr_t)this + 0x310);
}
void* _Script_Playtime_Multiplayer::PuzzleBase::get_puzzleType() {
    return (void*)((uintptr_t)this + 0x311);
}
_Script_Engine::BoxComponent*& _Script_Playtime_Multiplayer::PuzzleBase::get_CurrentSparkArea() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x318);
}
_Script_Playtime_Multiplayer::PuzzleSoundPack*& _Script_Playtime_Multiplayer::PuzzleBase::get_PuzzleSounds() {
    return *(_Script_Playtime_Multiplayer::PuzzleSoundPack**)((uintptr_t)this + 0x3d8);
}
bool _Script_Playtime_Multiplayer::PuzzleBase::IsSolved() {
    return;
}
_Script_Engine::MaterialInstance*& _Script_Playtime_Multiplayer::PuzzleBase::get_CorrectMaterial() {
    return *(_Script_Engine::MaterialInstance**)((uintptr_t)this + 0x3e0);
}
void _Script_Playtime_Multiplayer::PuzzleBase::OnAttachmentStateChanged(void* AttachmentStateChange) {
    return;
}
void* _Script_Playtime_Multiplayer::PuzzleBase::get_OnPuzzleHit() {
    return (void*)((uintptr_t)this + 0x468);
}
void _Script_Playtime_Multiplayer::PuzzleBase::OnRep_PuzzleSoundReplicator() {
    return;
}
void _Script_Playtime_Multiplayer::PuzzleBase::BoobyTrapSparksFinished() {
    return;
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::PuzzleBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.PuzzleBase");
    return result;
}
void _Script_Playtime_Multiplayer::PuzzleBase::TransitionState(void* NewState) {
    return;
}
void _Script_Playtime_Multiplayer::PuzzleBase::ToShutDown() {
    return;
}
void _Script_Playtime_Multiplayer::PuzzleBase::ToIdle() {
    return;
}
void _Script_Playtime_Multiplayer::PuzzleBase::ToBoobyTrapped() {
    return;
}
void _Script_Playtime_Multiplayer::PuzzleBase::StopSpawningSparks() {
    return;
}
void _Script_Playtime_Multiplayer::PuzzleBase::StartSpawningSparks() {
    return;
}
void _Script_Playtime_Multiplayer::PuzzleBase::SpawnSparks(_Script_Engine::BoxComponent* SparkSpawningArea) {
    return;
}
void _Script_Playtime_Multiplayer::PuzzleBase::SpawnFailAnim() {
    return;
}
void _Script_Playtime_Multiplayer::PuzzleBase::SpawnBoobyIndicator() {
    return;
}
void _Script_Playtime_Multiplayer::PuzzleBase::ResetPuzzle() {
    return;
}
void _Script_Playtime_Multiplayer::PuzzleBase::OpenDoors(float LerpAlpha) {
    return;
}
void _Script_Playtime_Multiplayer::PuzzleBase::OnRep_State() {
    return;
}
void _Script_Playtime_Multiplayer::PuzzleBase::OnPanelHit() {
    return;
}
bool _Script_Playtime_Multiplayer::PuzzleBase::IsBoobyTrapped() {
    return;
}
void _Script_Playtime_Multiplayer::PuzzleBase::IncrementingToInProgress() {
    return;
}
void _Script_Playtime_Multiplayer::PuzzleBase::IdleToInProgress() {
    return;
}
void* _Script_Playtime_Multiplayer::PuzzleBase::GetState() {
    return;
}
float _Script_Playtime_Multiplayer::PuzzleBase::GetPuzzlePlayerPinginMS() {
    return;
}
void _Script_Playtime_Multiplayer::PuzzleBase::FailedToInProgress() {
    return;
}
void _Script_Playtime_Multiplayer::PuzzleBase::FailedPuzzle() {
    return;
}
bool _Script_Playtime_Multiplayer::PuzzleBase::DoIncrement() {
    return;
}
void _Script_Playtime_Multiplayer::PuzzleBase::DoesTouchCount(_Script_Playtime_Multiplayer::HandMagnetComponent* MagnetComponent, _Script_Playtime_Multiplayer::ANetworkCharacter* PlayerRef, bool& outCounts, _Script_Playtime_Multiplayer::ANetworkCharacter*& outPlayerRef) {
    return;
}
