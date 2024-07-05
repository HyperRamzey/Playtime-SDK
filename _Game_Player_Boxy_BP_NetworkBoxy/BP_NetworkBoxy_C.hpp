#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AIModule\AIStimulus.hpp"
#include "..\_Script_InputCore\Key.hpp"
#include "..\_Script_Playtime_Multiplayer\NetworkKangaroo.hpp"
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
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
struct ChildActorComponent;
}
namespace _Script_Engine {
struct CameraComponent;
}
namespace _Script_Engine {
struct SpringArmComponent;
}
namespace _Script_Engine {
struct AudioComponent;
}
namespace _Game_Player_Monsters_Sabotages_BPC_SabotageComponent {
struct BPC_SabotageComponent_C;
}
namespace _Script_AIModule {
struct AIPerceptionComponent;
}
namespace _Game_Gameplay_Puzzles_AC_PuzzleHighlight {
struct AC_PuzzleHighlight_C;
}
namespace _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem {
struct BPC_NavSystem_C;
}
namespace _Script_Engine {
struct TimelineComponent;
}
namespace _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_Player {
struct BP_MeshContainer_Player_C;
}
namespace _Game_Interface_MonsterHUDs_UI_BoxyHUD {
struct UI_BoxyHUD_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct PlayerController;
}
namespace _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter {
struct BP_NetworkCharacter_C;
}
namespace _Game_Interface_MonsterHUDs_UI_MonsterHUD {
struct UI_MonsterHUD_C;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Script_Playtime_Multiplayer {
struct ANetworkCharacter;
}
namespace _Script_Engine {
struct Controller;
}
namespace _Game_Player_Boxy_BP_NetworkBoxy {
#pragma pack(push, 1)
struct BP_NetworkBoxy_C : public _Script_Playtime_Multiplayer::NetworkKangaroo {
    private: char pad_630[0xdd0]; public:
    void* get_UberGraphFrame();
    _Script_Engine::PostProcessComponent*& get_PostProcess();
    _Game_Gameplay_Interaction_BP_OutlineComponent::BP_OutlineComponent_C*& get_BP_OutlineComponent();
    _Game_Player_Monsters_BPC_PlayerDetectionSystem_BA::BPC_PlayerDetectionSystem_BA_C*& get_BPC_PlayerDetectionSystem_BA();
    _Script_Engine::SkeletalMeshComponent*& get_TP_PlayerMesh();
    _Script_Engine::ChildActorComponent*& get_TP_PlayerMesh_Cosmetics();
    _Script_Engine::SkeletalMeshComponent*& get_FP_PlayerMesh();
    _Script_Engine::CameraComponent*& get_FP_Camera();
    _Script_Engine::SkeletalMeshComponent*& get_FP_CameraMesh();
    _Script_Engine::SpringArmComponent*& get_FP_CameraSpringArm();
    _Script_Engine::SkeletalMeshComponent*& get_CosmeticFirstPersonArms();
    _Script_Engine::SkeletalMeshComponent*& get_CosmeticMesh();
    _Script_Engine::SkeletalMeshComponent*& get_FirstPersonArms();
    _Script_Engine::AudioComponent*& get_boxy_jingle2();
    _Game_Player_Monsters_Sabotages_BPC_SabotageComponent::BPC_SabotageComponent_C*& get_BPC_SabotageComponent();
    _Script_AIModule::AIPerceptionComponent*& get_AIPerception();
    _Game_Gameplay_Puzzles_AC_PuzzleHighlight::AC_PuzzleHighlight_C*& get_AC_PuzzleHighlight();
    _Script_Engine::SpringArmComponent*& get_FP_Springarm();
    _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C*& get_BPC_NavSystem();
    _Script_Engine::CameraComponent*& get_TP_Camera();
    _Script_Engine::SpringArmComponent*& get_TP_SpringArm();
    float& get_Crouching_Lerp_Amount_5497B96E490FBA053B54CFA65F4A9DEF();
    void* get_Crouching__Direction_5497B96E490FBA053B54CFA65F4A9DEF();
    _Script_Engine::TimelineComponent*& get_Crouching();
    float& get_OriginalWalkSpeed();
    void* get_UncrouchCameraLocation();
    void* get_CrouchCameraLocation();
    float& get_Sensitivity();
    bool get_ThirdPerson();
    void set_ThirdPerson(bool value);
    float& get_DamageToDo();
    float& get_HitReach();
    int32_t& get_PunchDelayIndex();
    bool get_HandToPunchWith();
    void set_HandToPunchWith(bool value);
    bool get_BarragePushed_();
    void set_BarragePushed_(bool value);
    bool get_CooledDownGrab_();
    void set_CooledDownGrab_(bool value);
    float& get_GrabCooldown();
    float& get_BarrageCooldown();
    bool get_LaunchPushed_();
    void set_LaunchPushed_(bool value);
    _Script_Engine::AudioComponent*& get_ChargeUpSound();
    void* get_OriginalCamLocation();
    bool get_PunchCooledDown();
    void set_PunchCooledDown(bool value);
    bool get_Footsteps();
    void set_Footsteps(bool value);
    void* get_Survivors();
    float& get_ProxSoundDistance();
    float& get_ProxSoundVolume();
    void* get_LeapStartPos();
    bool get_Leaping();
    void set_Leaping(bool value);
    void* get_SelectedSabotage();
    bool get_InShrinker();
    void set_InShrinker(bool value);
    int32_t& get_Playback_Index();
    void* get_BoxyJingles();
    float& get_PlaybackPercent();
    float& get_PercentOffset();
    int32_t& get_NewBPMIndex();
    bool get_Boxy_Jingle1_IsActive();
    void set_Boxy_Jingle1_IsActive(bool value);
    bool get_Is_Jumpscare_Active();
    void set_Is_Jumpscare_Active(bool value);
    void* get_Toggled_Third_Person_During_Jumpscare();
    void* get_Camera_Rotation();
    void* get_Preset_0();
    void* get_New_Objective();
    void* get_Sounds();
    float& get_Distance_from_Monster_Jumpscare();
    bool get_Can_Move();
    void set_Can_Move(bool value);
    float& get_CrouchStartTime();
    void* get_DummyEmptyPresetSlot();
    void* get_Want_Crouch_During_Jumpscare();
    void* get_Doesn_t_Want_Crouch_During_Jumpscare();
    float& get_LandingSlowDuration();
    float& get_LandingSlowedSpeed();
    _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_Player::BP_MeshContainer_Player_C*& get_FP_Player_Mesh_Container();
    _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_Player::BP_MeshContainer_Player_C*& get_TP_Player_Mesh_Container();
    _Game_Interface_MonsterHUDs_UI_BoxyHUD::UI_BoxyHUD_C*& get_BoxyHUD();
    void* get_MonsterVisionPostProcess();
    void* get_DefaultPostProcess();
    static _Script_CoreUObject::Class* static_class();
    bool BP_CheckBoogieBot(_Script_Engine::Actor* Actor);
    bool BP_CheckLocker(_Script_Engine::Actor* Actor);
    void* GetMonsterHud();
    void OnRep_Sounds();
    void Toggle_Third_Person();
    void Set_First_Person_Visiblity(bool Hide);
    void Set_Third_Person_Visibility(bool Hide);
    void GetOwningPlayerController(_Script_Engine::PlayerController*& Controller);
    void GetClosestPlayer(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C*& Closest, float& Distance);
    void IsMonsterMoving(bool& Return_Value);
    void OnRep_PunchButtonIsDown_();
    void GetCurrentPunchDelay(float& Output);
    void Get_Punch_Delays(void*& Array);
    _Game_Interface_MonsterHUDs_UI_MonsterHUD::UI_MonsterHUD_C* Get_Boxy_HUD();
    void Trace_Attack(float Base_Damage, bool& Hit_);
    void Look_Around(float Val, bool Pitch);
    void UserConstructionScript();
    void Crouching__FinishedFunc();
    void Crouching__UpdateFunc();
    void InpActEvt_Jump_K2Node_InputActionEvent_6(_Script_InputCore::Key Key);
    void InpActEvt_LeftControl_K2Node_InputKeyEvent_2(_Script_InputCore::Key Key);
    void InpActEvt_LeftControl_K2Node_InputKeyEvent_1(_Script_InputCore::Key Key);
    void InpActEvt_T_K2Node_InputKeyEvent_0(_Script_InputCore::Key Key);
    void InpActEvt_Run_K2Node_InputActionEvent_5(_Script_InputCore::Key Key);
    void InpActEvt_Run_K2Node_InputActionEvent_4(_Script_InputCore::Key Key);
    void OnNotifyEnd_091E5096499B8293C135368C210AC843(void* NotifyName);
    void OnNotifyBegin_091E5096499B8293C135368C210AC843(void* NotifyName);
    void OnInterrupted_091E5096499B8293C135368C210AC843(void* NotifyName);
    void OnBlendOut_091E5096499B8293C135368C210AC843(void* NotifyName);
    void OnCompleted_091E5096499B8293C135368C210AC843(void* NotifyName);
    void InpActEvt_Left_Hand_Extend_K2Node_InputActionEvent_3(_Script_InputCore::Key Key);
    void InpActEvt_Right_Hand_Extend_K2Node_InputActionEvent_2(_Script_InputCore::Key Key);
    void InpActEvt_Sabotage_K2Node_InputActionEvent_1(_Script_InputCore::Key Key);
    void InpActEvt_Emote_K2Node_InputActionEvent_0(_Script_InputCore::Key Key);
    void OnFailure_40A8081145C8B43DFC70F58F5005CB72();
    void OnSuccess_40A8081145C8B43DFC70F58F5005CB72();
    void CrouchCamera();
    void OnLanded(_Script_Engine::HitResult& Hit);
    void ForceUncrouch();
    void SetCapsuleHeight(float NewHeight, bool Reset);
    void MultiSetCapsuleHeight(float NewHeight, bool Reset);
    void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_3(float AxisValue);
    void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_2(float AxisValue);
    void InpAxisEvt_LookPitch_K2Node_InputAxisEvent_1(float AxisValue);
    void InpAxisEvt_LookYaw_K2Node_InputAxisEvent_0(float AxisValue);
    void Multicast_SlowMovement(bool IsSlowed, float SlowedSpeed);
    void Server_SlowMovement(bool IsSlowed, float SlowedSpeed);
    void Multicast_Begin_Charge();
    void Server_Begin_Charge();
    void Multicast_Release_Charge();
    void Server_ReleaseCharge();
    void ReleaseCharge();
    void BeginCharge();
    void BP_OnAttack();
    void BP_OnAttackHit(_Script_Playtime_Multiplayer::ANetworkCharacter* Player);
    void HitMontage();
    void BP_ShowHoleNav(bool Shown);
    void BP_Jumpscare(_Script_Playtime_Multiplayer::ANetworkCharacter* Player);
    void BP_OnRep_CarryingPlayer();
    void ShowHoleNav(bool Shown_);
    void Server_Drop_Player();
    void BndEvt__BP_NetworkBoxy_FistPkg_K2Node_ComponentBoundEvent_0_FistStateChanged__DelegateSignature(void* State);
    void BP_SetSabotageIconFromName(void* Name);
    void BndEvt__BP_NetworkBoxy_PerceptionComponent_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature(_Script_Engine::Actor* Actor, _Script_AIModule::AIStimulus Stimulus);
    void Try_To_Crouch();
    void BP_OnRep_Preset();
    void Try_To_Uncrouch();
    void BP_ShowIdleWarning();
    void BP_KickPlayer();
    void BP_IdleKickReset();
    void ReceiveEndPlay(void* EndPlayReason);
    void ReceivePossessed(_Script_Engine::Controller* NewController);
    void Jumpscare_Player(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C* Player, bool Enough_Space_for_Jumpscare);
    void BndEvt__BP_NetworkHuggy_AIPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature(_Script_Engine::Actor* Actor, _Script_AIModule::AIStimulus Stimulus);
    void CreateBoxyWidget();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void Client_HasFullyCharged();
    void BndEvt__BP_NetworkKangaroo_CharacterMovement_K2Node_ComponentBoundEvent_0_HasFullyCharged__DelegateSignature();
    void ResetFOVAndHUD();
    void PlayLandedSound();
    void Multicast_LandedSound();
    void PlayJumpSound();
    void Multicast_PlayJumpSound();
    void OnJumped();
    void PlayHitmarker_Hitsound();
    void Toggle_Music_Box(bool MusicBoxOn);
    void Owner_OnPossess();
    void DoEmote(int32_t Index);
    void Multicast_Emote(int32_t Index);
    void Server_Emote(int32_t Index);
    void Emote(int32_t Index);
    void End_Jumpscare();
    void Play_Jumpscare_Visuals(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C* Network_Character);
    void PlaySwingHitSound();
    void HUD_HitAnimation();
    void ExecuteUbergraph_BP_NetworkBoxy(int32_t EntryPoint);
    void Doesn_t_Want_Crouch_During_Jumpscare__DelegateSignature();
    void Want_Crouch_During_Jumpscare__DelegateSignature();
    void Toggled_Third_Person_During_Jumpscare__DelegateSignature();
}; // Size: 0x1400
#pragma pack(pop)
}
