#include "..\FUObjectArray.hpp"
#include "BP_Train_C.hpp"
#include "..\_Game_Gameplay_Puzzles_AC_MP_Puzzle_EndGoal\AC_MP_Puzzle_EndGoal_C.hpp"
#include "..\_Game_Interface_NavSystem_Blueprints_Actors_BP_NavEscapeActor\BP_NavEscapeActor_C.hpp"
#include "..\_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter\BP_NetworkCharacter_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AnimSequence.hpp"
#include "..\_Script_Engine\AudioComponent.hpp"
#include "..\_Script_Engine\ChildActorComponent.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "..\_Script_Engine\SoundBase.hpp"
#include "..\_Script_Engine\SplineComponent.hpp"
#include "..\_Script_Engine\TimelineComponent.hpp"
#include "..\_Script_Playtime_Multiplayer\NetworkTrain.hpp"
_Script_Engine::SceneComponent*& _Game_Gameplay_Game_BP_Train::BP_Train_C::get_R_CurrentCar() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x490);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Game_BP_Train::BP_Train_C::get_LocomotiveTender() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x368);
}
_Game_Gameplay_Puzzles_AC_MP_Puzzle_EndGoal::AC_MP_Puzzle_EndGoal_C*& _Game_Gameplay_Game_BP_Train::BP_Train_C::get_AC_MP_Puzzle_EndGoal() {
    return *(_Game_Gameplay_Puzzles_AC_MP_Puzzle_EndGoal::AC_MP_Puzzle_EndGoal_C**)((uintptr_t)this + 0x3c0);
}
_Script_Engine::ChildActorComponent*& _Game_Gameplay_Game_BP_Train::BP_Train_C::get_Cart_1() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x350);
}
void* _Game_Gameplay_Game_BP_Train::BP_Train_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x330);
}
_Script_Engine::ChildActorComponent*& _Game_Gameplay_Game_BP_Train::BP_Train_C::get_Cart_2() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x348);
}
_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C*& _Game_Gameplay_Game_BP_Train::BP_Train_C::get_CurrentFocusPlayer() {
    return *(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C**)((uintptr_t)this + 0x450);
}
void _Game_Gameplay_Game_BP_Train::BP_Train_C::ToggleDoor(bool Close) {
    return;
}
_Script_Engine::ChildActorComponent*& _Game_Gameplay_Game_BP_Train::BP_Train_C::get_Cart_4() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x338);
}
void* _Game_Gameplay_Game_BP_Train::BP_Train_C::get_LightBakeHandl() {
    return (void*)((uintptr_t)this + 0x5f0);
}
void _Game_Gameplay_Game_BP_Train::BP_Train_C::set_R_IsTrainFixed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x478 + 0);
    *(uint8_t*)((uintptr_t)this + 0x478 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::SplineComponent*& _Game_Gameplay_Game_BP_Train::BP_Train_C::get_LightBakeSpline() {
    return *(_Script_Engine::SplineComponent**)((uintptr_t)this + 0x360);
}
_Script_CoreUObject::Class* _Game_Gameplay_Game_BP_Train::BP_Train_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Gameplay/Game/BP_Train.BP_Train_C");
    return result;
}
bool _Game_Gameplay_Game_BP_Train::BP_Train_C::get_ReadyToTransitionToEnd() {
    return (*(uint8_t*)((uintptr_t)this + 0x4ba + 0)) & 1 != 0;
}
float& _Game_Gameplay_Game_BP_Train::BP_Train_C::get_DepartingCountdown() {
    return *(float*)((uintptr_t)this + 0x4f8);
}
_Script_Engine::ChildActorComponent*& _Game_Gameplay_Game_BP_Train::BP_Train_C::get_Cart_3() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x340);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Game_BP_Train::BP_Train_C::get_LightBakeHandle() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x358);
}
int32_t& _Game_Gameplay_Game_BP_Train::BP_Train_C::get_Solved() {
    return *(int32_t*)((uintptr_t)this + 0x440);
}
_Script_Engine::AudioComponent*& _Game_Gameplay_Game_BP_Train::BP_Train_C::get_AccelDecelAudio() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x370);
}
_Script_Engine::AudioComponent*& _Game_Gameplay_Game_BP_Train::BP_Train_C::get_DepartingAudio() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x378);
}
void* _Game_Gameplay_Game_BP_Train::BP_Train_C::get_OnTrainStart() {
    return (void*)((uintptr_t)this + 0x4d0);
}
int32_t& _Game_Gameplay_Game_BP_Train::BP_Train_C::get_CurrentStopLocation() {
    return *(int32_t*)((uintptr_t)this + 0x4a8);
}
_Script_Engine::AudioComponent*& _Game_Gameplay_Game_BP_Train::BP_Train_C::get_ChuggingAudio() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x380);
}
_Script_Engine::AudioComponent*& _Game_Gameplay_Game_BP_Train::BP_Train_C::get_IdleAudio() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x388);
}
float& _Game_Gameplay_Game_BP_Train::BP_Train_C::get_Timeline_0_Alpha_5A0BA7524B685155D23FC792AC077F15() {
    return *(float*)((uintptr_t)this + 0x3d8);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Game_BP_Train::BP_Train_C::get_IndicatorSpawn() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x390);
}
void* _Game_Gameplay_Game_BP_Train::BP_Train_C::get_TL_Train__Direction_99B0FE11407D2A34EBDD1A85CED76858() {
    return (void*)((uintptr_t)this + 0x3f0);
}
_Script_Engine::SplineComponent*& _Game_Gameplay_Game_BP_Train::BP_Train_C::get_EndTrack() {
    return *(_Script_Engine::SplineComponent**)((uintptr_t)this + 0x398);
}
float& _Game_Gameplay_Game_BP_Train::BP_Train_C::get_LastDistance() {
    return *(float*)((uintptr_t)this + 0x4b0);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Game_BP_Train::BP_Train_C::get_TrainParent() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x3a0);
}
_Script_Engine::SplineComponent*& _Game_Gameplay_Game_BP_Train::BP_Train_C::get_LoopTrack() {
    return *(_Script_Engine::SplineComponent**)((uintptr_t)this + 0x3a8);
}
float& _Game_Gameplay_Game_BP_Train::BP_Train_C::get_TotalTrackLength() {
    return *(float*)((uintptr_t)this + 0x47c);
}
_Script_Engine::SplineComponent*& _Game_Gameplay_Game_BP_Train::BP_Train_C::get_StartTrack() {
    return *(_Script_Engine::SplineComponent**)((uintptr_t)this + 0x3b0);
}
bool _Game_Gameplay_Game_BP_Train::BP_Train_C::get_FullyTransitionedToLoop() {
    return (*(uint8_t*)((uintptr_t)this + 0x4b9 + 0)) & 1 != 0;
}
void _Game_Gameplay_Game_BP_Train::BP_Train_C::TL_Train__ReachedFullSpeed__EventFunc() {
    return;
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Game_BP_Train::BP_Train_C::get_Scene() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x3b8);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Game_BP_Train::BP_Train_C::get_Train() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x3c8);
}
_Script_Engine::SplineComponent*& _Game_Gameplay_Game_BP_Train::BP_Train_C::get_To() {
    return *(_Script_Engine::SplineComponent**)((uintptr_t)this + 0x470);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Game_BP_Train::BP_Train_C::get_Front() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x3d0);
}
void* _Game_Gameplay_Game_BP_Train::BP_Train_C::get_Timeline_0__Direction_5A0BA7524B685155D23FC792AC077F15() {
    return (void*)((uintptr_t)this + 0x3dc);
}
_Script_Engine::TimelineComponent*& _Game_Gameplay_Game_BP_Train::BP_Train_C::get_Timeline_0() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x3e0);
}
float& _Game_Gameplay_Game_BP_Train::BP_Train_C::get_TL_Train_AnimPlayRate_99B0FE11407D2A34EBDD1A85CED76858() {
    return *(float*)((uintptr_t)this + 0x3e8);
}
float& _Game_Gameplay_Game_BP_Train::BP_Train_C::get_TL_Train_Alpha_99B0FE11407D2A34EBDD1A85CED76858() {
    return *(float*)((uintptr_t)this + 0x3ec);
}
void _Game_Gameplay_Game_BP_Train::BP_Train_C::CallTrain(int32_t Station) {
    return;
}
_Script_Engine::TimelineComponent*& _Game_Gameplay_Game_BP_Train::BP_Train_C::get_TL_Train() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x3f8);
}
bool _Game_Gameplay_Game_BP_Train::BP_Train_C::get_R_PreviewStopLocations() {
    return (*(uint8_t*)((uintptr_t)this + 0x400 + 0)) & 1 != 0;
}
void _Game_Gameplay_Game_BP_Train::BP_Train_C::set_R_PreviewStopLocations(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x400 + 0);
    *(uint8_t*)((uintptr_t)this + 0x400 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Gameplay_Game_BP_Train::BP_Train_C::get_SecondStation() {
    return *(float*)((uintptr_t)this + 0x404);
}
float& _Game_Gameplay_Game_BP_Train::BP_Train_C::get_CarOffset() {
    return *(float*)((uintptr_t)this + 0x408);
}
_Script_Engine::AnimSequence*& _Game_Gameplay_Game_BP_Train::BP_Train_C::get_TrainMoving() {
    return *(_Script_Engine::AnimSequence**)((uintptr_t)this + 0x410);
}
_Script_Engine::AnimSequence*& _Game_Gameplay_Game_BP_Train::BP_Train_C::get_TrainStopped() {
    return *(_Script_Engine::AnimSequence**)((uintptr_t)this + 0x418);
}
void* _Game_Gameplay_Game_BP_Train::BP_Train_C::get_Trigger() {
    return (void*)((uintptr_t)this + 0x420);
}
void* _Game_Gameplay_Game_BP_Train::BP_Train_C::get_Doors() {
    return (void*)((uintptr_t)this + 0x430);
}
_Game_Interface_NavSystem_Blueprints_Actors_BP_NavEscapeActor::BP_NavEscapeActor_C*& _Game_Gameplay_Game_BP_Train::BP_Train_C::get_Indicator() {
    return *(_Game_Interface_NavSystem_Blueprints_Actors_BP_NavEscapeActor::BP_NavEscapeActor_C**)((uintptr_t)this + 0x448);
}
void* _Game_Gameplay_Game_BP_Train::BP_Train_C::get_PlayersOnTrain() {
    return (void*)((uintptr_t)this + 0x458);
}
void* _Game_Gameplay_Game_BP_Train::BP_Train_C::get_MoveTrainTimer() {
    return (void*)((uintptr_t)this + 0x518);
}
_Script_Engine::SplineComponent*& _Game_Gameplay_Game_BP_Train::BP_Train_C::get_From() {
    return *(_Script_Engine::SplineComponent**)((uintptr_t)this + 0x468);
}
void _Game_Gameplay_Game_BP_Train::BP_Train_C::OnTrainCalled__DelegateSignature() {
    return;
}
int32_t& _Game_Gameplay_Game_BP_Train::BP_Train_C::get_Segments_End() {
    return *(int32_t*)((uintptr_t)this + 0x5dc);
}
bool _Game_Gameplay_Game_BP_Train::BP_Train_C::get_R_IsTrainFixed() {
    return (*(uint8_t*)((uintptr_t)this + 0x478 + 0)) & 1 != 0;
}
void* _Game_Gameplay_Game_BP_Train::BP_Train_C::get_R_CarArray() {
    return (void*)((uintptr_t)this + 0x480);
}
void* _Game_Gameplay_Game_BP_Train::BP_Train_C::get_TrainIsFixed() {
    return (void*)((uintptr_t)this + 0x498);
}
int32_t& _Game_Gameplay_Game_BP_Train::BP_Train_C::get_Phase() {
    return *(int32_t*)((uintptr_t)this + 0x4ac);
}
void* _Game_Gameplay_Game_BP_Train::BP_Train_C::get_PlayerStarts() {
    return (void*)((uintptr_t)this + 0x558);
}
float& _Game_Gameplay_Game_BP_Train::BP_Train_C::get_CurrentDistance() {
    return *(float*)((uintptr_t)this + 0x4b4);
}
bool _Game_Gameplay_Game_BP_Train::BP_Train_C::get_DoLoopTransition() {
    return (*(uint8_t*)((uintptr_t)this + 0x4b8 + 0)) & 1 != 0;
}
float& _Game_Gameplay_Game_BP_Train::BP_Train_C::get_IntroSpeed() {
    return *(float*)((uintptr_t)this + 0x548);
}
void _Game_Gameplay_Game_BP_Train::BP_Train_C::set_DoLoopTransition(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4b8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4b8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Gameplay_Game_BP_Train::BP_Train_C::UpdateVariables() {
    return;
}
void _Game_Gameplay_Game_BP_Train::BP_Train_C::set_FullyTransitionedToLoop(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4b9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4b9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Gameplay_Game_BP_Train::BP_Train_C::set_ReadyToTransitionToEnd(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4ba + 0);
    *(uint8_t*)((uintptr_t)this + 0x4ba + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Gameplay_Game_BP_Train::BP_Train_C::get_DoEndTransition() {
    return (*(uint8_t*)((uintptr_t)this + 0x4bb + 0)) & 1 != 0;
}
void _Game_Gameplay_Game_BP_Train::BP_Train_C::set_DoEndTransition(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4bb + 0);
    *(uint8_t*)((uintptr_t)this + 0x4bb + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::SoundBase*& _Game_Gameplay_Game_BP_Train::BP_Train_C::get_A_Chugging() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x4c0);
}
bool _Game_Gameplay_Game_BP_Train::BP_Train_C::get_Ended() {
    return (*(uint8_t*)((uintptr_t)this + 0x4c8 + 0)) & 1 != 0;
}
bool _Game_Gameplay_Game_BP_Train::BP_Train_C::get_EnteredStation() {
    return (*(uint8_t*)((uintptr_t)this + 0x54c + 0)) & 1 != 0;
}
void _Game_Gameplay_Game_BP_Train::BP_Train_C::set_Ended(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4c8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4c8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Gameplay_Game_BP_Train::BP_Train_C::get_OnTrainStop() {
    return (void*)((uintptr_t)this + 0x4e0);
}
void* _Game_Gameplay_Game_BP_Train::BP_Train_C::get_CallTrainTimer() {
    return (void*)((uintptr_t)this + 0x4f0);
}
void* _Game_Gameplay_Game_BP_Train::BP_Train_C::get_CountdownTimer() {
    return (void*)((uintptr_t)this + 0x500);
}
void* _Game_Gameplay_Game_BP_Train::BP_Train_C::get_OnTrainCalled() {
    return (void*)((uintptr_t)this + 0x508);
}
bool _Game_Gameplay_Game_BP_Train::BP_Train_C::get_CloseDoors() {
    return (*(uint8_t*)((uintptr_t)this + 0x520 + 0)) & 1 != 0;
}
void _Game_Gameplay_Game_BP_Train::BP_Train_C::set_CloseDoors(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x520 + 0);
    *(uint8_t*)((uintptr_t)this + 0x520 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Gameplay_Game_BP_Train::BP_Train_C::get_CartTriggers() {
    return (void*)((uintptr_t)this + 0x528);
}
void* _Game_Gameplay_Game_BP_Train::BP_Train_C::get_DoorCheckers() {
    return (void*)((uintptr_t)this + 0x538);
}
void _Game_Gameplay_Game_BP_Train::BP_Train_C::set_EnteredStation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x54c + 0);
    *(uint8_t*)((uintptr_t)this + 0x54c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Gameplay_Game_BP_Train::BP_Train_C::get_Alpha() {
    return *(float*)((uintptr_t)this + 0x550);
}
int32_t& _Game_Gameplay_Game_BP_Train::BP_Train_C::get_CartCount() {
    return *(int32_t*)((uintptr_t)this + 0x554);
}
void* _Game_Gameplay_Game_BP_Train::BP_Train_C::get_LeftDoorCheckers() {
    return (void*)((uintptr_t)this + 0x568);
}
void* _Game_Gameplay_Game_BP_Train::BP_Train_C::get_RightDoorCheckers() {
    return (void*)((uintptr_t)this + 0x578);
}
void* _Game_Gameplay_Game_BP_Train::BP_Train_C::get_Carts() {
    return (void*)((uintptr_t)this + 0x588);
}
bool _Game_Gameplay_Game_BP_Train::BP_Train_C::get_Departing() {
    return (*(uint8_t*)((uintptr_t)this + 0x598 + 0)) & 1 != 0;
}
void _Game_Gameplay_Game_BP_Train::BP_Train_C::set_Departing(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x598 + 0);
    *(uint8_t*)((uintptr_t)this + 0x598 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Gameplay_Game_BP_Train::BP_Train_C::get_ObjectiveCollisions() {
    return (void*)((uintptr_t)this + 0x5a0);
}
void* _Game_Gameplay_Game_BP_Train::BP_Train_C::get_ObjectiveCollisionLocation() {
    return (void*)((uintptr_t)this + 0x5b0);
}
void* _Game_Gameplay_Game_BP_Train::BP_Train_C::get_CartCollisions() {
    return (void*)((uintptr_t)this + 0x5c0);
}
int32_t& _Game_Gameplay_Game_BP_Train::BP_Train_C::get_Segments_Start() {
    return *(int32_t*)((uintptr_t)this + 0x5d0);
}
bool _Game_Gameplay_Game_BP_Train::BP_Train_C::get_ShowSplineMesh() {
    return (*(uint8_t*)((uintptr_t)this + 0x5d4 + 0)) & 1 != 0;
}
void _Game_Gameplay_Game_BP_Train::BP_Train_C::set_ShowSplineMesh(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5d4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x5d4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Game_Gameplay_Game_BP_Train::BP_Train_C::get_Segments_Loop() {
    return *(int32_t*)((uintptr_t)this + 0x5d8);
}
bool _Game_Gameplay_Game_BP_Train::BP_Train_C::get_UseLightBakeSetup() {
    return (*(uint8_t*)((uintptr_t)this + 0x5e0 + 0)) & 1 != 0;
}
void _Game_Gameplay_Game_BP_Train::BP_Train_C::set_UseLightBakeSetup(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5e0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x5e0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Gameplay_Game_BP_Train::BP_Train_C::get_OnBoardTrain() {
    return (void*)((uintptr_t)this + 0x620);
}
void* _Game_Gameplay_Game_BP_Train::BP_Train_C::get_New_Light_Color() {
    return (void*)((uintptr_t)this + 0x630);
}
float& _Game_Gameplay_Game_BP_Train::BP_Train_C::get_New_Temperature() {
    return *(float*)((uintptr_t)this + 0x640);
}
float& _Game_Gameplay_Game_BP_Train::BP_Train_C::get_NetAlpha() {
    return *(float*)((uintptr_t)this + 0x644);
}
void _Game_Gameplay_Game_BP_Train::BP_Train_C::TraceForPlayersInDoorway() {
    return;
}
void _Game_Gameplay_Game_BP_Train::BP_Train_C::OnPlayerExit(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    return;
}
void _Game_Gameplay_Game_BP_Train::BP_Train_C::OnPlayerEnter(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
void _Game_Gameplay_Game_BP_Train::BP_Train_C::SetArrays() {
    return;
}
void _Game_Gameplay_Game_BP_Train::BP_Train_C::OnRep_ToggleDoors() {
    return;
}
void _Game_Gameplay_Game_BP_Train::BP_Train_C::OnTrainStarted0() {
    return;
}
void _Game_Gameplay_Game_BP_Train::BP_Train_C::GetPlayersOnTrain(void*& Players) {
    return;
}
void _Game_Gameplay_Game_BP_Train::BP_Train_C::UpdatePlayersOnTrain(int32_t& Length) {
    return;
}
void _Game_Gameplay_Game_BP_Train::BP_Train_C::MoveCart(_Script_Engine::SceneComponent* Cart, float Distance, _Script_Engine::SplineComponent* Track) {
    return;
}
void _Game_Gameplay_Game_BP_Train::BP_Train_C::OnRep_R_IsTrainFixed() {
    return;
}
void _Game_Gameplay_Game_BP_Train::BP_Train_C::ToggleCarTriggers(bool IsOn_) {
    return;
}
void _Game_Gameplay_Game_BP_Train::BP_Train_C::SetupEscapeIndicator() {
    return;
}
float _Game_Gameplay_Game_BP_Train::BP_Train_C::GetDistanceOnSpline(int32_t Index, float Alpha, bool OnlyUseLoop, _Script_Engine::SplineComponent*& Track) {
    return;
}
void _Game_Gameplay_Game_BP_Train::BP_Train_C::PlayerLeftCart(_Script_Engine::Actor* Actor, _Script_Engine::PrimitiveComponent* Trigger, _Script_Engine::PrimitiveComponent* Component) {
    return;
}
void _Game_Gameplay_Game_BP_Train::BP_Train_C::PlayerEnteredCart(_Script_Engine::Actor* Actor, _Script_Engine::PrimitiveComponent* Component, int32_t Index) {
    return;
}
void _Game_Gameplay_Game_BP_Train::BP_Train_C::UserConstructionScript() {
    return;
}
void _Game_Gameplay_Game_BP_Train::BP_Train_C::TL_Train__FinishedFunc() {
    return;
}
void _Game_Gameplay_Game_BP_Train::BP_Train_C::TL_Train__UpdateFunc() {
    return;
}
void _Game_Gameplay_Game_BP_Train::BP_Train_C::TL_Train__BeginDeceleration__EventFunc() {
    return;
}
void _Game_Gameplay_Game_BP_Train::BP_Train_C::TL_Train__Start__EventFunc() {
    return;
}
void _Game_Gameplay_Game_BP_Train::BP_Train_C::Timeline_0__FinishedFunc() {
    return;
}
void _Game_Gameplay_Game_BP_Train::BP_Train_C::Timeline_0__UpdateFunc() {
    return;
}
void _Game_Gameplay_Game_BP_Train::BP_Train_C::CheckForSolved() {
    return;
}
void _Game_Gameplay_Game_BP_Train::BP_Train_C::R_OnFixed() {
    return;
}
void _Game_Gameplay_Game_BP_Train::BP_Train_C::ToEnd() {
    return;
}
void _Game_Gameplay_Game_BP_Train::BP_Train_C::BeginEndGameSequence() {
    return;
}
void _Game_Gameplay_Game_BP_Train::BP_Train_C::ReceiveBeginPlay() {
    return;
}
void _Game_Gameplay_Game_BP_Train::BP_Train_C::ReceiveTick(float DeltaSeconds) {
    return;
}
void _Game_Gameplay_Game_BP_Train::BP_Train_C::OnTrainStopped0() {
    return;
}
void _Game_Gameplay_Game_BP_Train::BP_Train_C::Multicast_Train_Leaving_Sound() {
    return;
}
void _Game_Gameplay_Game_BP_Train::BP_Train_C::DeactivateCallButtons() {
    return;
}
void _Game_Gameplay_Game_BP_Train::BP_Train_C::BeginDeparture() {
    return;
}
void _Game_Gameplay_Game_BP_Train::BP_Train_C::Countdown() {
    return;
}
void _Game_Gameplay_Game_BP_Train::BP_Train_C::ActivateCallButtons() {
    return;
}
void _Game_Gameplay_Game_BP_Train::BP_Train_C::ExecuteUbergraph_BP_Train(int32_t EntryPoint) {
    return;
}
void _Game_Gameplay_Game_BP_Train::BP_Train_C::OnBoardTrain__DelegateSignature() {
    return;
}
void _Game_Gameplay_Game_BP_Train::BP_Train_C::OnTrainStop__DelegateSignature() {
    return;
}
void _Game_Gameplay_Game_BP_Train::BP_Train_C::OnTrainStart__DelegateSignature() {
    return;
}
void _Game_Gameplay_Game_BP_Train::BP_Train_C::TrainIsFixed__DelegateSignature() {
    return;
}
