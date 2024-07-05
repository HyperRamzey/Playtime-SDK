#include "..\FUObjectArray.hpp"
#include "..\_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet\BPC_HandMagnet_C.hpp"
#include "..\_Game_Gameplay_Puzzles_ANIM_Fail_BP_FailAnim\BP_FailAnim_C.hpp"
#include "BP_ToyPuzzle_C.hpp"
#include "..\_Game_Gameplay_Puzzles_Triggers_GeneratorPuzzle_BP_MP_HandPanel\BP_MP_HandPanel_C.hpp"
#include "..\_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter\BP_NetworkCharacter_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\ArrowComponent.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "..\_Script_Engine\SoundBase.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "..\_Script_Engine\TextRenderComponent.hpp"
#include "..\_Script_Engine\TimelineComponent.hpp"
#include "..\_Script_Playtime_Multiplayer\HandMagnetComponent.hpp"
#include "..\_Script_Playtime_Multiplayer\PuzzleSoundPack.hpp"
_Script_Engine::SceneComponent*& _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::get_HingeR() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x248);
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::set_isArcadePuzzle(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3cc + 0);
    *(uint8_t*)((uintptr_t)this + 0x3cc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::OnRep_State() {
    return;
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::get_DoorR() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x240);
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::OnRep_PuzzleType() {
    return;
}
void* _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x220);
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::GetPuzzleType(void*& puzzleType) {
    return;
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::get_AI_Nav_Point() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x228);
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::get_DoorL() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x230);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::get_Doors() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x250);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::get_HingeL() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x238);
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::OnRep_PuzzleSoundReplicator() {
    return;
}
_Script_Engine::BoxComponent*& _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::get_HandMagnetCollision() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x258);
}
int32_t& _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::get_puzzleSoundReplicator() {
    return *(int32_t*)((uintptr_t)this + 0x3c8);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::get_Hand() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x260);
}
_Script_Engine::TextRenderComponent*& _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::get_DEBUG_StateDisplay() {
    return *(_Script_Engine::TextRenderComponent**)((uintptr_t)this + 0x288);
}
void* _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::get_OnFindNewAIPuzzle() {
    return (void*)((uintptr_t)this + 0x3d0);
}
_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::get_HandMagnet() {
    return *(_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C**)((uintptr_t)this + 0x268);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::get_Parent() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x2c0);
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::OnRep_State_Implementation() {
    return;
}
_Script_Engine::BoxComponent*& _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::get_Box() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x270);
}
void* _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::get_OnSolvedPuzzle() {
    return (void*)((uintptr_t)this + 0x320);
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::get_PanelMesh() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x278);
}
_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C*& _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::get_MostRecentPlayer() {
    return *(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C**)((uintptr_t)this + 0x378);
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::set_StillBoobytrapped(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x388 + 0);
    *(uint8_t*)((uintptr_t)this + 0x388 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C*& _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::get_Player() {
    return *(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C**)((uintptr_t)this + 0x2f0);
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::get_Base() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x280);
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::GetState(void*& State) {
    return;
}
_Script_Engine::BoxComponent*& _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::get_BoobytrapSparkArea() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x290);
}
int32_t& _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::get_PillarIndex_0() {
    return *(int32_t*)((uintptr_t)this + 0x3b8);
}
_Script_Engine::BoxComponent*& _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::get_SparkArea() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x298);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::get_ToySpawnPoint() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x2b8);
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::ReActivate() {
    return;
}
_Script_Engine::TextRenderComponent*& _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::get_Label() {
    return *(_Script_Engine::TextRenderComponent**)((uintptr_t)this + 0x2a0);
}
void* _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::get_OnPuzzleProgress() {
    return (void*)((uintptr_t)this + 0x3a8);
}
_Script_Engine::BoxComponent*& _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::get_FailAnimSpawnArea() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x2a8);
}
void* _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::get_DoSparks__Direction_7D7A4CD2475AB9F159AF85BA3942EA3D() {
    return (void*)((uintptr_t)this + 0x2e0);
}
_Script_Engine::TextRenderComponent*& _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::get_GroupDisplay() {
    return *(_Script_Engine::TextRenderComponent**)((uintptr_t)this + 0x2b0);
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::StartSpawningSparks() {
    return;
}
int32_t& _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::get_Progress() {
    return *(int32_t*)((uintptr_t)this + 0x384);
}
_Script_Engine::ArrowComponent*& _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::get_Arrow() {
    return *(_Script_Engine::ArrowComponent**)((uintptr_t)this + 0x2c8);
}
_Script_Engine::TextRenderComponent*& _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::get_SpawnDisplay() {
    return *(_Script_Engine::TextRenderComponent**)((uintptr_t)this + 0x2d0);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x2d8);
}
_Script_Engine::TimelineComponent*& _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::get_DoSparks() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x2e8);
}
_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::get_HandPanelMag_Ref() {
    return *(_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C**)((uintptr_t)this + 0x2f8);
}
_Game_Gameplay_Puzzles_Triggers_GeneratorPuzzle_BP_MP_HandPanel::BP_MP_HandPanel_C*& _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::get_HandPanel_Ref() {
    return *(_Game_Gameplay_Puzzles_Triggers_GeneratorPuzzle_BP_MP_HandPanel::BP_MP_HandPanel_C**)((uintptr_t)this + 0x300);
}
_Game_Gameplay_Puzzles_ANIM_Fail_BP_FailAnim::BP_FailAnim_C*& _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::get_FailedAnimActor() {
    return *(_Game_Gameplay_Puzzles_ANIM_Fail_BP_FailAnim::BP_FailAnim_C**)((uintptr_t)this + 0x308);
}
_Script_Playtime_Multiplayer::PuzzleSoundPack*& _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::get_PuzzleSounds() {
    return *(_Script_Playtime_Multiplayer::PuzzleSoundPack**)((uintptr_t)this + 0x3c0);
}
void* _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::get_OnInitialized() {
    return (void*)((uintptr_t)this + 0x310);
}
void* _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::get_OnPuzzleDisplayed() {
    return (void*)((uintptr_t)this + 0x330);
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::DecrementingToInProgress() {
    return;
}
void* _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::get_OnPuzzleBeginPlay() {
    return (void*)((uintptr_t)this + 0x340);
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::GetPuzzlePlayerPinginMS(float& PingInMS) {
    return;
}
void* _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::get_SparksTimer() {
    return (void*)((uintptr_t)this + 0x350);
}
void* _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::get_OnAttach() {
    return (void*)((uintptr_t)this + 0x358);
}
bool _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::get_TutorialLocked() {
    return (*(uint8_t*)((uintptr_t)this + 0x368 + 0)) & 1 != 0;
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::set_TutorialLocked(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x368 + 0);
    *(uint8_t*)((uintptr_t)this + 0x368 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::SoundBase*& _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::get_SolvedSound() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x370);
}
void* _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::get_State() {
    return (void*)((uintptr_t)this + 0x380);
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::OnRep_Progress() {
    return;
}
bool _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::get_StillBoobytrapped() {
    return (*(uint8_t*)((uintptr_t)this + 0x388 + 0)) & 1 != 0;
}
void* _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::get_BoobytrapTriggered() {
    return (void*)((uintptr_t)this + 0x390);
}
void* _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::get_puzzleType() {
    return (void*)((uintptr_t)this + 0x3a0);
}
bool _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::get_isArcadePuzzle() {
    return (*(uint8_t*)((uintptr_t)this + 0x3cc + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Gameplay/Puzzles/BP_ToyPuzzle.BP_ToyPuzzle_C");
    return result;
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::ResetPuzzle() {
    return;
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::DoesTouchCount(_Script_Playtime_Multiplayer::HandMagnetComponent* Magnet, bool& Counts_, _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C*& Character) {
    return;
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::GetSavableState(void*& NewParam) {
    return;
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::OnRep_Progress_Implementation() {
    return;
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::IsBoobyTrapped(bool& Active) {
    return;
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::ToSolved() {
    return;
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::ToShutDown() {
    return;
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::ToBoobyTrapped() {
    return;
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::IsShutDown(bool& Active) {
    return;
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::IsSolved(bool& Active) {
    return;
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::IncrementingToInProgress() {
    return;
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::IdleToInProgress() {
    return;
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::ToIdle() {
    return;
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::FailedPuzzle() {
    return;
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::IsInProgress(bool& InProgress) {
    return;
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::DoIncrement(bool& ShouldComplete_) {
    return;
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::IsPlayerPlayingPuzzle_(_Script_CoreUObject::Object* PlayerRef, bool& Value) {
    return;
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::Spawn_Failed_Indicator() {
    return;
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::OnRep_IsBoobyTrapped() {
    return;
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::DEPREC_IsActive(bool& Active) {
    return;
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::AttenuateSound(float Initial, float& Result) {
    return;
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::PlayerHasPerk_(void* PerkType, bool& Value, int32_t& PerkLevel) {
    return;
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::CheckForPerkFinish(int32_t StreakMax, int32_t CurrentStreak, bool& Finished_) {
    return;
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::OnRep_Shutoff_Implementation() {
    return;
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::OnRep_Parent_Shutoff() {
    return;
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::OnShutdown() {
    return;
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::SetSolved(bool Value) {
    return;
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::OnRep_Parent_Initialized() {
    return;
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::OnRep_Initialized_Implementation() {
    return;
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::UserConstructionScript0() {
    return;
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::DoSparks__FinishedFunc() {
    return;
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::DoSparks__UpdateFunc() {
    return;
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::DoSparks__SpawnSpark__EventFunc() {
    return;
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::PlaySolvedSound() {
    return;
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::OnAttached(void* AttachmentStateChange) {
    return;
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::OnAttach__DelegateSignature(_Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C* Puzzle) {
    return;
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::SpawnFailAnim() {
    return;
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::Sabotage(float FixDuration) {
    return;
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::SetTextRenderColor(_Script_CoreUObject::LinearColor InLinearColor) {
    return;
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::SpawnSparks(_Script_Engine::BoxComponent* Box) {
    return;
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::TriggerTrap() {
    return;
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::SpawnSparksBroken() {
    return;
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::TransitionState(void* State) {
    return;
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::StopSpawningSparks() {
    return;
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::ForceState(void* State) {
    return;
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::NotifySabotageEnded() {
    return;
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::BndEvt__BP_ToyPuzzle_pISSMAGNETcomPonentr_K2Node_ComponentBoundEvent_0_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange) {
    return;
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::SpawnBoobyIndicator() {
    return;
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::OpenDoors(float Lerp) {
    return;
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::ForceSolved() {
    return;
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::ExecuteUbergraph_BP_ToyPuzzle(int32_t EntryPoint) {
    return;
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::OnFindNewAIPuzzle__DelegateSignature(_Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C* Solved_Puzzle) {
    return;
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::OnPuzzleProgress__DelegateSignature() {
    return;
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::BoobytrapTriggered__DelegateSignature() {
    return;
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::OnPuzzleBeginPlay__DelegateSignature() {
    return;
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::OnPuzzleDisplayed__DelegateSignature() {
    return;
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::OnSolvedPuzzle__DelegateSignature(int32_t PillarIndex) {
    return;
}
void _Game_Gameplay_Puzzles_BP_ToyPuzzle::BP_ToyPuzzle_C::OnInitialized__DelegateSignature() {
    return;
}
