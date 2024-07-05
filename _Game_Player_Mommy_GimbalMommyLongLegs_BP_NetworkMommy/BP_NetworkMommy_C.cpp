#include "..\FUObjectArray.hpp"
#include "..\_Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_Player\BP_MeshContainer_Player_C.hpp"
#include "..\_Game_Gameplay_Interaction_BP_OutlineComponent\BP_OutlineComponent_C.hpp"
#include "..\_Game_Gameplay_Puzzles_AC_PuzzleHighlight\AC_PuzzleHighlight_C.hpp"
#include "..\_Game_Interface_MonsterHUDs_UI_MommyHUD\UI_MommyHUD_C.hpp"
#include "..\_Game_Interface_MonsterHUDs_UI_MonsterHUD\UI_MonsterHUD_C.hpp"
#include "..\_Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem\BPC_NavSystem_C.hpp"
#include "BP_NetworkMommy_C.hpp"
#include "..\_Game_Player_Monsters_BPC_PlayerDetectionSystem_BA\BPC_PlayerDetectionSystem_BA_C.hpp"
#include "..\_Game_Player_Monsters_Sabotages_BPC_SabotageComponent\BPC_SabotageComponent_C.hpp"
#include "..\_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter\BP_NetworkCharacter_C.hpp"
#include "..\_Script_AIModule\AIPerceptionComponent.hpp"
#include "..\_Script_AIModule\AIStimulus.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AudioComponent.hpp"
#include "..\_Script_Engine\CameraComponent.hpp"
#include "..\_Script_Engine\ChildActorComponent.hpp"
#include "..\_Script_Engine\Controller.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\PlayerController.hpp"
#include "..\_Script_Engine\PostProcessComponent.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "..\_Script_Engine\SpringArmComponent.hpp"
#include "..\_Script_Engine\TimelineComponent.hpp"
#include "..\_Script_InputCore\Key.hpp"
#include "..\_Script_Playtime_Multiplayer\ANetworkCharacter.hpp"
#include "..\_Script_Playtime_Multiplayer\NetworkMommy.hpp"
bool _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_CanGrapple() {
    return (*(uint8_t*)((uintptr_t)this + 0x8a4 + 0)) & 1 != 0;
}
void* _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x690);
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::Owner_OnPossessed() {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::BP_SetSabotageIconFromName(void* Name) {
    return;
}
_Script_Engine::PostProcessComponent*& _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_PostProcess() {
    return *(_Script_Engine::PostProcessComponent**)((uintptr_t)this + 0x698);
}
bool _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_Footsteps() {
    return (*(uint8_t*)((uintptr_t)this + 0x7a1 + 0)) & 1 != 0;
}
_Script_Engine::SkeletalMeshComponent*& _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_FP_CameraMesh() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x6c8);
}
bool _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_Can_Move() {
    return (*(uint8_t*)((uintptr_t)this + 0x808 + 0)) & 1 != 0;
}
_Game_Gameplay_Interaction_BP_OutlineComponent::BP_OutlineComponent_C*& _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_BP_OutlineComponent() {
    return *(_Game_Gameplay_Interaction_BP_OutlineComponent::BP_OutlineComponent_C**)((uintptr_t)this + 0x6a0);
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::MommyGrappleGrabEvent() {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::CrosshairCooldownTimeline__FinishedFunc() {
    return;
}
_Script_Engine::ChildActorComponent*& _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_TP_PlayerMesh_Cosmetics() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x6a8);
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::InpActEvt_Jump_K2Node_InputActionEvent_4(_Script_InputCore::Key Key) {
    return;
}
_Script_Engine::CameraComponent*& _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_FP_Camera() {
    return *(_Script_Engine::CameraComponent**)((uintptr_t)this + 0x6c0);
}
float& _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_SpotterRechargeTime() {
    return *(float*)((uintptr_t)this + 0x78c);
}
void* _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_CrosshairCooldownTimeline__Direction_D55E164D4D6477CF32F277B119535ACE() {
    return (void*)((uintptr_t)this + 0x744);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_TP_PlayerMesh() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x6b0);
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::CrouchCamera() {
    return;
}
_Script_Engine::SkeletalMeshComponent*& _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_FP_PlayerMesh() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x6b8);
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::InpAxisEvt_LookPitch_K2Node_InputAxisEvent_1(float AxisValue) {
    return;
}
_Script_Engine::SpringArmComponent*& _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_FP_CameraSpringArm() {
    return *(_Script_Engine::SpringArmComponent**)((uintptr_t)this + 0x6d0);
}
_Game_Player_Monsters_BPC_PlayerDetectionSystem_BA::BPC_PlayerDetectionSystem_BA_C*& _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_BPC_PlayerDetectionSystem_BA() {
    return *(_Game_Player_Monsters_BPC_PlayerDetectionSystem_BA::BPC_PlayerDetectionSystem_BA_C**)((uintptr_t)this + 0x6d8);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_MommyFirstPersonArmsCosmetic() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x6e0);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_MommyFirstPersonArms() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x6e8);
}
void* _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_WebTimerHandle() {
    return (void*)((uintptr_t)this + 0x7b8);
}
_Game_Player_Monsters_Sabotages_BPC_SabotageComponent::BPC_SabotageComponent_C*& _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_BPC_SabotageComponent() {
    return *(_Game_Player_Monsters_Sabotages_BPC_SabotageComponent::BPC_SabotageComponent_C**)((uintptr_t)this + 0x6f0);
}
_Script_AIModule::AIPerceptionComponent*& _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_AIPerception() {
    return *(_Script_AIModule::AIPerceptionComponent**)((uintptr_t)this + 0x6f8);
}
_Game_Gameplay_Puzzles_AC_PuzzleHighlight::AC_PuzzleHighlight_C*& _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_AC_PuzzleHighlight() {
    return *(_Game_Gameplay_Puzzles_AC_PuzzleHighlight::AC_PuzzleHighlight_C**)((uintptr_t)this + 0x700);
}
_Script_Engine::SpringArmComponent*& _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_FirstPersonArmsSpring() {
    return *(_Script_Engine::SpringArmComponent**)((uintptr_t)this + 0x708);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_FirstPersonArmsOLD() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x710);
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust) {
    return;
}
_Script_Engine::CameraComponent*& _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_TP_Camera() {
    return *(_Script_Engine::CameraComponent**)((uintptr_t)this + 0x718);
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::InpActEvt_Emote_K2Node_InputActionEvent_3(_Script_InputCore::Key Key) {
    return;
}
_Script_Engine::SpringArmComponent*& _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_TP_SpringArm() {
    return *(_Script_Engine::SpringArmComponent**)((uintptr_t)this + 0x720);
}
_Script_CoreUObject::Class* _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Player/Mommy/GimbalMommyLongLegs/BP_NetworkMommy.BP_NetworkMommy_C");
    return result;
}
_Script_Engine::SkeletalMeshComponent*& _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_SK_Mommy_Spider() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x728);
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::TL_Spotter__FinishedFunc() {
    return;
}
_Script_Engine::SpringArmComponent*& _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_MommyMeshRotator() {
    return *(_Script_Engine::SpringArmComponent**)((uintptr_t)this + 0x730);
}
_Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_Player::BP_MeshContainer_Player_C*& _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_TP_Player_Mesh_Container() {
    return *(_Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_Player::BP_MeshContainer_Player_C**)((uintptr_t)this + 0x8c0);
}
_Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C*& _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_BPC_NavSystem() {
    return *(_Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C**)((uintptr_t)this + 0x738);
}
bool _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_Is_Jumpscare_Active() {
    return (*(uint8_t*)((uintptr_t)this + 0x7f4 + 0)) & 1 != 0;
}
float& _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_CrosshairCooldownTimeline_Progress_D55E164D4D6477CF32F277B119535ACE() {
    return *(float*)((uintptr_t)this + 0x740);
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::TryPunch() {
    return;
}
_Script_Engine::TimelineComponent*& _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_CrosshairCooldownTimeline() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x748);
}
void* _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_TL_Spotter_Outline_AE4A182948509AFCED602CB020489016() {
    return (void*)((uintptr_t)this + 0x750);
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::ReceiveBeginPlay() {
    return;
}
void* _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_Toggled_Third_Person_During_Jumpscare() {
    return (void*)((uintptr_t)this + 0x7f8);
}
float& _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_TL_Spotter_Black_AE4A182948509AFCED602CB020489016() {
    return *(float*)((uintptr_t)this + 0x760);
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust) {
    return;
}
_Game_Interface_MonsterHUDs_UI_MommyHUD::UI_MommyHUD_C*& _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_MommyHUD() {
    return *(_Game_Interface_MonsterHUDs_UI_MommyHUD::UI_MommyHUD_C**)((uintptr_t)this + 0x8b0);
}
float& _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_TL_Spotter_Desaturation_AE4A182948509AFCED602CB020489016() {
    return *(float*)((uintptr_t)this + 0x764);
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::set_Can_Spot(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x789 + 0);
    *(uint8_t*)((uintptr_t)this + 0x789 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_TL_Spotter_FishEye_AE4A182948509AFCED602CB020489016() {
    return *(float*)((uintptr_t)this + 0x768);
}
void* _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_TL_Spotter__Direction_AE4A182948509AFCED602CB020489016() {
    return (void*)((uintptr_t)this + 0x76c);
}
_Script_Engine::TimelineComponent*& _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_TL_Spotter() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x770);
}
float& _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_CrouchTimeline_Lerp_Amount_8E671A8C4FDED64DF1DBD28E87292B86() {
    return *(float*)((uintptr_t)this + 0x778);
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::ReceiveTick(float DeltaSeconds) {
    return;
}
float& _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_GrappleCooldownTime() {
    return *(float*)((uintptr_t)this + 0x8a8);
}
void* _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_CrouchTimeline__Direction_8E671A8C4FDED64DF1DBD28E87292B86() {
    return (void*)((uintptr_t)this + 0x77c);
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::Set_First_Person_Visiblity(bool Hide) {
    return;
}
_Script_Engine::TimelineComponent*& _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_CrouchTimeline() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x780);
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::OnCompleted_8A5CCE1D49E4193732358EA20C1D735C(void* NotifyName) {
    return;
}
bool _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_ThirdPerson() {
    return (*(uint8_t*)((uintptr_t)this + 0x788 + 0)) & 1 != 0;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::ReceivePossessed(_Script_Engine::Controller* NewController) {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::set_ThirdPerson(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x788 + 0);
    *(uint8_t*)((uintptr_t)this + 0x788 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::AttackShake(bool Left) {
    return;
}
bool _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_Can_Spot() {
    return (*(uint8_t*)((uintptr_t)this + 0x789 + 0)) & 1 != 0;
}
void* _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::GetMonsterHud() {
    return;
}
float& _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_SpotterDuration() {
    return *(float*)((uintptr_t)this + 0x790);
}
void* _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_MonsterVisionPostProcess() {
    return (void*)((uintptr_t)this + 0x8d0);
}
bool _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_SpotPressed_() {
    return (*(uint8_t*)((uintptr_t)this + 0x794 + 0)) & 1 != 0;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::LookAround(float Val, bool Pitch) {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::set_SpotPressed_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x794 + 0);
    *(uint8_t*)((uintptr_t)this + 0x794 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_AmountOfWebs() {
    return *(float*)((uintptr_t)this + 0x798);
}
float& _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_WebFullRechargeTime() {
    return *(float*)((uintptr_t)this + 0x79c);
}
bool _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_ShootingWebs() {
    return (*(uint8_t*)((uintptr_t)this + 0x7a0 + 0)) & 1 != 0;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::OnBlendOut_8A5CCE1D49E4193732358EA20C1D735C(void* NotifyName) {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::set_ShootingWebs(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7a0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x7a0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::InpActEvt_T_K2Node_InputKeyEvent_0(_Script_InputCore::Key Key) {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::set_Footsteps(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7a1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x7a1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::StartHeadBob() {
    return;
}
float& _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_OriginalFOV() {
    return *(float*)((uintptr_t)this + 0x7a4);
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::Play_Swing_Sound() {
    return;
}
void* _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_OriginalGimbalCameraLocation() {
    return (void*)((uintptr_t)this + 0x7a8);
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::ReceiveEndPlay(void* EndPlayReason) {
    return;
}
bool _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_CanWeb() {
    return (*(uint8_t*)((uintptr_t)this + 0x7b4 + 0)) & 1 != 0;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::BP_OnRep_CarryingPlayer() {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::set_CanWeb(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7b4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x7b4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::Toggle_Third_Person() {
    return;
}
void* _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_CrouchCameraLocation() {
    return (void*)((uintptr_t)this + 0x7c0);
}
void* _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_UncrouchCameraLocation() {
    return (void*)((uintptr_t)this + 0x7cc);
}
void* _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_OriginalCameraSpringArmLocation() {
    return (void*)((uintptr_t)this + 0x7d8);
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::InpAxisEvt_LookYaw_K2Node_InputAxisEvent_0(float AxisValue) {
    return;
}
bool _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_InShrinker() {
    return (*(uint8_t*)((uintptr_t)this + 0x7e4 + 0)) & 1 != 0;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::set_InShrinker(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7e4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x7e4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_CameraRotation() {
    return (void*)((uintptr_t)this + 0x7e8);
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::set_Is_Jumpscare_Active(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7f4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x7f4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::CrouchTimeline__FinishedFunc() {
    return;
}
bool _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_Attack_Should_Hit() {
    return (*(uint8_t*)((uintptr_t)this + 0x7f5 + 0)) & 1 != 0;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::set_Attack_Should_Hit(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7f5 + 0);
    *(uint8_t*)((uintptr_t)this + 0x7f5 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::set_Can_Move(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x808 + 0);
    *(uint8_t*)((uintptr_t)this + 0x808 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_Jumpscare_Duration() {
    return *(float*)((uintptr_t)this + 0x80c);
}
float& _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_Jumpscare_Blend_Out_TIme() {
    return *(float*)((uintptr_t)this + 0x810);
}
_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C*& _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_Last_Jumpscared_Player() {
    return *(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C**)((uintptr_t)this + 0x818);
}
void* _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_Sounds() {
    return (void*)((uintptr_t)this + 0x820);
}
float& _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_Distance_from_Monster_Jumpscare() {
    return *(float*)((uintptr_t)this + 0x890);
}
_Script_Engine::AudioComponent*& _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_GrapplingSound() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x898);
}
float& _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_Sensitivity() {
    return *(float*)((uintptr_t)this + 0x8a0);
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::set_CanGrapple(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8a4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8a4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_Player::BP_MeshContainer_Player_C*& _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_FP_Player_Mesh_Container() {
    return *(_Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_Player::BP_MeshContainer_Player_C**)((uintptr_t)this + 0x8b8);
}
void* _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::get_DefaultPostProcess() {
    return (void*)((uintptr_t)this + 0xe30);
}
bool _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::BP_CheckBoogieBot(_Script_Engine::Actor* Actor) {
    return;
}
bool _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::BP_CheckLocker(_Script_Engine::Actor* Actor) {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::GetOwningPlayerController(_Script_Engine::PlayerController*& Controller) {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::Set_Third_Person_Visibility(bool Hide) {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::Is_Monster_Moving(bool& Return_Value) {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::GetMommyHud(_Game_Interface_MonsterHUDs_UI_MonsterHUD::UI_MonsterHUD_C*& Mommy_HUD) {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::UserConstructionScript() {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::CrouchTimeline__UpdateFunc() {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::CrosshairCooldownTimeline__UpdateFunc() {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::TL_Spotter__UpdateFunc() {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::InpActEvt_Sabotage_K2Node_InputActionEvent_6(_Script_InputCore::Key Key) {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::InpActEvt_Right_Hand_Extend_K2Node_InputActionEvent_5(_Script_InputCore::Key Key) {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::InpActEvt_LeftControl_K2Node_InputKeyEvent_2(_Script_InputCore::Key Key) {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::InpActEvt_LeftControl_K2Node_InputKeyEvent_1(_Script_InputCore::Key Key) {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::InpActEvt_Interact_K2Node_InputActionEvent_2(_Script_InputCore::Key Key) {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::InpActEvt_Interact_K2Node_InputActionEvent_1(_Script_InputCore::Key Key) {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::ExecuteUbergraph_BP_NetworkMommy(int32_t EntryPoint) {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::InpActEvt_Left_Hand_Extend_K2Node_InputActionEvent_0(_Script_InputCore::Key Key) {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::OnFailure_EB75E8264CA1949B60B9E6B7EEA3EF1A() {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::OnSuccess_EB75E8264CA1949B60B9E6B7EEA3EF1A() {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::OnNotifyEnd_8A5CCE1D49E4193732358EA20C1D735C(void* NotifyName) {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::OnNotifyBegin_8A5CCE1D49E4193732358EA20C1D735C(void* NotifyName) {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::OnInterrupted_8A5CCE1D49E4193732358EA20C1D735C(void* NotifyName) {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_3(float AxisValue) {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::BP_OnRep_GrappleState0() {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_2(float AxisValue) {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::StopHeadBob() {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::DoWebsMulti(_Script_CoreUObject::Rotator LookRotation) {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::DoWebsClient(bool Shooting_, _Script_CoreUObject::Rotator LookRotation) {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::CallDoWebs() {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::DoWebsServer(bool Shooting_, _Script_CoreUObject::Rotator LookRotation) {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::TrySpot() {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::BP_OnRep_Preset() {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::BP_ShowIdleWarning() {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::BP_KickPlayer() {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::BP_IdleKickReset() {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::PlayShootSound() {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::PlayGrabSound() {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::Started_Jumpscare() {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::Jumpscare_Player(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C* Player, bool Enough_Space_for_Jumpscare) {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::BndEvt__BP_NetworkHuggy_AIPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature(_Script_Engine::Actor* Actor, _Script_AIModule::AIStimulus Stimulus) {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::ShowHoleNav(bool Shown_) {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::Server_Drop_Player() {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::CreateMommyWidget() {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::DoEmote(int32_t Index) {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::Multicast_Emote(int32_t Index) {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::Server_Emote(int32_t Index) {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::Emote(int32_t Index) {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::Multicast_MommyLandSound() {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::OnLanded(_Script_Engine::HitResult& Hit) {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::Multicast_MommyLaunchSound() {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::Event_Mommy_Launched() {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::MommyGrappleShotEvent() {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::End_Jumpscare() {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::Play_Jumpscare_Visuals(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C* Network_Character) {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::CrosshairCooldownAnim() {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::BP_OnAttack() {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::BP_OnAttackHit(_Script_Playtime_Multiplayer::ANetworkCharacter* Player) {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::BP_ShowHoleNav(bool Shown) {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::BP_Jumpscare(_Script_Playtime_Multiplayer::ANetworkCharacter* Player) {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::Client_DoSpot(bool Start_) {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::Server_TrySpot() {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::Play_Hitmarker___HitSound() {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::PlayHitMontage() {
    return;
}
void _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy::BP_NetworkMommy_C::Toggled_Third_Person_During_Jumpscare__DelegateSignature() {
    return;
}
