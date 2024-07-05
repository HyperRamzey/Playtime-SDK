#include "..\FUObjectArray.hpp"
#include "..\_Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_Player\BP_MeshContainer_Player_C.hpp"
#include "..\_Game_Gameplay_Interaction_BP_OutlineComponent\BP_OutlineComponent_C.hpp"
#include "..\_Game_Gameplay_Puzzles_AC_PuzzleHighlight\AC_PuzzleHighlight_C.hpp"
#include "..\_Game_Interface_MonsterHUDs_UI_BoxyHUD\UI_BoxyHUD_C.hpp"
#include "..\_Game_Interface_MonsterHUDs_UI_MonsterHUD\UI_MonsterHUD_C.hpp"
#include "..\_Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem\BPC_NavSystem_C.hpp"
#include "BP_NetworkBoxy_C.hpp"
#include "..\_Game_Player_Monsters_BPC_PlayerDetectionSystem_BA\BPC_PlayerDetectionSystem_BA_C.hpp"
#include "..\_Game_Player_Monsters_Sabotages_BPC_SabotageComponent\BPC_SabotageComponent_C.hpp"
#include "..\_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter\BP_NetworkCharacter_C.hpp"
#include "..\_Script_AIModule\AIPerceptionComponent.hpp"
#include "..\_Script_AIModule\AIStimulus.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
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
#include "..\_Script_Playtime_Multiplayer\NetworkKangaroo.hpp"
void* _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x630);
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::OnInterrupted_091E5096499B8293C135368C210AC843(void* NotifyName) {
    return;
}
_Game_Gameplay_Interaction_BP_OutlineComponent::BP_OutlineComponent_C*& _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_BP_OutlineComponent() {
    return *(_Game_Gameplay_Interaction_BP_OutlineComponent::BP_OutlineComponent_C**)((uintptr_t)this + 0x640);
}
float& _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_BarrageCooldown() {
    return *(float*)((uintptr_t)this + 0x720);
}
_Script_Engine::PostProcessComponent*& _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_PostProcess() {
    return *(_Script_Engine::PostProcessComponent**)((uintptr_t)this + 0x638);
}
_Game_Player_Monsters_BPC_PlayerDetectionSystem_BA::BPC_PlayerDetectionSystem_BA_C*& _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_BPC_PlayerDetectionSystem_BA() {
    return *(_Game_Player_Monsters_BPC_PlayerDetectionSystem_BA::BPC_PlayerDetectionSystem_BA_C**)((uintptr_t)this + 0x648);
}
void* _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_MonsterVisionPostProcess() {
    return (void*)((uintptr_t)this + 0x940);
}
float& _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_OriginalWalkSpeed() {
    return *(float*)((uintptr_t)this + 0x6e8);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_TP_PlayerMesh() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x650);
}
_Script_Engine::ChildActorComponent*& _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_TP_PlayerMesh_Cosmetics() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x658);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_FP_PlayerMesh() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x660);
}
_Script_Engine::CameraComponent*& _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_FP_Camera() {
    return *(_Script_Engine::CameraComponent**)((uintptr_t)this + 0x668);
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::set_InShrinker(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x770 + 0);
    *(uint8_t*)((uintptr_t)this + 0x770 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::set_LaunchPushed_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x724 + 0);
    *(uint8_t*)((uintptr_t)this + 0x724 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_FP_CameraMesh() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x670);
}
bool _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_Leaping() {
    return (*(uint8_t*)((uintptr_t)this + 0x764 + 0)) & 1 != 0;
}
_Script_Engine::SpringArmComponent*& _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_FP_CameraSpringArm() {
    return *(_Script_Engine::SpringArmComponent**)((uintptr_t)this + 0x678);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_CosmeticMesh() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x688);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_CosmeticFirstPersonArms() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x680);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_FirstPersonArms() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x690);
}
bool _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_Boxy_Jingle1_IsActive() {
    return (*(uint8_t*)((uintptr_t)this + 0x794 + 0)) & 1 != 0;
}
_Game_Player_Monsters_Sabotages_BPC_SabotageComponent::BPC_SabotageComponent_C*& _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_BPC_SabotageComponent() {
    return *(_Game_Player_Monsters_Sabotages_BPC_SabotageComponent::BPC_SabotageComponent_C**)((uintptr_t)this + 0x6a0);
}
_Script_Engine::AudioComponent*& _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_boxy_jingle2() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x698);
}
_Script_AIModule::AIPerceptionComponent*& _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_AIPerception() {
    return *(_Script_AIModule::AIPerceptionComponent**)((uintptr_t)this + 0x6a8);
}
bool _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_Footsteps() {
    return (*(uint8_t*)((uintptr_t)this + 0x73d + 0)) & 1 != 0;
}
_Game_Gameplay_Puzzles_AC_PuzzleHighlight::AC_PuzzleHighlight_C*& _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_AC_PuzzleHighlight() {
    return *(_Game_Gameplay_Puzzles_AC_PuzzleHighlight::AC_PuzzleHighlight_C**)((uintptr_t)this + 0x6b0);
}
_Script_Engine::SpringArmComponent*& _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_FP_Springarm() {
    return *(_Script_Engine::SpringArmComponent**)((uintptr_t)this + 0x6b8);
}
_Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C*& _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_BPC_NavSystem() {
    return *(_Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C**)((uintptr_t)this + 0x6c0);
}
_Script_Engine::CameraComponent*& _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_TP_Camera() {
    return *(_Script_Engine::CameraComponent**)((uintptr_t)this + 0x6c8);
}
_Script_Engine::SpringArmComponent*& _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_TP_SpringArm() {
    return *(_Script_Engine::SpringArmComponent**)((uintptr_t)this + 0x6d0);
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::set_CooledDownGrab_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x71a + 0);
    *(uint8_t*)((uintptr_t)this + 0x71a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_PercentOffset() {
    return *(float*)((uintptr_t)this + 0x78c);
}
float& _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_Crouching_Lerp_Amount_5497B96E490FBA053B54CFA65F4A9DEF() {
    return *(float*)((uintptr_t)this + 0x6d8);
}
void* _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_Crouching__Direction_5497B96E490FBA053B54CFA65F4A9DEF() {
    return (void*)((uintptr_t)this + 0x6dc);
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::PlayJumpSound() {
    return;
}
void* _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_LeapStartPos() {
    return (void*)((uintptr_t)this + 0x758);
}
_Script_Engine::TimelineComponent*& _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_Crouching() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x6e0);
}
void* _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_UncrouchCameraLocation() {
    return (void*)((uintptr_t)this + 0x6ec);
}
float& _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_PlaybackPercent() {
    return *(float*)((uintptr_t)this + 0x788);
}
void* _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_CrouchCameraLocation() {
    return (void*)((uintptr_t)this + 0x6f8);
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::PlayLandedSound() {
    return;
}
float& _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_Sensitivity() {
    return *(float*)((uintptr_t)this + 0x704);
}
bool _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_ThirdPerson() {
    return (*(uint8_t*)((uintptr_t)this + 0x708 + 0)) & 1 != 0;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::set_ThirdPerson(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x708 + 0);
    *(uint8_t*)((uintptr_t)this + 0x708 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_BoxyJingles() {
    return (void*)((uintptr_t)this + 0x778);
}
bool _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_PunchCooledDown() {
    return (*(uint8_t*)((uintptr_t)this + 0x73c + 0)) & 1 != 0;
}
float& _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_DamageToDo() {
    return *(float*)((uintptr_t)this + 0x70c);
}
float& _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_ProxSoundDistance() {
    return *(float*)((uintptr_t)this + 0x750);
}
float& _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_HitReach() {
    return *(float*)((uintptr_t)this + 0x710);
}
void* _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_Survivors() {
    return (void*)((uintptr_t)this + 0x740);
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::Want_Crouch_During_Jumpscare__DelegateSignature() {
    return;
}
int32_t& _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_PunchDelayIndex() {
    return *(int32_t*)((uintptr_t)this + 0x714);
}
bool _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_HandToPunchWith() {
    return (*(uint8_t*)((uintptr_t)this + 0x718 + 0)) & 1 != 0;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::set_HandToPunchWith(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x718 + 0);
    *(uint8_t*)((uintptr_t)this + 0x718 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_BarragePushed_() {
    return (*(uint8_t*)((uintptr_t)this + 0x719 + 0)) & 1 != 0;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::set_Footsteps(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x73d + 0);
    *(uint8_t*)((uintptr_t)this + 0x73d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_LaunchPushed_() {
    return (*(uint8_t*)((uintptr_t)this + 0x724 + 0)) & 1 != 0;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::set_BarragePushed_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x719 + 0);
    *(uint8_t*)((uintptr_t)this + 0x719 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_CooledDownGrab_() {
    return (*(uint8_t*)((uintptr_t)this + 0x71a + 0)) & 1 != 0;
}
float& _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_GrabCooldown() {
    return *(float*)((uintptr_t)this + 0x71c);
}
float& _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_ProxSoundVolume() {
    return *(float*)((uintptr_t)this + 0x754);
}
_Script_Engine::AudioComponent*& _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_ChargeUpSound() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x728);
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::Multicast_Emote(int32_t Index) {
    return;
}
void* _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_OriginalCamLocation() {
    return (void*)((uintptr_t)this + 0x730);
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::set_PunchCooledDown(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x73c + 0);
    *(uint8_t*)((uintptr_t)this + 0x73c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::set_Leaping(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x764 + 0);
    *(uint8_t*)((uintptr_t)this + 0x764 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_SelectedSabotage() {
    return (void*)((uintptr_t)this + 0x768);
}
bool _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_InShrinker() {
    return (*(uint8_t*)((uintptr_t)this + 0x770 + 0)) & 1 != 0;
}
int32_t& _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_Playback_Index() {
    return *(int32_t*)((uintptr_t)this + 0x774);
}
int32_t& _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_NewBPMIndex() {
    return *(int32_t*)((uintptr_t)this + 0x790);
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::set_Boxy_Jingle1_IsActive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x794 + 0);
    *(uint8_t*)((uintptr_t)this + 0x794 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_Is_Jumpscare_Active() {
    return (*(uint8_t*)((uintptr_t)this + 0x795 + 0)) & 1 != 0;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::set_Is_Jumpscare_Active(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x795 + 0);
    *(uint8_t*)((uintptr_t)this + 0x795 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_Toggled_Third_Person_During_Jumpscare() {
    return (void*)((uintptr_t)this + 0x798);
}
void* _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_Camera_Rotation() {
    return (void*)((uintptr_t)this + 0x7a8);
}
void* _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_Preset_0() {
    return (void*)((uintptr_t)this + 0x7b8);
}
void* _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_New_Objective() {
    return (void*)((uintptr_t)this + 0x810);
}
void* _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_Sounds() {
    return (void*)((uintptr_t)this + 0x818);
}
float& _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_Distance_from_Monster_Jumpscare() {
    return *(float*)((uintptr_t)this + 0x890);
}
bool _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_Can_Move() {
    return (*(uint8_t*)((uintptr_t)this + 0x894 + 0)) & 1 != 0;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::Toggle_Music_Box(bool MusicBoxOn) {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::set_Can_Move(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x894 + 0);
    *(uint8_t*)((uintptr_t)this + 0x894 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::Multicast_PlayJumpSound() {
    return;
}
float& _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_CrouchStartTime() {
    return *(float*)((uintptr_t)this + 0x898);
}
void* _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_DummyEmptyPresetSlot() {
    return (void*)((uintptr_t)this + 0x8a0);
}
void* _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_Want_Crouch_During_Jumpscare() {
    return (void*)((uintptr_t)this + 0x8f8);
}
void* _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_Doesn_t_Want_Crouch_During_Jumpscare() {
    return (void*)((uintptr_t)this + 0x908);
}
float& _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_LandingSlowDuration() {
    return *(float*)((uintptr_t)this + 0x918);
}
float& _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_LandingSlowedSpeed() {
    return *(float*)((uintptr_t)this + 0x91c);
}
_Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_Player::BP_MeshContainer_Player_C*& _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_FP_Player_Mesh_Container() {
    return *(_Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_Player::BP_MeshContainer_Player_C**)((uintptr_t)this + 0x920);
}
_Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_Player::BP_MeshContainer_Player_C*& _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_TP_Player_Mesh_Container() {
    return *(_Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_Player::BP_MeshContainer_Player_C**)((uintptr_t)this + 0x928);
}
_Game_Interface_MonsterHUDs_UI_BoxyHUD::UI_BoxyHUD_C*& _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_BoxyHUD() {
    return *(_Game_Interface_MonsterHUDs_UI_BoxyHUD::UI_BoxyHUD_C**)((uintptr_t)this + 0x930);
}
void* _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::get_DefaultPostProcess() {
    return (void*)((uintptr_t)this + 0xea0);
}
_Script_CoreUObject::Class* _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Player/Boxy/BP_NetworkBoxy.BP_NetworkBoxy_C");
    return result;
}
bool _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::BP_CheckBoogieBot(_Script_Engine::Actor* Actor) {
    return;
}
bool _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::BP_CheckLocker(_Script_Engine::Actor* Actor) {
    return;
}
void* _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::GetMonsterHud() {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::OnRep_Sounds() {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::Toggle_Third_Person() {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::Set_First_Person_Visiblity(bool Hide) {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::Set_Third_Person_Visibility(bool Hide) {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::GetOwningPlayerController(_Script_Engine::PlayerController*& Controller) {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::GetClosestPlayer(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C*& Closest, float& Distance) {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::IsMonsterMoving(bool& Return_Value) {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::OnRep_PunchButtonIsDown_() {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::GetCurrentPunchDelay(float& Output) {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::Get_Punch_Delays(void*& Array) {
    return;
}
_Game_Interface_MonsterHUDs_UI_MonsterHUD::UI_MonsterHUD_C* _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::Get_Boxy_HUD() {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::Trace_Attack(float Base_Damage, bool& Hit_) {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::Look_Around(float Val, bool Pitch) {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::UserConstructionScript() {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::Crouching__FinishedFunc() {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::Crouching__UpdateFunc() {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::InpActEvt_Jump_K2Node_InputActionEvent_6(_Script_InputCore::Key Key) {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::InpActEvt_LeftControl_K2Node_InputKeyEvent_2(_Script_InputCore::Key Key) {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::InpActEvt_LeftControl_K2Node_InputKeyEvent_1(_Script_InputCore::Key Key) {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::ReceiveBeginPlay() {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::InpActEvt_T_K2Node_InputKeyEvent_0(_Script_InputCore::Key Key) {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::InpActEvt_Run_K2Node_InputActionEvent_5(_Script_InputCore::Key Key) {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::InpActEvt_Run_K2Node_InputActionEvent_4(_Script_InputCore::Key Key) {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::OnNotifyEnd_091E5096499B8293C135368C210AC843(void* NotifyName) {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::ResetFOVAndHUD() {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::OnNotifyBegin_091E5096499B8293C135368C210AC843(void* NotifyName) {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::OnBlendOut_091E5096499B8293C135368C210AC843(void* NotifyName) {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::OnCompleted_091E5096499B8293C135368C210AC843(void* NotifyName) {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::InpActEvt_Left_Hand_Extend_K2Node_InputActionEvent_3(_Script_InputCore::Key Key) {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::InpActEvt_Right_Hand_Extend_K2Node_InputActionEvent_2(_Script_InputCore::Key Key) {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::InpActEvt_Sabotage_K2Node_InputActionEvent_1(_Script_InputCore::Key Key) {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::InpActEvt_Emote_K2Node_InputActionEvent_0(_Script_InputCore::Key Key) {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::OnFailure_40A8081145C8B43DFC70F58F5005CB72() {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::OnSuccess_40A8081145C8B43DFC70F58F5005CB72() {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::CrouchCamera() {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::OnLanded(_Script_Engine::HitResult& Hit) {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::ForceUncrouch() {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::SetCapsuleHeight(float NewHeight, bool Reset) {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::MultiSetCapsuleHeight(float NewHeight, bool Reset) {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_3(float AxisValue) {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_2(float AxisValue) {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::End_Jumpscare() {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::InpAxisEvt_LookPitch_K2Node_InputAxisEvent_1(float AxisValue) {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::InpAxisEvt_LookYaw_K2Node_InputAxisEvent_0(float AxisValue) {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::Multicast_SlowMovement(bool IsSlowed, float SlowedSpeed) {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::Server_SlowMovement(bool IsSlowed, float SlowedSpeed) {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::Multicast_Begin_Charge() {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::Server_Begin_Charge() {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::Multicast_Release_Charge() {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::DoEmote(int32_t Index) {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::Server_ReleaseCharge() {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::BP_OnRep_Preset() {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::ReleaseCharge() {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::BeginCharge() {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::BP_OnAttack() {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::BP_OnAttackHit(_Script_Playtime_Multiplayer::ANetworkCharacter* Player) {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::HitMontage() {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::BP_ShowHoleNav(bool Shown) {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::BP_Jumpscare(_Script_Playtime_Multiplayer::ANetworkCharacter* Player) {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::BP_OnRep_CarryingPlayer() {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::ShowHoleNav(bool Shown_) {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::Server_Drop_Player() {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::BndEvt__BP_NetworkBoxy_FistPkg_K2Node_ComponentBoundEvent_0_FistStateChanged__DelegateSignature(void* State) {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::BP_SetSabotageIconFromName(void* Name) {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::BndEvt__BP_NetworkBoxy_PerceptionComponent_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature(_Script_Engine::Actor* Actor, _Script_AIModule::AIStimulus Stimulus) {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::Try_To_Crouch() {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::Try_To_Uncrouch() {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::BP_ShowIdleWarning() {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::BP_KickPlayer() {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::BP_IdleKickReset() {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::ReceiveEndPlay(void* EndPlayReason) {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::ReceivePossessed(_Script_Engine::Controller* NewController) {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::Jumpscare_Player(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C* Player, bool Enough_Space_for_Jumpscare) {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::BndEvt__BP_NetworkHuggy_AIPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature(_Script_Engine::Actor* Actor, _Script_AIModule::AIStimulus Stimulus) {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::CreateBoxyWidget() {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::ReceiveTick(float DeltaSeconds) {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::Client_HasFullyCharged() {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::BndEvt__BP_NetworkKangaroo_CharacterMovement_K2Node_ComponentBoundEvent_0_HasFullyCharged__DelegateSignature() {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::Multicast_LandedSound() {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::OnJumped() {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::PlayHitmarker_Hitsound() {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::Owner_OnPossess() {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::Server_Emote(int32_t Index) {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::Emote(int32_t Index) {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::Play_Jumpscare_Visuals(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C* Network_Character) {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::PlaySwingHitSound() {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::HUD_HitAnimation() {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::ExecuteUbergraph_BP_NetworkBoxy(int32_t EntryPoint) {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::Doesn_t_Want_Crouch_During_Jumpscare__DelegateSignature() {
    return;
}
void _Game_Player_Boxy_BP_NetworkBoxy::BP_NetworkBoxy_C::Toggled_Third_Person_During_Jumpscare__DelegateSignature() {
    return;
}
