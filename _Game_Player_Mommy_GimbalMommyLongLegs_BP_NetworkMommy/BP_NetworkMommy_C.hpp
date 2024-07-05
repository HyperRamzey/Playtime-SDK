#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AIModule\AIStimulus.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_InputCore\Key.hpp"
#include "..\_Script_Playtime_Multiplayer\NetworkMommy.hpp"
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
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Game_Player_Monsters_Sabotages_BPC_SabotageComponent {
struct BPC_SabotageComponent_C;
}
namespace _Script_Engine {
struct CameraComponent;
}
namespace _Script_Engine {
struct SpringArmComponent;
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
namespace _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter {
struct BP_NetworkCharacter_C;
}
namespace _Script_Engine {
struct AudioComponent;
}
namespace _Game_Interface_MonsterHUDs_UI_MommyHUD {
struct UI_MommyHUD_C;
}
namespace _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_Player {
struct BP_MeshContainer_Player_C;
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
namespace _Game_Interface_MonsterHUDs_UI_MonsterHUD {
struct UI_MonsterHUD_C;
}
namespace _Script_Engine {
struct Controller;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Script_Playtime_Multiplayer {
struct ANetworkCharacter;
}
namespace _Game_Player_Mommy_GimbalMommyLongLegs_BP_NetworkMommy {
#pragma pack(push, 1)
struct BP_NetworkMommy_C : public _Script_Playtime_Multiplayer::NetworkMommy {
    private: char pad_690[0xd00]; public:
    void* get_UberGraphFrame();
    _Script_Engine::PostProcessComponent*& get_PostProcess();
    _Game_Gameplay_Interaction_BP_OutlineComponent::BP_OutlineComponent_C*& get_BP_OutlineComponent();
    _Script_Engine::ChildActorComponent*& get_TP_PlayerMesh_Cosmetics();
    _Script_Engine::SkeletalMeshComponent*& get_TP_PlayerMesh();
    _Script_Engine::SkeletalMeshComponent*& get_FP_PlayerMesh();
    _Script_Engine::CameraComponent*& get_FP_Camera();
    _Script_Engine::SkeletalMeshComponent*& get_FP_CameraMesh();
    _Script_Engine::SpringArmComponent*& get_FP_CameraSpringArm();
    _Game_Player_Monsters_BPC_PlayerDetectionSystem_BA::BPC_PlayerDetectionSystem_BA_C*& get_BPC_PlayerDetectionSystem_BA();
    _Script_Engine::SkeletalMeshComponent*& get_MommyFirstPersonArmsCosmetic();
    _Script_Engine::SkeletalMeshComponent*& get_MommyFirstPersonArms();
    _Game_Player_Monsters_Sabotages_BPC_SabotageComponent::BPC_SabotageComponent_C*& get_BPC_SabotageComponent();
    _Script_AIModule::AIPerceptionComponent*& get_AIPerception();
    _Game_Gameplay_Puzzles_AC_PuzzleHighlight::AC_PuzzleHighlight_C*& get_AC_PuzzleHighlight();
    _Script_Engine::SpringArmComponent*& get_FirstPersonArmsSpring();
    _Script_Engine::SkeletalMeshComponent*& get_FirstPersonArmsOLD();
    _Script_Engine::CameraComponent*& get_TP_Camera();
    _Script_Engine::SpringArmComponent*& get_TP_SpringArm();
    _Script_Engine::SkeletalMeshComponent*& get_SK_Mommy_Spider();
    _Script_Engine::SpringArmComponent*& get_MommyMeshRotator();
    _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C*& get_BPC_NavSystem();
    float& get_CrosshairCooldownTimeline_Progress_D55E164D4D6477CF32F277B119535ACE();
    void* get_CrosshairCooldownTimeline__Direction_D55E164D4D6477CF32F277B119535ACE();
    _Script_Engine::TimelineComponent*& get_CrosshairCooldownTimeline();
    void* get_TL_Spotter_Outline_AE4A182948509AFCED602CB020489016();
    float& get_TL_Spotter_Black_AE4A182948509AFCED602CB020489016();
    float& get_TL_Spotter_Desaturation_AE4A182948509AFCED602CB020489016();
    float& get_TL_Spotter_FishEye_AE4A182948509AFCED602CB020489016();
    void* get_TL_Spotter__Direction_AE4A182948509AFCED602CB020489016();
    _Script_Engine::TimelineComponent*& get_TL_Spotter();
    float& get_CrouchTimeline_Lerp_Amount_8E671A8C4FDED64DF1DBD28E87292B86();
    void* get_CrouchTimeline__Direction_8E671A8C4FDED64DF1DBD28E87292B86();
    _Script_Engine::TimelineComponent*& get_CrouchTimeline();
    bool get_ThirdPerson();
    void set_ThirdPerson(bool value);
    bool get_Can_Spot();
    void set_Can_Spot(bool value);
    float& get_SpotterRechargeTime();
    float& get_SpotterDuration();
    bool get_SpotPressed_();
    void set_SpotPressed_(bool value);
    float& get_AmountOfWebs();
    float& get_WebFullRechargeTime();
    bool get_ShootingWebs();
    void set_ShootingWebs(bool value);
    bool get_Footsteps();
    void set_Footsteps(bool value);
    float& get_OriginalFOV();
    void* get_OriginalGimbalCameraLocation();
    bool get_CanWeb();
    void set_CanWeb(bool value);
    void* get_WebTimerHandle();
    void* get_CrouchCameraLocation();
    void* get_UncrouchCameraLocation();
    void* get_OriginalCameraSpringArmLocation();
    bool get_InShrinker();
    void set_InShrinker(bool value);
    void* get_CameraRotation();
    bool get_Is_Jumpscare_Active();
    void set_Is_Jumpscare_Active(bool value);
    bool get_Attack_Should_Hit();
    void set_Attack_Should_Hit(bool value);
    void* get_Toggled_Third_Person_During_Jumpscare();
    bool get_Can_Move();
    void set_Can_Move(bool value);
    float& get_Jumpscare_Duration();
    float& get_Jumpscare_Blend_Out_TIme();
    _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C*& get_Last_Jumpscared_Player();
    void* get_Sounds();
    float& get_Distance_from_Monster_Jumpscare();
    _Script_Engine::AudioComponent*& get_GrapplingSound();
    float& get_Sensitivity();
    bool get_CanGrapple();
    void set_CanGrapple(bool value);
    float& get_GrappleCooldownTime();
    _Game_Interface_MonsterHUDs_UI_MommyHUD::UI_MommyHUD_C*& get_MommyHUD();
    _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_Player::BP_MeshContainer_Player_C*& get_FP_Player_Mesh_Container();
    _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_Player::BP_MeshContainer_Player_C*& get_TP_Player_Mesh_Container();
    void* get_MonsterVisionPostProcess();
    void* get_DefaultPostProcess();
    static _Script_CoreUObject::Class* static_class();
    bool BP_CheckBoogieBot(_Script_Engine::Actor* Actor);
    bool BP_CheckLocker(_Script_Engine::Actor* Actor);
    void* GetMonsterHud();
    void GetOwningPlayerController(_Script_Engine::PlayerController*& Controller);
    void Toggle_Third_Person();
    void Set_First_Person_Visiblity(bool Hide);
    void Set_Third_Person_Visibility(bool Hide);
    void Is_Monster_Moving(bool& Return_Value);
    void GetMommyHud(_Game_Interface_MonsterHUDs_UI_MonsterHUD::UI_MonsterHUD_C*& Mommy_HUD);
    void LookAround(float Val, bool Pitch);
    void UserConstructionScript();
    void CrouchTimeline__FinishedFunc();
    void CrouchTimeline__UpdateFunc();
    void CrosshairCooldownTimeline__FinishedFunc();
    void CrosshairCooldownTimeline__UpdateFunc();
    void TL_Spotter__FinishedFunc();
    void TL_Spotter__UpdateFunc();
    void InpActEvt_Sabotage_K2Node_InputActionEvent_6(_Script_InputCore::Key Key);
    void InpActEvt_Right_Hand_Extend_K2Node_InputActionEvent_5(_Script_InputCore::Key Key);
    void InpActEvt_Jump_K2Node_InputActionEvent_4(_Script_InputCore::Key Key);
    void InpActEvt_Emote_K2Node_InputActionEvent_3(_Script_InputCore::Key Key);
    void InpActEvt_LeftControl_K2Node_InputKeyEvent_2(_Script_InputCore::Key Key);
    void InpActEvt_LeftControl_K2Node_InputKeyEvent_1(_Script_InputCore::Key Key);
    void InpActEvt_T_K2Node_InputKeyEvent_0(_Script_InputCore::Key Key);
    void InpActEvt_Interact_K2Node_InputActionEvent_2(_Script_InputCore::Key Key);
    void InpActEvt_Interact_K2Node_InputActionEvent_1(_Script_InputCore::Key Key);
    void InpActEvt_Left_Hand_Extend_K2Node_InputActionEvent_0(_Script_InputCore::Key Key);
    void OnFailure_EB75E8264CA1949B60B9E6B7EEA3EF1A();
    void OnSuccess_EB75E8264CA1949B60B9E6B7EEA3EF1A();
    void OnNotifyEnd_8A5CCE1D49E4193732358EA20C1D735C(void* NotifyName);
    void OnNotifyBegin_8A5CCE1D49E4193732358EA20C1D735C(void* NotifyName);
    void OnInterrupted_8A5CCE1D49E4193732358EA20C1D735C(void* NotifyName);
    void OnBlendOut_8A5CCE1D49E4193732358EA20C1D735C(void* NotifyName);
    void OnCompleted_8A5CCE1D49E4193732358EA20C1D735C(void* NotifyName);
    void BP_SetSabotageIconFromName(void* Name);
    void CrouchCamera();
    void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_3(float AxisValue);
    void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_2(float AxisValue);
    void InpAxisEvt_LookPitch_K2Node_InputAxisEvent_1(float AxisValue);
    void InpAxisEvt_LookYaw_K2Node_InputAxisEvent_0(float AxisValue);
    void StopHeadBob();
    void StartHeadBob();
    void AttackShake(bool Left);
    void DoWebsMulti(_Script_CoreUObject::Rotator LookRotation);
    void DoWebsClient(bool Shooting_, _Script_CoreUObject::Rotator LookRotation);
    void CallDoWebs();
    void Play_Swing_Sound();
    void DoWebsServer(bool Shooting_, _Script_CoreUObject::Rotator LookRotation);
    void TrySpot();
    void TryPunch();
    void BP_OnRep_Preset();
    void BP_OnRep_CarryingPlayer();
    void BP_ShowIdleWarning();
    void BP_KickPlayer();
    void BP_IdleKickReset();
    void ReceiveEndPlay(void* EndPlayReason);
    void ReceivePossessed(_Script_Engine::Controller* NewController);
    void PlayShootSound();
    void PlayGrabSound();
    void Started_Jumpscare();
    void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
    void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
    void Jumpscare_Player(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C* Player, bool Enough_Space_for_Jumpscare);
    void BndEvt__BP_NetworkHuggy_AIPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature(_Script_Engine::Actor* Actor, _Script_AIModule::AIStimulus Stimulus);
    void ShowHoleNav(bool Shown_);
    void Server_Drop_Player();
    void ReceiveTick(float DeltaSeconds);
    void CreateMommyWidget();
    void ReceiveBeginPlay();
    void DoEmote(int32_t Index);
    void Multicast_Emote(int32_t Index);
    void Server_Emote(int32_t Index);
    void Emote(int32_t Index);
    void BP_OnRep_GrappleState0();
    void Multicast_MommyLandSound();
    void OnLanded(_Script_Engine::HitResult& Hit);
    void Multicast_MommyLaunchSound();
    void Event_Mommy_Launched();
    void MommyGrappleGrabEvent();
    void MommyGrappleShotEvent();
    void End_Jumpscare();
    void Play_Jumpscare_Visuals(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C* Network_Character);
    void Owner_OnPossessed();
    void CrosshairCooldownAnim();
    void BP_OnAttack();
    void BP_OnAttackHit(_Script_Playtime_Multiplayer::ANetworkCharacter* Player);
    void BP_ShowHoleNav(bool Shown);
    void BP_Jumpscare(_Script_Playtime_Multiplayer::ANetworkCharacter* Player);
    void Client_DoSpot(bool Start_);
    void Server_TrySpot();
    void Play_Hitmarker___HitSound();
    void PlayHitMontage();
    void ExecuteUbergraph_BP_NetworkMommy(int32_t EntryPoint);
    void Toggled_Third_Person_During_Jumpscare__DelegateSignature();
}; // Size: 0x1390
#pragma pack(pop)
}
