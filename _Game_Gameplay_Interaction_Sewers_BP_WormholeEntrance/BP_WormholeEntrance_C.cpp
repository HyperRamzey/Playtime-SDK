#include "..\FUObjectArray.hpp"
#include "..\_Game_Gameplay_Interaction_BP_OutlineComponent\BP_OutlineComponent_C.hpp"
#include "..\_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet\BPC_HandMagnet_C.hpp"
#include "..\_Game_Gameplay_Interaction_Sewers_BP_DualSplineFollower\BP_DualSplineFollower_C.hpp"
#include "BP_WormholeEntrance_C.hpp"
#include "..\_Game_Interface_NavSystem_Blueprints_Actors_BP_NavDoorRevive\BP_NavDoorRevive_C.hpp"
#include "..\_Game_Interface_NavSystem_Blueprints_Actors_BP_NavHookIndicator\BP_NavHookIndicator_C.hpp"
#include "..\_Game_Interface_NavSystem_Blueprints_Actors_BP_NavOpenDoor\BP_NavOpenDoor_C.hpp"
#include "..\_Game_Interface_NavSystem_Blueprints_Actors_BP_NavReviveTooltip\BP_NavReviveTooltip_C.hpp"
#include "..\_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter\BP_NetworkCharacter_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "..\_Script_Engine\SplineComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "..\_Script_Engine\TimelineComponent.hpp"
#include "..\_Script_Playtime_Multiplayer\ANetworkCharacter.hpp"
#include "..\_Script_Playtime_Multiplayer\ANetworkHand.hpp"
#include "..\_Script_Playtime_Multiplayer\Hatch.hpp"
bool _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::Reviver_Is_Local() {
    return;
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::get_GreenBorder9() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x328);
}
_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C*& _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::get_CachedReviver() {
    return *(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C**)((uintptr_t)this + 0x438);
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::get_Darkness() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x3c8);
}
void* _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::get_SpawnTooltipTimer() {
    return (void*)((uintptr_t)this + 0x430);
}
void* _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x2f0);
}
_Script_Engine::TimelineComponent*& _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::get_Spline_Timeline_Out() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x400);
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::get_SM_DoorBase() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x320);
}
_Script_CoreUObject::Class* _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Gameplay/Interaction/Sewers/BP_WormholeEntrance.BP_WormholeEntrance_C");
    return result;
}
_Game_Gameplay_Interaction_BP_OutlineComponent::BP_OutlineComponent_C*& _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::get_BP_OutlineComponent() {
    return *(_Game_Gameplay_Interaction_BP_OutlineComponent::BP_OutlineComponent_C**)((uintptr_t)this + 0x2f8);
}
void _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::ViewProgress() {
    return;
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::get_HandObfuscator() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x308);
}
_Script_Engine::BoxComponent*& _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::get_DepositBox() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x300);
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::get_SM_DoorLid() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x310);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::get_DoorHinge() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x318);
}
void _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::HitHatchTimeline__FinishedFunc() {
    return;
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::get_DropPoint() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x3b0);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::get_Scene8() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x330);
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::get_GreenBorder8() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x338);
}
float& _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::get_Spline_Timeline_Out_NewTrack_0_429EA26545AD27EBC11BC69784DF3DCD() {
    return *(float*)((uintptr_t)this + 0x3f8);
}
bool _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::get_IgnoreBoogiebotSpawnDistance() {
    return (*(uint8_t*)((uintptr_t)this + 0x490 + 0)) & 1 != 0;
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::get_Scene7() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x340);
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::get_GreenBorder3() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x348);
}
void _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::Spline_Timeline_In__UpdateFunc() {
    return;
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::get_Hinge() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x3c0);
}
void* _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::get_ClosedRotation() {
    return (void*)((uintptr_t)this + 0x464);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::get_Scene2() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x350);
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::get_GreenBorder1() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x358);
}
void _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::Spline_Timeline_In__FinishedFunc() {
    return;
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::get_Scene() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x360);
}
float& _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::get_HitHatchTimeline_NewTrack_0_BFC43FFF436008CE8474B28D58C2DBB6() {
    return *(float*)((uintptr_t)this + 0x3d8);
}
void _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::OnDroppedInHole__DelegateSignature(_Game_Gameplay_Interaction_Sewers_BP_DualSplineFollower::BP_DualSplineFollower_C* DSF) {
    return;
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::get_GreenOutline() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x368);
}
void _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::BP_MakeBoogieBot0(_Script_Playtime_Multiplayer::ANetworkCharacter* Player) {
    return;
}
_Script_Engine::BoxComponent*& _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::get_Box1() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x370);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::get_NavScene() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x378);
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::get_Cube4() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x380);
}
void _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::GetHandFromReviver(_Script_Playtime_Multiplayer::ANetworkHand*& Hand) {
    return;
}
void _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::BP_SetHingeRotation0(float Progress) {
    return;
}
bool _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::get_CanHitHatch() {
    return (*(uint8_t*)((uintptr_t)this + 0x4a0 + 0)) & 1 != 0;
}
_Script_Engine::SplineComponent*& _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::get_CMOVE_Spline_Pull() {
    return *(_Script_Engine::SplineComponent**)((uintptr_t)this + 0x388);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::get_Hand() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x390);
}
float& _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::get_ReviveTime() {
    return *(float*)((uintptr_t)this + 0x440);
}
_Script_Engine::BoxComponent*& _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::get_ExtractionmagnetCollision() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x398);
}
_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::get_ExtractionMagnet() {
    return *(_Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C**)((uintptr_t)this + 0x3a0);
}
_Script_Engine::SplineComponent*& _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::get_CMOVE_Spline() {
    return *(_Script_Engine::SplineComponent**)((uintptr_t)this + 0x3a8);
}
void* _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::get_StrikeTimer() {
    return (void*)((uintptr_t)this + 0x498);
}
_Script_Engine::StaticMeshComponent*& _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::get_Door() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x3b8);
}
_Script_Engine::SceneComponent*& _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::get_Stationary() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x3d0);
}
void* _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::get_BoogiebotSpawnPoints() {
    return (void*)((uintptr_t)this + 0x480);
}
void* _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::get_HitHatchTimeline__Direction_BFC43FFF436008CE8474B28D58C2DBB6() {
    return (void*)((uintptr_t)this + 0x3dc);
}
_Script_Engine::TimelineComponent*& _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::get_HitHatchTimeline() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x3e0);
}
float& _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::get_Spline_Timeline_In_NewTrack_0_DB0323984144D38502CCC88809F02900() {
    return *(float*)((uintptr_t)this + 0x3e8);
}
void* _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::get_Spline_Timeline_In__Direction_DB0323984144D38502CCC88809F02900() {
    return (void*)((uintptr_t)this + 0x3ec);
}
_Script_Engine::TimelineComponent*& _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::get_Spline_Timeline_In() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x3f0);
}
_Game_Interface_NavSystem_Blueprints_Actors_BP_NavHookIndicator::BP_NavHookIndicator_C*& _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::get_NavIndicator() {
    return *(_Game_Interface_NavSystem_Blueprints_Actors_BP_NavHookIndicator::BP_NavHookIndicator_C**)((uintptr_t)this + 0x408);
}
void* _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::get_Spline_Timeline_Out__Direction_429EA26545AD27EBC11BC69784DF3DCD() {
    return (void*)((uintptr_t)this + 0x3fc);
}
_Game_Interface_NavSystem_Blueprints_Actors_BP_NavOpenDoor::BP_NavOpenDoor_C*& _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::get_OpenNavIndicator() {
    return *(_Game_Interface_NavSystem_Blueprints_Actors_BP_NavOpenDoor::BP_NavOpenDoor_C**)((uintptr_t)this + 0x410);
}
_Game_Interface_NavSystem_Blueprints_Actors_BP_NavDoorRevive::BP_NavDoorRevive_C*& _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::get_DoorReviveIndicator() {
    return *(_Game_Interface_NavSystem_Blueprints_Actors_BP_NavDoorRevive::BP_NavDoorRevive_C**)((uintptr_t)this + 0x418);
}
void _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::set_CanHitHatch(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4a0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4a0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::get_Progress() {
    return *(float*)((uintptr_t)this + 0x420);
}
_Game_Interface_NavSystem_Blueprints_Actors_BP_NavReviveTooltip::BP_NavReviveTooltip_C*& _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::get_ReviveTooltip() {
    return *(_Game_Interface_NavSystem_Blueprints_Actors_BP_NavReviveTooltip::BP_NavReviveTooltip_C**)((uintptr_t)this + 0x428);
}
void* _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::get_OnDroppedInHole() {
    return (void*)((uintptr_t)this + 0x448);
}
void* _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::get_OpenRotation() {
    return (void*)((uintptr_t)this + 0x458);
}
void* _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::get_OnPulledFromHole() {
    return (void*)((uintptr_t)this + 0x470);
}
void _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::set_IgnoreBoogiebotSpawnDistance(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x490 + 0);
    *(uint8_t*)((uintptr_t)this + 0x490 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::OnRep_Progress() {
    return;
}
void _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::UserConstructionScript() {
    return;
}
void _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::Spline_Timeline_Out__FinishedFunc() {
    return;
}
void _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::Spline_Timeline_Out__UpdateFunc() {
    return;
}
void _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::HitHatchTimeline__UpdateFunc() {
    return;
}
void _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::Multicast_Success_Reviver_Tooltip() {
    return;
}
void _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::Multicast_Start_Reviver_Tooltip() {
    return;
}
void _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::Net_DetachHands() {
    return;
}
void _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::BndEvt__BP_WormholeEntrance_ExtractionMagnet_K2Node_ComponentBoundEvent_0_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange) {
    return;
}
void _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::ReviveSuccess() {
    return;
}
void _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::ShowReviveIndicator(bool Shown_) {
    return;
}
void _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::MonsterShowNavIndicator(bool Shown_) {
    return;
}
void _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::BndEvt__BP_WormholeEntrance_DepositBox_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
void _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::BP_ShowOpenHatchIndicator0(bool Shown) {
    return;
}
void _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::BP_PlayerFuncImprisonedInWuggyHole0(_Script_Playtime_Multiplayer::ANetworkCharacter* Player) {
    return;
}
void _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::Multicast_PlayerImprisoned(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C* NewParam) {
    return;
}
void _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::Multicast_Cancel_Reviver_Tooltip() {
    return;
}
void _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::Multicast_Spawn_Reviver_Tooltip() {
    return;
}
void _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::ReceiveTick(float DeltaSeconds) {
    return;
}
void _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::StartSplineIn() {
    return;
}
void _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::StartSplineOut() {
    return;
}
void _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::Multicast_DetachHands() {
    return;
}
void _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::ReleasePlayer() {
    return;
}
void _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::AddStrike() {
    return;
}
void _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::HitHatch() {
    return;
}
void _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::PauseTimer() {
    return;
}
void _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::UnpauseTimer() {
    return;
}
void _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::ExecuteUbergraph_BP_WormholeEntrance(int32_t EntryPoint) {
    return;
}
void _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance::BP_WormholeEntrance_C::OnPulledFromHole__DelegateSignature(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C* Revived_Player) {
    return;
}
