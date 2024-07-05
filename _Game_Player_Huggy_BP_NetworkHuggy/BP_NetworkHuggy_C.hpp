#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AIModule\AIStimulus.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_InputCore\Key.hpp"
#include "..\_Script_Playtime_Multiplayer\NetworkHuggy.hpp"
namespace _Script_Engine {
struct CameraComponent;
}
namespace _Script_Engine {
struct ArrowComponent;
}
namespace _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem {
struct BPC_NavSystem_C;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
struct SphereComponent;
}
namespace _Game_Player_Huggy_BP_BabyHuggy {
struct BP_BabyHuggy_C;
}
namespace _Script_Engine {
struct SpringArmComponent;
}
namespace _Script_Engine {
struct PostProcessComponent;
}
namespace _Game_Player_Monsters_BPC_PlayerDetectionSystem_BA {
struct BPC_PlayerDetectionSystem_BA_C;
}
namespace _Game_Gameplay_Interaction_BP_OutlineComponent {
struct BP_OutlineComponent_C;
}
namespace _Script_Engine {
struct ChildActorComponent;
}
namespace _Game_Player_Monsters_Sabotages_BPC_SabotageComponent {
struct BPC_SabotageComponent_C;
}
namespace _Game_Gameplay_Puzzles_AC_PuzzleHighlight {
struct AC_PuzzleHighlight_C;
}
namespace _Script_AIModule {
struct AIPerceptionComponent;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct AudioComponent;
}
namespace _Script_Engine {
struct TimelineComponent;
}
namespace _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter {
struct BP_NetworkCharacter_C;
}
namespace _Game_Player_Huggy_HuggyVentManager {
struct HuggyVentManager_C;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Game_Interface_MonsterHUDs_UI_Huggy_HUD {
struct UI_Huggy_HUD_C;
}
namespace _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_Player {
struct BP_MeshContainer_Player_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct PlayerController;
}
namespace _Game_Interface_MonsterHUDs_UI_MonsterHUD {
struct UI_MonsterHUD_C;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Script_Engine {
struct Controller;
}
namespace _Script_Playtime_Multiplayer {
struct ANetworkCharacter;
}
namespace _Game_Player_Huggy_BP_NetworkHuggy {
#pragma pack(push, 1)
struct BP_NetworkHuggy_C : public _Script_Playtime_Multiplayer::NetworkHuggy {
    private: char pad_5f0[0xdb0]; public:
    void* get_UberGraphFrame();
    _Script_Engine::CameraComponent*& get_Camera();
    _Script_Engine::CameraComponent*& get_FP_Camera();
    _Script_Engine::SkeletalMeshComponent*& get_FP_Camera_Animation();
    _Script_Engine::SpringArmComponent*& get_FP_Springarm();
    _Script_Engine::PostProcessComponent*& get_PostProcess();
    _Game_Gameplay_Interaction_BP_OutlineComponent::BP_OutlineComponent_C*& get_BP_OutlineComponent();
    _Script_Engine::ChildActorComponent*& get_TP_PlayerMesh_Cosmetics();
    _Script_Engine::SkeletalMeshComponent*& get_TP_PlayerMesh();
    _Script_Engine::SkeletalMeshComponent*& get_FP_PlayerMesh();
    _Script_Engine::SkeletalMeshComponent*& get_FP_CameraMesh();
    _Script_Engine::SpringArmComponent*& get_FP_CameraSpringArm();
    _Script_Engine::SkeletalMeshComponent*& get_FP_Huggy_Cosmetic();
    _Game_Player_Monsters_BPC_PlayerDetectionSystem_BA::BPC_PlayerDetectionSystem_BA_C*& get_BPC_PlayerDetectionSystem_BA();
    _Script_Engine::SpringArmComponent*& get_SpringArm();
    _Script_Engine::SkeletalMeshComponent*& get_FP_Huggy();
    _Script_Engine::SkeletalMeshComponent*& get_TP_HuggyCosmetic();
    _Script_Engine::ArrowComponent*& get_Arrow1();
    _Game_Player_Monsters_Sabotages_BPC_SabotageComponent::BPC_SabotageComponent_C*& get_BPC_SabotageComponent();
    _Game_Gameplay_Puzzles_AC_PuzzleHighlight::AC_PuzzleHighlight_C*& get_AC_PuzzleHighlight();
    _Script_AIModule::AIPerceptionComponent*& get_AIPerception();
    _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C*& get_BPC_NavSystem();
    _Script_Engine::StaticMeshComponent*& get_BabyHuggyVisualizer();
    _Script_Engine::SceneComponent*& get_BabyHuggyParent();
    _Script_Engine::CameraComponent*& get_TP_Camera();
    _Script_Engine::SpringArmComponent*& get_TP_SpringArm();
    _Script_Engine::AudioComponent*& get_InnerMonsterRadius();
    _Script_Engine::SkeletalMeshComponent*& get_FirstPerson_Huggy();
    _Script_Engine::SceneComponent*& get_HugPoint();
    _Script_Engine::SphereComponent*& get_InteractZone();
    float& get_Crosshair_Cooldown_Timeline_Progress_D65F12C348FA718E35AE5CAC1B171CD2();
    void* get_Crosshair_Cooldown_Timeline__Direction_D65F12C348FA718E35AE5CAC1B171CD2();
    _Script_Engine::TimelineComponent*& get_Crosshair_Cooldown_Timeline();
    float& get_CrouchCam_Lerp_Amount_E83E38C741AC72E45A04149B1BFE4B79();
    void* get_CrouchCam__Direction_E83E38C741AC72E45A04149B1BFE4B79();
    _Script_Engine::TimelineComponent*& get_CrouchCam();
    float& get_ChargeHugFOVMod_FOVMod_8C3635DE46C18D6B48D0FD8A4F731568();
    void* get_ChargeHugFOVMod__Direction_8C3635DE46C18D6B48D0FD8A4F731568();
    _Script_Engine::TimelineComponent*& get_ChargeHugFOVMod();
    float& get_OriginalWalkSpeed();
    bool get_LeftClicked();
    void set_LeftClicked(bool value);
    bool get_CanChargeHug();
    void set_CanChargeHug(bool value);
    _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C*& get_PlayerToHug();
    float& get_Sensitivity();
    bool get_CurrentlyChargeHugging();
    void set_CurrentlyChargeHugging(bool value);
    float& get_OriginalFOV();
    void* get_Interface_Monster_Name();
    bool get_ThirdPerson();
    void set_ThirdPerson(bool value);
    float& get_AdditiveFOV();
    void* get_UncrouchCameraLocation();
    void* get_CrouchCameraLocation();
    bool get_InPlacementMode();
    void set_InPlacementMode(bool value);
    void* get_BabyHuggyRotation();
    void* get_BabyHuggyLocation();
    bool get_CanPlaceBaby();
    void set_CanPlaceBaby(bool value);
    _Script_Engine::Actor*& get_ActiveBabyHuggy();
    float& get_BabyHuggyCooldown();
    void* get_BabyHuggyClass();
    bool get_CanInteractUI();
    void set_CanInteractUI(bool value);
    void* get_OriginalCamLocation();
    float& get_MaxPlaceDistance();
    bool get_Footsteps();
    void set_Footsteps(bool value);
    bool get_LeftHandPressed_();
    void set_LeftHandPressed_(bool value);
    bool get_RightHandPressed_();
    void set_RightHandPressed_(bool value);
    bool get_ChargeHugPressed_();
    void set_ChargeHugPressed_(bool value);
    bool get_PlaceBabyHuggyPressed_();
    void set_PlaceBabyHuggyPressed_(bool value);
    bool get_PreventAttack_();
    void set_PreventAttack_(bool value);
    bool get_PreventFirstAbility_();
    void set_PreventFirstAbility_(bool value);
    bool get_PreventSecondAbility_();
    void set_PreventSecondAbility_(bool value);
    void* get_ChargeStartLocation();
    void* get_SelectedSabotage();
    bool get_InShrinker();
    void set_InShrinker(bool value);
    bool get_Is_Jumpscare_Active_();
    void set_Is_Jumpscare_Active_(bool value);
    bool get_Can_Look_Around();
    void set_Can_Look_Around(bool value);
    bool get_Attack_is_Left_Hand();
    void set_Attack_is_Left_Hand(bool value);
    bool get_Trace_Play_Attack_Animation_();
    void set_Trace_Play_Attack_Animation_(bool value);
    void* get_Toggled_Third_Person_During_Jumpscare();
    void* get_OnBasicAttack();
    void* get_OnPlacedBabyHuggy();
    void* get_OnJump();
    bool get_PreventSabotage_();
    void set_PreventSabotage_(bool value);
    void* get_OnSabotage();
    void* get_Sounds();
    float& get_Distance_from_Monster_Jumpscare();
    void* get_Camera_Rotation();
    bool get_InVent_();
    void set_InVent_(bool value);
    void* get_VentsArray();
    int32_t& get_CurrentVent();
    int32_t& get_EntryVent();
    int32_t& get_ScanningVent();
    bool get_IsVentBeingScanned_();
    void set_IsVentBeingScanned_(bool value);
    _Game_Player_Huggy_HuggyVentManager::HuggyVentManager_C*& get_VentManager();
    _Game_Interface_MonsterHUDs_UI_Huggy_HUD::UI_Huggy_HUD_C*& get_HuggyHUD();
    _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_Player::BP_MeshContainer_Player_C*& get_TP_Player_Mesh_Container();
    _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_Player::BP_MeshContainer_Player_C*& get_FP_Player_Mesh_Container();
    void* get_DefaultPostProcess();
    void* get_MonsterVisionPostProcess();
    static _Script_CoreUObject::Class* static_class();
    bool BP_CheckBoogieBot(_Script_Engine::Actor* Actor);
    bool BP_CheckLocker(_Script_Engine::Actor* Actor);
    void* GetMonsterHud();
    void CanHuggyCharge(bool& CanCharge);
    void OnRep_CurrentVent2();
    void OnRep_InVent_();
    void OnRep_CurrentVent();
    void Footstep();
    void Toggle_ThirdPerson();
    void Set_First_Person_Visiblity(bool Hide);
    void Set_Third_Person_Visibility(bool Hide);
    void GetOwningPlayerController(_Script_Engine::PlayerController*& Controller);
    void PlayThirdPersonHitAnimation();
    void BabyHuggyDownTrace(_Script_CoreUObject::Vector InLocation, _Script_CoreUObject::Vector& DownLocation);
    void OnRep_CanPlaceBaby();
    void PlayFirstPersonHitMontage(bool LeftHand);
    _Game_Interface_MonsterHUDs_UI_MonsterHUD::UI_MonsterHUD_C* GetHuggyHUD();
    void LookAround(float Val, bool Pitch);
    void UserConstructionScript();
    void CrouchCam__FinishedFunc();
    void CrouchCam__UpdateFunc();
    void ChargeHugFOVMod__FinishedFunc();
    void ChargeHugFOVMod__UpdateFunc();
    void Crosshair_Cooldown_Timeline__FinishedFunc();
    void Crosshair_Cooldown_Timeline__UpdateFunc();
    void InpActEvt_Emote_K2Node_InputActionEvent_8(_Script_InputCore::Key Key);
    void InpActEvt_Jump_K2Node_InputActionEvent_7(_Script_InputCore::Key Key);
    void InpActEvt_T_K2Node_InputKeyEvent_9(_Script_InputCore::Key Key);
    void InpActEvt_LeftControl_K2Node_InputKeyEvent_8(_Script_InputCore::Key Key);
    void InpActEvt_LeftControl_K2Node_InputKeyEvent_7(_Script_InputCore::Key Key);
    void InpActEvt_SpaceBar_K2Node_InputKeyEvent_6(_Script_InputCore::Key Key);
    void InpActEvt_S_K2Node_InputKeyEvent_5(_Script_InputCore::Key Key);
    void InpActEvt_W_K2Node_InputKeyEvent_4(_Script_InputCore::Key Key);
    void InpActEvt_D_K2Node_InputKeyEvent_3(_Script_InputCore::Key Key);
    void InpActEvt_A_K2Node_InputKeyEvent_2(_Script_InputCore::Key Key);
    void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1(_Script_InputCore::Key Key);
    void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_0(_Script_InputCore::Key Key);
    void InpActEvt_Interact_K2Node_InputActionEvent_6(_Script_InputCore::Key Key);
    void InpActEvt_Interact_K2Node_InputActionEvent_5(_Script_InputCore::Key Key);
    void InpActEvt_Run_K2Node_InputActionEvent_4(_Script_InputCore::Key Key);
    void InpActEvt_Run_K2Node_InputActionEvent_3(_Script_InputCore::Key Key);
    void InpActEvt_Right_Hand_Extend_K2Node_InputActionEvent_2(_Script_InputCore::Key Key);
    void InpActEvt_Left_Hand_Extend_K2Node_InputActionEvent_1(_Script_InputCore::Key Key);
    void InpActEvt_Sabotage_K2Node_InputActionEvent_0(_Script_InputCore::Key Key);
    void OnFailure_B328018042ED1207802DEF8170174159();
    void OnSuccess_B328018042ED1207802DEF8170174159();
    void MulticastPlayJumpSound();
    void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
    void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
    void CrouchCamera();
    void OnLanded(_Script_Engine::HitResult& Hit);
    void ForceUncrouch();
    void MultiSetCapsuleHeight(float NewHeight, bool Reset);
    void SetCapsuleHeight(float NewHeight, bool Reset);
    void InpAxisEvt_LookYaw_K2Node_InputAxisEvent_3(float AxisValue);
    void InpAxisEvt_LookPitch_K2Node_InputAxisEvent_2(float AxisValue);
    void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_1(float AxisValue);
    void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_0(float AxisValue);
    void StopHeadBob();
    void StartHeadBob();
    void StopChargeBob();
    void StartChargeBob();
    void Server_ScanAlertOff(int32_t vent);
    void Server_ScanAlert(int32_t vent);
    void Server_ExitVent();
    void Server_CycleVent(int32_t VentIndex);
    void Server_TryToVent();
    void TryStartBabyHuggy();
    void TryToCharge();
    void TryToPunch();
    void ChargingSound();
    void ChargeHitSound();
    void Play_Swing_Sound();
    void Server_Enable_Movement();
    void Server_Disable_Movement_and_Head_Bob();
    void RightAttackShake();
    void LeftAttackShake();
    void BndEvt__BP_NetworkHuggy_CharacterMovement_K2Node_ComponentBoundEvent_2_HasEndedCharging__DelegateSignature();
    void BndEvt__BP_NetworkHuggy_CharacterMovement_K2Node_ComponentBoundEvent_1_HasStartedCharging__DelegateSignature();
    void ReverseChargeHugFOVMod();
    void PlayChargeHugFOVMod();
    void Set_Baby_Huggy_Skeletal(_Game_Player_Huggy_BP_BabyHuggy::BP_BabyHuggy_C* Baby_Huggy);
    void PlaceHuggyServer(_Script_CoreUObject::Vector HuggyLocation, _Script_CoreUObject::Rotator HuggyRotation);
    void BP_OnRep_Preset();
    void BP_OnRep_CarryingPlayer();
    void BP_ShowIdleWarning();
    void BP_KickPlayer();
    void BP_IdleKickReset();
    void ReceiveEndPlay(void* EndPlayReason);
    void ReceivePossessed(_Script_Engine::Controller* NewController);
    void CreateHuggyWidget();
    void ShowHoleNav(bool Shown_);
    void BndEvt__BP_NetworkHuggy_AIPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature(_Script_Engine::Actor* Actor, _Script_AIModule::AIStimulus Stimulus);
    void Server_Drop_Player();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void MultiHugPlayer(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C* PlayerToHug, bool Charging);
    void NetHugPlayer(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C* PlayerToHug, float Duration);
    void ServerOnly_ToggleHugHitScan(bool Condition);
    void End_Jumpscare();
    void Play_Jumpscare_Visuals(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C* Network_Character);
    void Client_OnPossessed();
    void DoEmote(int32_t Index);
    void Multicast_Emote(int32_t Index);
    void Server_Emote(int32_t Index);
    void Emote(int32_t Index);
    void BP_SetSabotageIconFromName(void* Name);
    void Play_Bash();
    void CrosshairCooldownAnim();
    void BP_OnAttackHit(_Script_Playtime_Multiplayer::ANetworkCharacter* Player);
    void BP_OnAttack();
    void BP_Jumpscare(_Script_Playtime_Multiplayer::ANetworkCharacter* Player);
    void BP_ShowHoleNav(bool Shown);
    void Play_Hitmarker_HitSound();
    void PlayHitMontage(bool LeftHand);
    void ExecuteUbergraph_BP_NetworkHuggy(int32_t EntryPoint);
    void OnSabotage__DelegateSignature();
    void OnPlacedBabyHuggy__DelegateSignature();
    void OnJump__DelegateSignature();
    void OnBasicAttack__DelegateSignature();
    void Toggled_Third_Person_During_Jumpscare__DelegateSignature();
}; // Size: 0x13a0
#pragma pack(pop)
}
