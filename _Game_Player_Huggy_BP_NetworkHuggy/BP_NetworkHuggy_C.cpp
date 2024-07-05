#include "..\FUObjectArray.hpp"
#include "..\_Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_Player\BP_MeshContainer_Player_C.hpp"
#include "..\_Game_Gameplay_Interaction_BP_OutlineComponent\BP_OutlineComponent_C.hpp"
#include "..\_Game_Gameplay_Puzzles_AC_PuzzleHighlight\AC_PuzzleHighlight_C.hpp"
#include "..\_Game_Interface_MonsterHUDs_UI_Huggy_HUD\UI_Huggy_HUD_C.hpp"
#include "..\_Game_Interface_MonsterHUDs_UI_MonsterHUD\UI_MonsterHUD_C.hpp"
#include "..\_Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem\BPC_NavSystem_C.hpp"
#include "..\_Game_Player_Huggy_BP_BabyHuggy\BP_BabyHuggy_C.hpp"
#include "BP_NetworkHuggy_C.hpp"
#include "..\_Game_Player_Huggy_HuggyVentManager\HuggyVentManager_C.hpp"
#include "..\_Game_Player_Monsters_BPC_PlayerDetectionSystem_BA\BPC_PlayerDetectionSystem_BA_C.hpp"
#include "..\_Game_Player_Monsters_Sabotages_BPC_SabotageComponent\BPC_SabotageComponent_C.hpp"
#include "..\_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter\BP_NetworkCharacter_C.hpp"
#include "..\_Script_AIModule\AIPerceptionComponent.hpp"
#include "..\_Script_AIModule\AIStimulus.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\ArrowComponent.hpp"
#include "..\_Script_Engine\AudioComponent.hpp"
#include "..\_Script_Engine\CameraComponent.hpp"
#include "..\_Script_Engine\ChildActorComponent.hpp"
#include "..\_Script_Engine\Controller.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\PlayerController.hpp"
#include "..\_Script_Engine\PostProcessComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "..\_Script_Engine\SphereComponent.hpp"
#include "..\_Script_Engine\SpringArmComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "..\_Script_Engine\TimelineComponent.hpp"
#include "..\_Script_InputCore\Key.hpp"
#include "..\_Script_Playtime_Multiplayer\ANetworkCharacter.hpp"
#include "..\_Script_Playtime_Multiplayer\NetworkHuggy.hpp"
void* _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_CrouchCameraLocation() {
    return (void*)((uintptr_t)this + 0x754);
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::set_CanInteractUI(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x798 + 0);
    *(uint8_t*)((uintptr_t)this + 0x798 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::StaticMeshComponent*& _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_BabyHuggyVisualizer() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x6a0);
}
void* _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x5f0);
}
_Script_Engine::ChildActorComponent*& _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_TP_PlayerMesh_Cosmetics() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x628);
}
_Script_Engine::AudioComponent*& _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_InnerMonsterRadius() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x6c0);
}
_Script_Engine::CameraComponent*& _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_FP_Camera() {
    return *(_Script_Engine::CameraComponent**)((uintptr_t)this + 0x600);
}
_Script_Engine::CameraComponent*& _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_Camera() {
    return *(_Script_Engine::CameraComponent**)((uintptr_t)this + 0x5f8);
}
float& _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_Sensitivity() {
    return *(float*)((uintptr_t)this + 0x720);
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::BabyHuggyDownTrace(_Script_CoreUObject::Vector InLocation, _Script_CoreUObject::Vector& DownLocation) {
    return;
}
_Script_Engine::PostProcessComponent*& _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_PostProcess() {
    return *(_Script_Engine::PostProcessComponent**)((uintptr_t)this + 0x618);
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::StartChargeBob() {
    return;
}
void* _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_Crosshair_Cooldown_Timeline__Direction_D65F12C348FA718E35AE5CAC1B171CD2() {
    return (void*)((uintptr_t)this + 0x6e4);
}
bool _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_CurrentlyChargeHugging() {
    return (*(uint8_t*)((uintptr_t)this + 0x724 + 0)) & 1 != 0;
}
bool _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_LeftClicked() {
    return (*(uint8_t*)((uintptr_t)this + 0x714 + 0)) & 1 != 0;
}
_Script_Engine::SkeletalMeshComponent*& _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_FP_Camera_Animation() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x608);
}
_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C*& _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_PlayerToHug() {
    return *(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C**)((uintptr_t)this + 0x718);
}
_Script_Engine::SpringArmComponent*& _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_FP_Springarm() {
    return *(_Script_Engine::SpringArmComponent**)((uintptr_t)this + 0x610);
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::set_Attack_is_Left_Hand(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7cb + 0);
    *(uint8_t*)((uintptr_t)this + 0x7cb + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_InPlacementMode() {
    return (*(uint8_t*)((uintptr_t)this + 0x760 + 0)) & 1 != 0;
}
_Script_Engine::SpringArmComponent*& _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_FP_CameraSpringArm() {
    return *(_Script_Engine::SpringArmComponent**)((uintptr_t)this + 0x648);
}
_Game_Gameplay_Interaction_BP_OutlineComponent::BP_OutlineComponent_C*& _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_BP_OutlineComponent() {
    return *(_Game_Gameplay_Interaction_BP_OutlineComponent::BP_OutlineComponent_C**)((uintptr_t)this + 0x620);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_TP_PlayerMesh() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x630);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_FP_PlayerMesh() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x638);
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::OnPlacedBabyHuggy__DelegateSignature() {
    return;
}
float& _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_Distance_from_Monster_Jumpscare() {
    return *(float*)((uintptr_t)this + 0x888);
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::set_CanChargeHug(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x715 + 0);
    *(uint8_t*)((uintptr_t)this + 0x715 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_FP_CameraMesh() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x640);
}
_Script_Engine::TimelineComponent*& _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_Crosshair_Cooldown_Timeline() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x6e8);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_FP_Huggy_Cosmetic() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x650);
}
bool _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::BP_CheckBoogieBot(_Script_Engine::Actor* Actor) {
    return;
}
_Script_Engine::TimelineComponent*& _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_CrouchCam() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x6f8);
}
_Game_Player_Monsters_BPC_PlayerDetectionSystem_BA::BPC_PlayerDetectionSystem_BA_C*& _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_BPC_PlayerDetectionSystem_BA() {
    return *(_Game_Player_Monsters_BPC_PlayerDetectionSystem_BA::BPC_PlayerDetectionSystem_BA_C**)((uintptr_t)this + 0x658);
}
void* _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_BabyHuggyLocation() {
    return (void*)((uintptr_t)this + 0x770);
}
_Script_Engine::SpringArmComponent*& _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_SpringArm() {
    return *(_Script_Engine::SpringArmComponent**)((uintptr_t)this + 0x660);
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::InpAxisEvt_LookPitch_K2Node_InputAxisEvent_2(float AxisValue) {
    return;
}
void* _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_BabyHuggyRotation() {
    return (void*)((uintptr_t)this + 0x764);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_FP_Huggy() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x668);
}
bool _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_InShrinker() {
    return (*(uint8_t*)((uintptr_t)this + 0x7c8 + 0)) & 1 != 0;
}
_Script_Engine::SkeletalMeshComponent*& _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_TP_HuggyCosmetic() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x670);
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::OnRep_CurrentVent2() {
    return;
}
_Script_Engine::ArrowComponent*& _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_Arrow1() {
    return *(_Script_Engine::ArrowComponent**)((uintptr_t)this + 0x678);
}
_Game_Player_Monsters_Sabotages_BPC_SabotageComponent::BPC_SabotageComponent_C*& _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_BPC_SabotageComponent() {
    return *(_Game_Player_Monsters_Sabotages_BPC_SabotageComponent::BPC_SabotageComponent_C**)((uintptr_t)this + 0x680);
}
_Game_Gameplay_Puzzles_AC_PuzzleHighlight::AC_PuzzleHighlight_C*& _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_AC_PuzzleHighlight() {
    return *(_Game_Gameplay_Puzzles_AC_PuzzleHighlight::AC_PuzzleHighlight_C**)((uintptr_t)this + 0x688);
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::set_IsVentBeingScanned_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8bc + 0);
    *(uint8_t*)((uintptr_t)this + 0x8bc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::set_LeftClicked(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x714 + 0);
    *(uint8_t*)((uintptr_t)this + 0x714 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_AIModule::AIPerceptionComponent*& _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_AIPerception() {
    return *(_Script_AIModule::AIPerceptionComponent**)((uintptr_t)this + 0x690);
}
float& _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_AdditiveFOV() {
    return *(float*)((uintptr_t)this + 0x744);
}
_Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C*& _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_BPC_NavSystem() {
    return *(_Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C**)((uintptr_t)this + 0x698);
}
bool _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_CanChargeHug() {
    return (*(uint8_t*)((uintptr_t)this + 0x715 + 0)) & 1 != 0;
}
_Script_Engine::SceneComponent*& _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_BabyHuggyParent() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x6a8);
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::Server_ScanAlertOff(int32_t vent) {
    return;
}
void* _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_Interface_Monster_Name() {
    return (void*)((uintptr_t)this + 0x730);
}
_Script_Engine::CameraComponent*& _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_TP_Camera() {
    return *(_Script_Engine::CameraComponent**)((uintptr_t)this + 0x6b0);
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::set_InPlacementMode(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x760 + 0);
    *(uint8_t*)((uintptr_t)this + 0x760 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::Server_Disable_Movement_and_Head_Bob() {
    return;
}
_Script_Engine::SpringArmComponent*& _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_TP_SpringArm() {
    return *(_Script_Engine::SpringArmComponent**)((uintptr_t)this + 0x6b8);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_FirstPerson_Huggy() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x6c8);
}
_Script_Engine::SceneComponent*& _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_HugPoint() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x6d0);
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::MultiSetCapsuleHeight(float NewHeight, bool Reset) {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::GetOwningPlayerController(_Script_Engine::PlayerController*& Controller) {
    return;
}
_Script_Engine::SphereComponent*& _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_InteractZone() {
    return *(_Script_Engine::SphereComponent**)((uintptr_t)this + 0x6d8);
}
float& _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_Crosshair_Cooldown_Timeline_Progress_D65F12C348FA718E35AE5CAC1B171CD2() {
    return *(float*)((uintptr_t)this + 0x6e0);
}
float& _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_CrouchCam_Lerp_Amount_E83E38C741AC72E45A04149B1BFE4B79() {
    return *(float*)((uintptr_t)this + 0x6f0);
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::OnLanded(_Script_Engine::HitResult& Hit) {
    return;
}
_Script_Engine::Actor*& _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_ActiveBabyHuggy() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x780);
}
void* _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_CrouchCam__Direction_E83E38C741AC72E45A04149B1BFE4B79() {
    return (void*)((uintptr_t)this + 0x6f4);
}
float& _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_ChargeHugFOVMod_FOVMod_8C3635DE46C18D6B48D0FD8A4F731568() {
    return *(float*)((uintptr_t)this + 0x700);
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::PlayThirdPersonHitAnimation() {
    return;
}
void* _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_ChargeHugFOVMod__Direction_8C3635DE46C18D6B48D0FD8A4F731568() {
    return (void*)((uintptr_t)this + 0x704);
}
_Script_Engine::TimelineComponent*& _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_ChargeHugFOVMod() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x708);
}
float& _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_OriginalWalkSpeed() {
    return *(float*)((uintptr_t)this + 0x710);
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::LeftAttackShake() {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::set_CurrentlyChargeHugging(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x724 + 0);
    *(uint8_t*)((uintptr_t)this + 0x724 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_OriginalFOV() {
    return *(float*)((uintptr_t)this + 0x728);
}
bool _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_ThirdPerson() {
    return (*(uint8_t*)((uintptr_t)this + 0x740 + 0)) & 1 != 0;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::set_ThirdPerson(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x740 + 0);
    *(uint8_t*)((uintptr_t)this + 0x740 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::InpActEvt_T_K2Node_InputKeyEvent_9(_Script_InputCore::Key Key) {
    return;
}
void* _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_UncrouchCameraLocation() {
    return (void*)((uintptr_t)this + 0x748);
}
bool _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_Attack_is_Left_Hand() {
    return (*(uint8_t*)((uintptr_t)this + 0x7cb + 0)) & 1 != 0;
}
bool _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_CanPlaceBaby() {
    return (*(uint8_t*)((uintptr_t)this + 0x77c + 0)) & 1 != 0;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::set_CanPlaceBaby(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x77c + 0);
    *(uint8_t*)((uintptr_t)this + 0x77c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_BabyHuggyCooldown() {
    return *(float*)((uintptr_t)this + 0x788);
}
void* _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_BabyHuggyClass() {
    return (void*)((uintptr_t)this + 0x790);
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::set_Can_Look_Around(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7ca + 0);
    *(uint8_t*)((uintptr_t)this + 0x7ca + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_CanInteractUI() {
    return (*(uint8_t*)((uintptr_t)this + 0x798 + 0)) & 1 != 0;
}
void* _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_OnSabotage() {
    return (void*)((uintptr_t)this + 0x818);
}
void* _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_OriginalCamLocation() {
    return (void*)((uintptr_t)this + 0x79c);
}
float& _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_MaxPlaceDistance() {
    return *(float*)((uintptr_t)this + 0x7a8);
}
bool _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_Footsteps() {
    return (*(uint8_t*)((uintptr_t)this + 0x7ac + 0)) & 1 != 0;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::set_Footsteps(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7ac + 0);
    *(uint8_t*)((uintptr_t)this + 0x7ac + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_ScanningVent() {
    return *(int32_t*)((uintptr_t)this + 0x8b8);
}
bool _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_LeftHandPressed_() {
    return (*(uint8_t*)((uintptr_t)this + 0x7ad + 0)) & 1 != 0;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::set_LeftHandPressed_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7ad + 0);
    *(uint8_t*)((uintptr_t)this + 0x7ad + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_RightHandPressed_() {
    return (*(uint8_t*)((uintptr_t)this + 0x7ae + 0)) & 1 != 0;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::BP_OnAttackHit(_Script_Playtime_Multiplayer::ANetworkCharacter* Player) {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::set_RightHandPressed_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7ae + 0);
    *(uint8_t*)((uintptr_t)this + 0x7ae + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_ChargeHugPressed_() {
    return (*(uint8_t*)((uintptr_t)this + 0x7af + 0)) & 1 != 0;
}
void* _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_Sounds() {
    return (void*)((uintptr_t)this + 0x828);
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::set_ChargeHugPressed_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7af + 0);
    *(uint8_t*)((uintptr_t)this + 0x7af + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::StopChargeBob() {
    return;
}
bool _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_PlaceBabyHuggyPressed_() {
    return (*(uint8_t*)((uintptr_t)this + 0x7b0 + 0)) & 1 != 0;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::Footstep() {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::set_PlaceBabyHuggyPressed_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7b0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x7b0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_PreventAttack_() {
    return (*(uint8_t*)((uintptr_t)this + 0x7b1 + 0)) & 1 != 0;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::Play_Swing_Sound() {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::set_PreventAttack_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7b1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x7b1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::BP_CheckLocker(_Script_Engine::Actor* Actor) {
    return;
}
bool _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_PreventFirstAbility_() {
    return (*(uint8_t*)((uintptr_t)this + 0x7b2 + 0)) & 1 != 0;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::set_PreventFirstAbility_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7b2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x7b2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::Server_CycleVent(int32_t VentIndex) {
    return;
}
bool _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_PreventSecondAbility_() {
    return (*(uint8_t*)((uintptr_t)this + 0x7b3 + 0)) & 1 != 0;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::set_PreventSecondAbility_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7b3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x7b3 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::StopHeadBob() {
    return;
}
void* _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_ChargeStartLocation() {
    return (void*)((uintptr_t)this + 0x7b4);
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::CrouchCamera() {
    return;
}
void* _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_SelectedSabotage() {
    return (void*)((uintptr_t)this + 0x7c0);
}
_Game_Interface_MonsterHUDs_UI_MonsterHUD::UI_MonsterHUD_C* _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::GetHuggyHUD() {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::set_InShrinker(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7c8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x7c8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_Is_Jumpscare_Active_() {
    return (*(uint8_t*)((uintptr_t)this + 0x7c9 + 0)) & 1 != 0;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::InpActEvt_SpaceBar_K2Node_InputKeyEvent_6(_Script_InputCore::Key Key) {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::set_Is_Jumpscare_Active_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7c9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x7c9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_Can_Look_Around() {
    return (*(uint8_t*)((uintptr_t)this + 0x7ca + 0)) & 1 != 0;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::DoEmote(int32_t Index) {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust) {
    return;
}
bool _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_Trace_Play_Attack_Animation_() {
    return (*(uint8_t*)((uintptr_t)this + 0x7cc + 0)) & 1 != 0;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::CreateHuggyWidget() {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::set_Trace_Play_Attack_Animation_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7cc + 0);
    *(uint8_t*)((uintptr_t)this + 0x7cc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_Toggled_Third_Person_During_Jumpscare() {
    return (void*)((uintptr_t)this + 0x7d0);
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::InpActEvt_Left_Hand_Extend_K2Node_InputActionEvent_1(_Script_InputCore::Key Key) {
    return;
}
void* _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_OnBasicAttack() {
    return (void*)((uintptr_t)this + 0x7e0);
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::BP_OnAttack() {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1(_Script_InputCore::Key Key) {
    return;
}
void* _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_OnPlacedBabyHuggy() {
    return (void*)((uintptr_t)this + 0x7f0);
}
void* _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_OnJump() {
    return (void*)((uintptr_t)this + 0x800);
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::BP_Jumpscare(_Script_Playtime_Multiplayer::ANetworkCharacter* Player) {
    return;
}
bool _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_PreventSabotage_() {
    return (*(uint8_t*)((uintptr_t)this + 0x810 + 0)) & 1 != 0;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::set_PreventSabotage_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x810 + 0);
    *(uint8_t*)((uintptr_t)this + 0x810 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::Play_Bash() {
    return;
}
void* _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_Camera_Rotation() {
    return (void*)((uintptr_t)this + 0x88c);
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::OnSuccess_B328018042ED1207802DEF8170174159() {
    return;
}
bool _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_InVent_() {
    return (*(uint8_t*)((uintptr_t)this + 0x898 + 0)) & 1 != 0;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::set_InVent_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x898 + 0);
    *(uint8_t*)((uintptr_t)this + 0x898 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_VentsArray() {
    return (void*)((uintptr_t)this + 0x8a0);
}
int32_t& _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_CurrentVent() {
    return *(int32_t*)((uintptr_t)this + 0x8b0);
}
int32_t& _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_EntryVent() {
    return *(int32_t*)((uintptr_t)this + 0x8b4);
}
bool _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_IsVentBeingScanned_() {
    return (*(uint8_t*)((uintptr_t)this + 0x8bc + 0)) & 1 != 0;
}
_Game_Player_Huggy_HuggyVentManager::HuggyVentManager_C*& _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_VentManager() {
    return *(_Game_Player_Huggy_HuggyVentManager::HuggyVentManager_C**)((uintptr_t)this + 0x8c0);
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::TryStartBabyHuggy() {
    return;
}
_Game_Interface_MonsterHUDs_UI_Huggy_HUD::UI_Huggy_HUD_C*& _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_HuggyHUD() {
    return *(_Game_Interface_MonsterHUDs_UI_Huggy_HUD::UI_Huggy_HUD_C**)((uintptr_t)this + 0x8c8);
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::BP_OnRep_CarryingPlayer() {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_0(float AxisValue) {
    return;
}
_Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_Player::BP_MeshContainer_Player_C*& _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_TP_Player_Mesh_Container() {
    return *(_Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_Player::BP_MeshContainer_Player_C**)((uintptr_t)this + 0x8d0);
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::InpActEvt_W_K2Node_InputKeyEvent_4(_Script_InputCore::Key Key) {
    return;
}
_Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_Player::BP_MeshContainer_Player_C*& _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_FP_Player_Mesh_Container() {
    return *(_Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_Player::BP_MeshContainer_Player_C**)((uintptr_t)this + 0x8d8);
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::ChargingSound() {
    return;
}
void* _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_DefaultPostProcess() {
    return (void*)((uintptr_t)this + 0x8e0);
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::InpActEvt_Sabotage_K2Node_InputActionEvent_0(_Script_InputCore::Key Key) {
    return;
}
void* _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::get_MonsterVisionPostProcess() {
    return (void*)((uintptr_t)this + 0xe40);
}
_Script_CoreUObject::Class* _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Player/Huggy/BP_NetworkHuggy.BP_NetworkHuggy_C");
    return result;
}
void* _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::GetMonsterHud() {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::CanHuggyCharge(bool& CanCharge) {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::OnRep_InVent_() {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::SetCapsuleHeight(float NewHeight, bool Reset) {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::OnRep_CurrentVent() {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::Toggle_ThirdPerson() {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::Server_Drop_Player() {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::Set_First_Person_Visiblity(bool Hide) {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::Set_Third_Person_Visibility(bool Hide) {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::OnRep_CanPlaceBaby() {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::PlayFirstPersonHitMontage(bool LeftHand) {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::LookAround(float Val, bool Pitch) {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::UserConstructionScript() {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::CrouchCam__FinishedFunc() {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::CrouchCam__UpdateFunc() {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::ChargeHugFOVMod__FinishedFunc() {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::ChargeHugFOVMod__UpdateFunc() {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::Crosshair_Cooldown_Timeline__FinishedFunc() {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::Crosshair_Cooldown_Timeline__UpdateFunc() {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::InpActEvt_Emote_K2Node_InputActionEvent_8(_Script_InputCore::Key Key) {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::InpActEvt_Jump_K2Node_InputActionEvent_7(_Script_InputCore::Key Key) {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::InpActEvt_LeftControl_K2Node_InputKeyEvent_8(_Script_InputCore::Key Key) {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::InpActEvt_LeftControl_K2Node_InputKeyEvent_7(_Script_InputCore::Key Key) {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::InpActEvt_S_K2Node_InputKeyEvent_5(_Script_InputCore::Key Key) {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::InpActEvt_D_K2Node_InputKeyEvent_3(_Script_InputCore::Key Key) {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::Server_ScanAlert(int32_t vent) {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::InpActEvt_A_K2Node_InputKeyEvent_2(_Script_InputCore::Key Key) {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::InpActEvt_RightMouseButton_K2Node_InputKeyEvent_0(_Script_InputCore::Key Key) {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::InpActEvt_Interact_K2Node_InputActionEvent_6(_Script_InputCore::Key Key) {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::InpActEvt_Interact_K2Node_InputActionEvent_5(_Script_InputCore::Key Key) {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::InpActEvt_Run_K2Node_InputActionEvent_4(_Script_InputCore::Key Key) {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::InpActEvt_Run_K2Node_InputActionEvent_3(_Script_InputCore::Key Key) {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::InpActEvt_Right_Hand_Extend_K2Node_InputActionEvent_2(_Script_InputCore::Key Key) {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::OnFailure_B328018042ED1207802DEF8170174159() {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::MulticastPlayJumpSound() {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::ForceUncrouch() {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust) {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::InpAxisEvt_LookYaw_K2Node_InputAxisEvent_3(float AxisValue) {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_1(float AxisValue) {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::StartHeadBob() {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::Server_ExitVent() {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::Server_TryToVent() {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::TryToCharge() {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::TryToPunch() {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::ServerOnly_ToggleHugHitScan(bool Condition) {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::ChargeHitSound() {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::Server_Enable_Movement() {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::RightAttackShake() {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::BndEvt__BP_NetworkHuggy_CharacterMovement_K2Node_ComponentBoundEvent_2_HasEndedCharging__DelegateSignature() {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::BndEvt__BP_NetworkHuggy_CharacterMovement_K2Node_ComponentBoundEvent_1_HasStartedCharging__DelegateSignature() {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::ReverseChargeHugFOVMod() {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::PlayChargeHugFOVMod() {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::Set_Baby_Huggy_Skeletal(_Game_Player_Huggy_BP_BabyHuggy::BP_BabyHuggy_C* Baby_Huggy) {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::PlaceHuggyServer(_Script_CoreUObject::Vector HuggyLocation, _Script_CoreUObject::Rotator HuggyRotation) {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::BP_OnRep_Preset() {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::BP_ShowIdleWarning() {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::BP_KickPlayer() {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::BP_IdleKickReset() {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::ReceiveEndPlay(void* EndPlayReason) {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::ReceivePossessed(_Script_Engine::Controller* NewController) {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::ShowHoleNav(bool Shown_) {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::BndEvt__BP_NetworkHuggy_AIPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature(_Script_Engine::Actor* Actor, _Script_AIModule::AIStimulus Stimulus) {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::ReceiveTick(float DeltaSeconds) {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::ReceiveBeginPlay() {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::MultiHugPlayer(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C* PlayerToHug, bool Charging) {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::NetHugPlayer(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C* PlayerToHug, float Duration) {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::End_Jumpscare() {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::Play_Jumpscare_Visuals(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C* Network_Character) {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::Client_OnPossessed() {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::Multicast_Emote(int32_t Index) {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::Server_Emote(int32_t Index) {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::Emote(int32_t Index) {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::BP_SetSabotageIconFromName(void* Name) {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::CrosshairCooldownAnim() {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::Toggled_Third_Person_During_Jumpscare__DelegateSignature() {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::BP_ShowHoleNav(bool Shown) {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::Play_Hitmarker_HitSound() {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::PlayHitMontage(bool LeftHand) {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::ExecuteUbergraph_BP_NetworkHuggy(int32_t EntryPoint) {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::OnSabotage__DelegateSignature() {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::OnJump__DelegateSignature() {
    return;
}
void _Game_Player_Huggy_BP_NetworkHuggy::BP_NetworkHuggy_C::OnBasicAttack__DelegateSignature() {
    return;
}
