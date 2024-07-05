#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AIModule\AIStimulus.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_InputCore\Key.hpp"
#include "..\_Script_Playtime_Multiplayer\ANetworkCharacter.hpp"
#include "..\_Script_Playtime_Multiplayer\PresetSlot.hpp"
namespace _Script_Engine {
struct ChildActorComponent;
}
namespace _Script_Niagara {
struct NiagaraComponent;
}
namespace _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster {
struct BP_AbstractJumpscareMaster_C;
}
namespace _Game_Player_TrainingDummy_BP_ZoneDetectionComponent {
struct BP_ZoneDetectionComponent_C;
}
namespace _Game_Player_TrainingDummy_BP_CommsComponent {
struct BP_CommsComponent_C;
}
namespace _Script_CoreUObject {
struct Transform;
}
namespace _Script_Playtime_Multiplayer {
struct NavigatorIndicatorSorter;
}
namespace _Script_Engine {
struct SpotLightComponent;
}
namespace _Game_Gameplay_Interaction_BP_OutlineComponent {
struct BP_OutlineComponent_C;
}
namespace _Game_Gameplay_Character_Jumpscares_BP_PlayerPOVJumpscareContainer {
struct BP_PlayerPOVJumpscareContainer_C;
}
namespace _Game_Player_BP_RegenZone {
struct BP_RegenZone_C;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct CameraComponent;
}
namespace _Script_Engine {
struct PlayerState;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
struct CurveFloat;
}
namespace _Script_Engine {
struct SpringArmComponent;
}
namespace _Game_Interface_BPC_Tooltip {
struct BPC_Tooltip_C;
}
namespace _Script_Engine {
struct CapsuleComponent;
}
namespace _Script_Engine {
struct BoxComponent;
}
namespace _Script_Engine {
struct AudioComponent;
}
namespace _Script_Playtime_Multiplayer {
struct Monster;
}
namespace _Script_AIModule {
struct AIPerceptionStimuliSourceComponent;
}
namespace _Game_Interface_NavSystem_Blueprints_Actors_BP_NavBaseActor {
struct BP_NavBaseActor_C;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement {
struct BPC_NavElement_C;
}
namespace _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem {
struct BPC_NavSystem_C;
}
namespace _Game_Gameplay_Interaction_BP_Locker {
struct BP_Locker_C;
}
namespace _Script_UMG {
struct WidgetComponent;
}
namespace _Script_Engine {
struct TimelineComponent;
}
namespace _Game_Interface_IngameScreens_UI_DeathScreen {
struct UI_DeathScreen_C;
}
namespace _Script_Engine {
struct SoundBase;
}
namespace _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer {
struct ABP_NetworkPlayer_C;
}
namespace _Game_Player_Huggy_BP_HuggyJumpscare {
struct BP_HuggyJumpscare_C;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Game_Interface_Lobby_UI_WalkableLobby {
struct UI_WalkableLobby_C;
}
namespace _Game_Gameplay_Game_BP_GameManager {
struct BP_GameManager_C;
}
namespace _Script_Playtime_Multiplayer {
struct UHandRigPackageComponent;
}
namespace _Script_Engine {
struct AnimMontage;
}
namespace _Script_Engine {
struct Character;
}
namespace _Script_Engine {
struct MaterialInstanceDynamic;
}
namespace _Script_Playtime_Multiplayer {
struct ChaseMusicPack;
}
namespace _Script_Engine {
struct DamageType;
}
namespace _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_Player {
struct BP_MeshContainer_Player_C;
}
namespace _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GrabpackCosmetic {
struct BP_MeshContainer_GrabpackCosmetic_C;
}
namespace _Game_Interface_NavSystem_Blueprints_Actors_BP_NavRepairGrabpack {
struct BP_NavRepairGrabpack_C;
}
namespace _Script_Playtime_Multiplayer {
struct SurvivorSoundPack;
}
namespace _Script_Playtime_Multiplayer {
struct PuzzleSoundPack;
}
namespace _Script_Playtime_Multiplayer {
struct AmbiencePack;
}
namespace _Script_Engine {
struct Controller;
}
namespace _Game_Base_BP_MultiplayerPlayerController {
struct BP_MultiplayerPlayerController_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct SoundAttenuation;
}
namespace _Script_Engine {
struct PlayerController;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter {
#pragma pack(push, 1)
struct BP_NetworkCharacter_C : public _Script_Playtime_Multiplayer::ANetworkCharacter {
    private: char pad_7a0[0x690]; public:
    void* get_UberGraphFrame();
    _Game_Player_TrainingDummy_BP_ZoneDetectionComponent::BP_ZoneDetectionComponent_C*& get_BP_ZoneDetectionComponent();
    _Game_Player_TrainingDummy_BP_CommsComponent::BP_CommsComponent_C*& get_BP_CommsComponent();
    _Script_Engine::SpotLightComponent*& get_SpotLightL();
    _Game_Gameplay_Interaction_BP_OutlineComponent::BP_OutlineComponent_C*& get_BP_OutlineComponent();
    _Script_Engine::SpotLightComponent*& get_SpotLightR();
    _Script_Niagara::NiagaraComponent*& get_NS_HealthAOE();
    _Game_Player_BP_RegenZone::BP_RegenZone_C*& get_BP_RegenZone();
    _Script_Playtime_Multiplayer::NavigatorIndicatorSorter*& get_NavigatorIndicatorSorter();
    _Script_Engine::ChildActorComponent*& get_BP_PlayerPOVJumpscareContainer();
    _Script_Engine::SceneComponent*& get_NavIndicatorAttachment();
    _Script_Engine::ChildActorComponent*& get_BP_MeshContainer_FirstPersonGrabpack();
    _Script_Engine::ChildActorComponent*& get_BP_MeshContainer_ModularPlayerCosmetic();
    _Script_Engine::CameraComponent*& get_Camera();
    _Script_Engine::SkeletalMeshComponent*& get_FP_Camera();
    _Script_Engine::SpringArmComponent*& get_CamArm();
    _Game_Interface_BPC_Tooltip::BPC_Tooltip_C*& get_BPC_Tooltip1();
    _Game_Interface_BPC_Tooltip::BPC_Tooltip_C*& get_BPC_Tooltip();
    _Script_Engine::SceneComponent*& get_Tooltips();
    _Script_Engine::SkeletalMeshComponent*& get_CosmeticShirt();
    _Script_Engine::SkeletalMeshComponent*& get_GrabPack_HandL();
    _Script_Engine::SkeletalMeshComponent*& get_GrabPack_HandR();
    _Script_Engine::SkeletalMeshComponent*& get_Sticker();
    _Script_Engine::SkeletalMeshComponent*& get_CosmeticMask();
    _Script_Engine::SkeletalMeshComponent*& get_CosmeticShoes();
    _Script_Engine::SkeletalMeshComponent*& get_CosmeticPants();
    _Script_Engine::SkeletalMeshComponent*& get_CosmeticHead();
    _Script_Engine::SkeletalMeshComponent*& get_CosmeticHat();
    _Script_Engine::CameraComponent*& get_CosmeticsCamera();
    _Script_Engine::SpringArmComponent*& get_CosmeticsSpringArm();
    _Script_Engine::SkeletalMeshComponent*& get_FirstPersonGrabpackGunsR();
    _Script_Engine::SkeletalMeshComponent*& get_FirstPersonGrabpackGunsL();
    _Script_Engine::SkeletalMeshComponent*& get_Hose_R();
    _Script_Engine::SkeletalMeshComponent*& get_Hose_L();
    _Script_Engine::SkeletalMeshComponent*& get_GrabpackPhysPack();
    _Script_Engine::SceneComponent*& get_RightRope();
    _Script_Engine::SceneComponent*& get_LeftRope();
    _Script_Engine::CapsuleComponent*& get_HitCapsule();
    _Script_Engine::SkeletalMeshComponent*& get_GrabPackGuns();
    _Script_Engine::BoxComponent*& get_ReviveCollision();
    _Script_AIModule::AIPerceptionStimuliSourceComponent*& get_AIPerceptionStimuliSource();
    _Script_Engine::AudioComponent*& get_HuggyChaseMusic();
    _Script_Engine::StaticMeshComponent*& get_ThirdPerson_HeldToyPart();
    _Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C*& get_BPC_NavElement();
    _Game_Interface_NavSystem_Blueprints_Components_BPC_NavSystem::BPC_NavSystem_C*& get_BPC_NavSystem();
    _Script_Engine::AudioComponent*& get_Heartbeat_Loop();
    _Script_Engine::SkeletalMeshComponent*& get_SK_Webs();
    _Script_UMG::WidgetComponent*& get_NameTag();
    _Script_Engine::SkeletalMeshComponent*& get_Shirt();
    _Script_Engine::SkeletalMeshComponent*& get_Hat();
    _Script_UMG::WidgetComponent*& get_DownWidget();
    _Script_Engine::SceneComponent*& get_HighFivePointL();
    _Script_Engine::SceneComponent*& get_HighFivePointR();
    _Script_Engine::SkeletalMeshComponent*& get_FPS_Legs();
    _Script_Engine::StaticMeshComponent*& get_GrabPack_GunR();
    _Script_Engine::StaticMeshComponent*& get_GrabPack_GunL();
    _Script_Engine::SpringArmComponent*& get_FlashLight();
    _Script_Engine::SceneComponent*& get_Pick_Up_Point();
    _Script_Engine::SpringArmComponent*& get_Pickup_Arm();
    float& get_Timeline_3_Lerp_Amount_A603532D4C48D7452A05E1B9C45442CA();
    void* get_Timeline_3__Direction_A603532D4C48D7452A05E1B9C45442CA();
    _Script_Engine::TimelineComponent*& get_Timeline_3();
    float& get_Timeline_0_Down_FE8D1880456E21D3BC74ED8A27242AF4();
    void* get_Timeline_0__Direction_FE8D1880456E21D3BC74ED8A27242AF4();
    _Script_Engine::TimelineComponent*& get_Timeline_0();
    float& get_SelfRevive_TL_Progress_5DDCD2B14B94039DBF03129E8A179B25();
    void* get_SelfRevive_TL__Direction_5DDCD2B14B94039DBF03129E8A179B25();
    _Script_Engine::TimelineComponent*& get_SelfRevive_TL();
    float& get_Timeline_1_FogDistance_AB6AC0D54F1F67BC2AB9FC8F6CF853EA();
    void* get_Timeline_1__Direction_AB6AC0D54F1F67BC2AB9FC8F6CF853EA();
    _Script_Engine::TimelineComponent*& get_Timeline_1();
    float& get_InteractingWithTimeline_Progress_2B743AAB4510002E99A90EBAF0DD4814();
    void* get_InteractingWithTimeline__Direction_2B743AAB4510002E99A90EBAF0DD4814();
    _Script_Engine::TimelineComponent*& get_InteractingWithTimeline();
    float& get_InteractedWithTimeline_Progress_CB3D860E4ADEDB7B7146DAAB9FD55F3B();
    void* get_InteractedWithTimeline__Direction_CB3D860E4ADEDB7B7146DAAB9FD55F3B();
    _Script_Engine::TimelineComponent*& get_InteractedWithTimeline();
    float& get_WebOpacityTime_Track_4B661A644643E00E44D0BDA1DCDB4658();
    void* get_WebOpacityTime__Direction_4B661A644643E00E44D0BDA1DCDB4658();
    _Script_Engine::TimelineComponent*& get_WebOpacityTime();
    float& get_SetGlitchOpacity_Track_EEBB24774033BA8597F370826D9442AB();
    void* get_SetGlitchOpacity__Direction_EEBB24774033BA8597F370826D9442AB();
    _Script_Engine::TimelineComponent*& get_SetGlitchOpacity();
    float& get_LookPitch();
    bool get_F_Pressed();
    void set_F_Pressed(bool value);
    _Game_Interface_IngameScreens_UI_DeathScreen::UI_DeathScreen_C*& get_DeathScreen();
    float& get_HP();
    bool get_Webbed();
    void set_Webbed(bool value);
    bool get_Won();
    void set_Won(bool value);
    void* get_PlayerColor();
    void* get_UserName();
    bool get_Ready();
    void set_Ready(bool value);
    float& get_AutoReviveTime();
    void* get_AutoReviveTimerHandler();
    float& get_ReviveTime();
    bool get_Dead_();
    void set_Dead_(bool value);
    void* get_CameraRotation();
    _Script_Engine::SoundBase*& get_RReturnSound();
    _Script_Engine::SoundBase*& get_RGrabSound();
    _Script_Engine::SoundBase*& get_RLaunchSound();
    _Script_Engine::AudioComponent*& get_LHandPullSound();
    _Script_Engine::AudioComponent*& get_RHandPullSound();
    void* get_DetectedTimerHandler();
    bool get_DEPREC_IsInWuggyHole_();
    void set_DEPREC_IsInWuggyHole_(bool value);
    bool get_StartedGame();
    void set_StartedGame(bool value);
    bool get_InCosmeticsMenu();
    void set_InCosmeticsMenu(bool value);
    bool get_Lobby_TransitioningCamera();
    void set_Lobby_TransitioningCamera(bool value);
    void* get_DashDirection();
    float& get_WebbedDuration();
    _Game_Player_Huggy_BP_HuggyJumpscare::BP_HuggyJumpscare_C*& get_JumpscareActorOld();
    bool get_JumpscareActive();
    void set_JumpscareActive(bool value);
    void* get_PreJumpscareControlRotation();
    bool get_PreJumpscareThirdPersonMode();
    void set_PreJumpscareThirdPersonMode(bool value);
    _Game_Interface_Lobby_UI_WalkableLobby::UI_WalkableLobby_C*& get_CachedUI_WalkableLobby();
    bool get_IsJumping();
    void set_IsJumping(bool value);
    _Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C*& get_CachedABP();
    bool get_WantsToStandUp();
    void set_WantsToStandUp(bool value);
    void* get_Right_Hand_Animations();
    void* get_Player_Animations();
    void* get_Left_Hand_Animations();
    bool get_CanEmoteAgain();
    void set_CanEmoteAgain(bool value);
    bool get_AnimPlaying();
    void set_AnimPlaying(bool value);
    float& get_BreathRechargeTime();
    float& get_AmountOfBreath();
    bool get_CanHoldBreath();
    void set_CanHoldBreath(bool value);
    bool get_HoldingBreath();
    void set_HoldingBreath(bool value);
    void* get_HoldBreathHandle();
    _Script_Engine::AudioComponent*& get_BreathSound();
    void* get_Saved_Max_Distance();
    bool get_IsAutoCarry();
    void set_IsAutoCarry(bool value);
    float& get_GrabpackRepairTime();
    _Game_Gameplay_Interaction_BP_Locker::BP_Locker_C*& get_LockerRef();
    int32_t& get_Strikes();
    bool get_Being_Carried_By_Monster();
    void set_Being_Carried_By_Monster(bool value);
    bool get_Breath_Spam_Prevention();
    void set_Breath_Spam_Prevention(bool value);
    _Script_Engine::AudioComponent*& get_OutOfBreathSound();
    float& get_SoundAttenLevel();
    void* get_LockerTimerHandle();
    _Game_Gameplay_Game_BP_GameManager::BP_GameManager_C*& get_GameManager();
    bool get_PlayerIsDetected();
    void set_PlayerIsDetected(bool value);
    float& get_PlayerIsDetectedLerp01();
    _Script_Engine::SceneComponent*& get_Player_Attach();
    void* get_AttachSocketName();
    bool get_UseJumpscares();
    void set_UseJumpscares(bool value);
    _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster::BP_AbstractJumpscareMaster_C*& get_JumpscareMasterActor();
    bool get_CrouchPressed();
    void set_CrouchPressed(bool value);
    void* get_DepositNavIndicators();
    _Script_Engine::Character*& get_Monster_Self();
    bool get_Webs_Visible_();
    void set_Webs_Visible_(bool value);
    bool get_Is_Jumpscare_Active();
    void set_Is_Jumpscare_Active(bool value);
    bool get_CachedPersp();
    void set_CachedPersp(bool value);
    _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C*& get_CharInteractingWithThis();
    void* get_NetInteractedWithState();
    void* get_NetInteractingState();
    void* get_LocalInteractingState();
    _Script_Engine::SoundBase*& get_LLaunchSound();
    _Script_Engine::SoundBase*& get_LReturnSound();
    _Script_Engine::SoundBase*& get_LGrabSound();
    void* get_OriginalCamLocation();
    void* get_UncrouchCamLocation();
    void* get_CrouchCamLocation();
    void* get_Toggled_Third_Person_During_Jumpscare();
    _Script_Engine::AudioComponent*& get_RevivingSound();
    _Script_Engine::AudioComponent*& get_FixingSound();
    void* get_On_Started_Jumpscare_Animation();
    bool get_InMainMenu_();
    void set_InMainMenu_(bool value);
    void* get_HealthAOENotVisible();
    _Script_Engine::MaterialInstanceDynamic*& get_NightmareFog();
    bool get_HasEnteredWuggyHole();
    void set_HasEnteredWuggyHole(bool value);
    _Script_Playtime_Multiplayer::ANetworkCharacter*& get_HealingChar();
    void* get_EmoteRequested();
    bool get_CanInteract();
    void set_CanInteract(bool value);
    void* get_SpawnToyLockerHandle();
    _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_Player::BP_MeshContainer_Player_C*& get_Player_Mesh_Container();
    _Game_Gameplay_Character_Cosmetics_Containers_BP_MeshContainer_GrabpackCosmetic::BP_MeshContainer_GrabpackCosmetic_C*& get_First_Person_Grabpack_Mesh_Container();
    void* get_Footprints();
    void* get_FootstepRemovalTimer();
    _Game_Interface_NavSystem_Blueprints_Actors_BP_NavRepairGrabpack::BP_NavRepairGrabpack_C*& get_RepairGrabpackIndicator();
    bool get_IsScoreboardOpen();
    void set_IsScoreboardOpen(bool value);
    bool get_CanToggleThirdPerson();
    void set_CanToggleThirdPerson(bool value);
    float& get_LockerTime();
    float& get_MaxLockerTime();
    float& get_LockerTime_Refresh_Multiplier();
    _Script_Playtime_Multiplayer::SurvivorSoundPack*& get_SurvivorSounds();
    _Script_Playtime_Multiplayer::PuzzleSoundPack*& get_PuzzleSounds_0();
    _Script_Playtime_Multiplayer::AmbiencePack*& get_AmbientSoundPack();
    _Script_Playtime_Multiplayer::ChaseMusicPack*& get_ChaseSoundPack();
    bool get_canSeeMonster();
    void set_canSeeMonster(bool value);
    bool get_isChaseMusicActive();
    void set_isChaseMusicActive(bool value);
    int32_t& get_PuzzleSoundPackID();
    int32_t& get_SurvivorSoundPackID();
    float& get_InteractionDistance();
    float& get_MaxInteractionDistance();
    void* get_EnteredMonsterDetection();
    void* get_EscapedMonsterDetection();
    _Game_Gameplay_Character_Jumpscares_BP_PlayerPOVJumpscareContainer::BP_PlayerPOVJumpscareContainer_C*& get_JumpscareContainer();
    void* get_MapNameToLobbyReference();
    void* get_PlayerEnded();
    _Script_Engine::CurveFloat*& get_LookPitchCurve();
    _Script_Engine::CurveFloat*& get_LookYawCurve();
    void* get_Object_Types();
    _Game_Interface_NavSystem_Blueprints_Actors_BP_NavBaseActor::BP_NavBaseActor_C*& get_Comm();
    void* get_CommsRequested();
    _Script_Engine::SpotLightComponent*& get_RightSpotlight();
    _Script_Engine::SpotLightComponent*& get_LeftSpotlight();
    int32_t& get_FearLevel();
    void* get_ProneTimer();
    float& get_CachedCamHeight();
    float& get_TargetCamHeight();
    float& get_CachedCamHeight_1();
    float& get_NewVar_0();
    void* get_Carry_Offset();
    void* get_Carry_Rotation_Offset();
    _Script_Engine::Controller*& get_ControllerRef();
    void* get_MonsterDetectionTimer();
    void* get_Temp();
    bool get_LivingNightmare();
    void set_LivingNightmare(bool value);
    static _Script_CoreUObject::Class* static_class();
    void Auth_Get_Matching_Controller(_Game_Base_BP_MultiplayerPlayerController::BP_MultiplayerPlayerController_C*& PlayerController);
    void GetMatchingPlayerState(_Script_Engine::PlayerState*& PlayerState);
    void GetFootstepAttenuation(_Script_Engine::SoundAttenuation*& Attenuation);
    void OnRep_FearLevel();
    void MonsterProximityCheck();
    void SetDefaultPlayerVisibility();
    void LoadAndSetSoundPacks();
    void OnRep_PuzzleSoundPackID();
    bool CanPlayerCrouch();
    void Func_extractedFromWuggyHole();
    void Func_imprisonedInWuggyHole();
    void Get_Footstep_Volume_Multiplier(float& Volume);
    void OnRep_SurvivorSoundPackID();
    void GetPrompt(void*& PromptPrefix, void*& PromptSuffix, bool& CanPrompt);
    void Update_Cosmetics(_Script_Playtime_Multiplayer::PresetSlot Cosmetic);
    void IsPlayerOnTrain(bool& Value);
    void Random_Player_Movement(bool Enabled);
    void Get_Monster_Jumpscare_Origin(_Script_Engine::Character* Monster, _Script_CoreUObject::Vector& Location);
    void SetGeneralVisibility(bool FirstPerson_, bool VisibleToOthers_);
    void SetFirstPersonVisibility(bool Hide_);
    void SetThirdPersonVisibility(bool Hide_);
    void Sabotage_LivingNightmare(float Duration);
    void OnRep_NetInteractingState();
    void IsBeingInteractedWith(bool& InteractedWith_);
    void Owner_BeginInteraction(_Script_Playtime_Multiplayer::ANetworkCharacter* InteractingActor, bool& CanContinueInteraction, float& ContinueInteractionDuration);
    void Authority_BeginInteraction(_Script_Playtime_Multiplayer::ANetworkCharacter* InteractingActor, bool& CanContinueInteraction, float& ContinueInteractionDuration);
    void OnRep_Strikes();
    void Get_All_Character_Meshes(void*& Components);
    void OnRep_StartedGame();
    void GetOwningPlayerController(_Script_Engine::PlayerController*& Controller, bool& bSuccess);
    void Sabotage_NoPack(float Duration);
    void Sabotage_NavIndicators(float Duration);
    void Sabotage_AutoCarry(float Duration);
    void GetABP(_Game_World_Geometry_Characters_PlayerCharacter_Animations_ABP_NetworkPlayer::ABP_NetworkPlayer_C*& ABP);
    void IsPlayerMoving(bool& IsMoving);
    void Toggle_Third_Person(bool Use_Manual_Input, bool Manual_Input);
    void Can_Play_Game(bool& Status);
    _Script_Engine::StaticMeshComponent* BP_GetHeldToyPart0();
    _Script_Engine::CameraComponent* BP_GetCameraComponent0();
    _Script_Engine::SkeletalMeshComponent* BP_GetThirdPersonMesh0();
    void ManageHands(_Script_Playtime_Multiplayer::UHandRigPackageComponent* self2, void* HSC);
    void DoHandSounds(void* Limb, void* HSC);
    void BP_OnRep_HeldToyPartIndex0();
    void ManageThirdPersonHands(void* Limb, void* HandStateChange);
    void OnRep_Webbed();
    bool CanStandUp(_Script_Engine::Actor*& HitActor);
    void OnRep_Username();
    void OnRep_PlayerColor();
    void Move_Player(_Script_CoreUObject::Vector WorldDirection, float ScaleValue);
    void ToggleDownWidget(bool Condition);
    void SetDownWidgetName();
    void SetPlayerColor();
    void GetPlayerNumber(int32_t& Array_Index);
    void LookAround(float Val, bool Pitch);
    void ToggleRun(bool Running);
    bool IsPlayerSprinting();
    bool IsPlayerCrouching();
    void ShakeCamera(void* Shake, float Scale);
    void MovementCameraShake();
    void UserConstructionScript();
    void Timeline_3__FinishedFunc();
    void Timeline_3__UpdateFunc();
    void WebOpacityTime__FinishedFunc();
    void WebOpacityTime__UpdateFunc();
    void InteractingWithTimeline__FinishedFunc();
    void InteractingWithTimeline__UpdateFunc();
    void InteractedWithTimeline__FinishedFunc();
    void InteractedWithTimeline__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void SelfRevive_TL__FinishedFunc();
    void SelfRevive_TL__UpdateFunc();
    void SetGlitchOpacity__FinishedFunc();
    void SetGlitchOpacity__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void InpActEvt_Roll_K2Node_InputActionEvent_12(_Script_InputCore::Key Key);
    void InpActEvt_Crouch_K2Node_InputActionEvent_11(_Script_InputCore::Key Key);
    void InpActEvt_Crouch_K2Node_InputActionEvent_10(_Script_InputCore::Key Key);
    void InpActEvt_Run_K2Node_InputActionEvent_9(_Script_InputCore::Key Key);
    void InpActEvt_Run_K2Node_InputActionEvent_8(_Script_InputCore::Key Key);
    void InpActEvt_Jump_K2Node_InputActionEvent_7(_Script_InputCore::Key Key);
    void InpActEvt_Jump_K2Node_InputActionEvent_6(_Script_InputCore::Key Key);
    void InpActEvt_Emote_K2Node_InputActionEvent_5(_Script_InputCore::Key Key);
    void InpActEvt_ReadyUp_K2Node_InputActionEvent_4(_Script_InputCore::Key Key);
    void InpActEvt_ThirdPerson_K2Node_InputActionEvent_3(_Script_InputCore::Key Key);
    void InpActEvt_Interact_K2Node_InputActionEvent_2(_Script_InputCore::Key Key);
    void InpActEvt_Interact_K2Node_InputActionEvent_1(_Script_InputCore::Key Key);
    void InpActEvt_Customize_K2Node_InputActionEvent_0(_Script_InputCore::Key Key);
    void Switch_Ambience();
    void SwitchTense();
    void SwitchChase();
    void DetectedByMonster(bool Value);
    void NotDetected();
    void Multicast_PlayLandSound(void* Material);
    void PlayLandSounds(void* Surface_type);
    void NetworkSafe_PlayLandSounds(void* Surface_type);
    void OnJumped();
    void PlayJumpSound();
    void Multicast_Roll_Sound();
    void PlayBrokenHandAttemptThings(bool LHand);
    void PlayRevivingSound(bool Play_);
    void PlayFixingSound(bool Play_);
    void ChangeCamHeight(float TargetCamHeight);
    void UnProne();
    void GoProne();
    void AdjustCam();
    void BP_ShowIdleWarning();
    void BP_KickPlayer();
    void BP_IdleKickReset();
    void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
    void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
    void FootprintOnDestroyed(_Script_Engine::Actor* DestroyedActor);
    void RemoveFootprints();
    void SpawnFootprint(_Script_CoreUObject::Vector Location, _Script_CoreUObject::Rotator Rotation);
    void TryUncrouch();
    void HitByWeb();
    void OnLanded(_Script_Engine::HitResult& Hit);
    void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_3(float AxisValue);
    void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_2(float AxisValue);
    void InpAxisEvt_LookYaw_K2Node_InputAxisEvent_1(float AxisValue);
    void InpAxisEvt_LookPitch_K2Node_InputAxisEvent_0(float AxisValue);
    void MultiOuttaBreath();
    void MultiBreathing(bool StartBreathing_);
    void HoldBreathClient(bool Holding_);
    void HoldBreathServer(bool Holding_);
    void CallHoldBreath();
    void Multicast_Web_Sound();
    void EventShowWebs(bool bNewVisibility);
    void BP_FireComm(int32_t CommToFire);
    void ServerSpawnCommIndicator(void* Type);
    void MulticastSpawnComm(void* InputPin);
    void SpawnCommIndicator(void* CommType);
    void Multicast_Emote(int32_t Index);
    void Server_Emote(int32_t Index);
    void Emote(int32_t Index);
    void Client_Emote(int32_t Index);
    void ServerToggleLight();
    void MulticastToggleLight();
    void BndEvt__BP_NetworkCharacter_RightHandPkg_K2Node_ComponentBoundEvent_1_HandStateChangeSignature__DelegateSignature(_Script_Playtime_Multiplayer::UHandRigPackageComponent* Pkg, void* HandStateChange);
    void BndEvt__BP_NetworkCharacter_LeftHandPkg_K2Node_ComponentBoundEvent_0_HandStateChangeSignature__DelegateSignature(_Script_Playtime_Multiplayer::UHandRigPackageComponent* Pkg, void* HandStateChange);
    void TryReady(bool Ready);
    void Owner_InteractingToCancelled();
    void Owner_InteractingToFixing();
    void Owner_InteractingToReviving();
    void Owner_InteractingToIdle();
    void Owner_InteractingTransitionState(void* NewState);
    void Authority_IWSToCancelled();
    void Authority_IWSToFixing();
    void Authority_IWSToReviving();
    void Authority_IWSToIdle();
    void Authority_TransitionInteractedWithState(void* NewState);
    void Authority_EndInteraction(_Script_Playtime_Multiplayer::ANetworkCharacter* InteractingActor);
    void OwnerFinishedInteractingWith();
    void Owning_SetInteractInProgress(bool InProgress);
    void StartInteractFromClient(bool ThirdPerson_, void* InputPin);
    void CancelInteractFromClient();
    void SetInteractUI(bool Active);
    void CancelInteract();
    void BP_SpawnDroppedToyPart0(int32_t ToyPartIndex, _Script_CoreUObject::Vector CustomLocation);
    void Multicast_SetNameTagVisibility(bool Visible);
    void ReceiveUnpossessed(_Script_Engine::Controller* OldController);
    void IsOutOfMonset();
    void DecrementFear();
    void IncrementFear();
    void BndEvt__BP_NetworkCharacter_PerceptionComponent_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature(_Script_Engine::Actor* Actor, _Script_AIModule::AIStimulus Stimulus);
    void ToggleCosmetics(bool Force_off);
    void BP_OnRep_Preset();
    void ReceiveEndPlay(void* EndPlayReason);
    void PoitnsTimerEvent();
    void StartPointsTimer();
    void ReceivePossessed(_Script_Engine::Controller* NewController);
    void NewLoadCosmetics();
    void SetToyDepositIndicators(bool On_);
    void MultiShowWin(int32_t PlayerCount);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void Server_SetSoundPackIDs(int32_t PuzzleSoundPackID, int32_t SurvivorSoundPackID);
    void Client_UpdateChargeNumberUI(int32_t RollCharges);
    void UpdateChargeNumberUI();
    void Client_ShowRollRecharge();
    void Authority_StartOnTrain(_Script_CoreUObject::Transform& NewTransform);
    void RollSound();
    void Spawn_Jumpscare_Light();
    void ResetCharacter(bool JustDestroyUI);
    void ResetViewTarget(bool JustDestroyUI);
    void EventFixNameTag();
    void NetSetPlayerName(void* UserName);
    void NetSetPlayerColor();
    void Anim_Set_Interrupted_Locker();
    void Disable_Player_Mesh_Shadows(bool Enabled_);
    void Anim_Set_Exiting_Locker();
    void Anim_Set_Entering_Locker();
    void Raise_Lower_Hands(bool Lowered);
    void LockerTakeout();
    void ExitLockerFinish();
    void EnterLockerFinish();
    void EnterExitLockerServer(_Game_Gameplay_Interaction_BP_Locker::BP_Locker_C* LockerRef);
    void Multi_ShowHidePlayer(bool Show_);
    void EnterExitLockerClient(_Game_Gameplay_Interaction_BP_Locker::BP_Locker_C* LockerRef);
    void SpawnToyLocker();
    void ChangeClientInput(bool ShouldDisable);
    void EnableClientInput();
    void StopUIDeathTimers();
    void StartTempInvulnerability(float Seconds);
    void CreateHatchSpectator();
    void ReturnController();
    void End_Jumpscare_Montage();
    void On_Started_Jumpscare();
    void Ended_Jumpscare();
    void Play_Jumpscare_Montage(_Script_Engine::AnimMontage* AnimMontage);
    void BP_OnRep_PlayerNeedsRevived0();
    void StopCarryUI();
    void StartHookUI();
    void StartCarryUI();
    void EndAutoReviveUI();
    void CancelAutoReviveUI();
    void StartAutoReviveUI();
    void AutoRevive();
    void ServerOnly_EvaluateAutoReviveTimer();
    void Client_UpdateHeatlhUI();
    void MakeBoogieBot();
    void OnShieldChanged(bool PunchingBagPerkShield);
    void Owner_PlayJumpscareVisuals(void* Character_Type, _Script_Playtime_Multiplayer::Monster* Monster_Actor);
    void BP_GetDropped0();
    void BP_GetPickedUp0(_Script_Playtime_Multiplayer::Monster* Monster);
    void SetHealthVisibility(bool IsVisible);
    void JumpscareInterruption();
    void SetHealingAuraVisibility(bool Visible_, _Script_Playtime_Multiplayer::ANetworkCharacter* HealingChar);
    void BP_OnRep_Health0();
    void ShowStrikes(int32_t Strikes);
    void BP_PlayDamageFX0();
    void BP_TakeAnyDamageWhileAlive0(_Script_Engine::Actor* DamagedActor, float Damage, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser, bool bKillingHit);
    void Owning_Kill();
    void Kill();
    void EventExtractedFromWuggyHole();
    void EventImprisonedInWuggyHole();
    void EventJumpscare(_Script_Engine::Character* Monster, _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C* Character, float Distance_From_Monster, float Duration, float Blend_Out, bool Enough_Space_for_Jumpscare, void* Monster_Type);
    void Authority_GetHealed();
    void ClientResetDeathScreen();
    void ShowDeathScreen();
    void PickedUpThirdPerson();
    void ClientToggleThirdTrue();
    void ReviveThirdPerson();
    void ClientSetCachedPersp();
    void Server_SetLivingNightmare(float Duration);
    void Client_CheckHatchIndicators();
    void TrySendToWuggyHole();
    void OnRep_GrabpackBroken0();
    void End_Living_Nightmare(bool Force_);
    void Client_Sabotage_LivingNightmare(float Duration);
    void Event_Fix_Grabpack();
    void Event_Try_Send_To_Wuggy_Hole();
    void Event_Sabotage_AutoCarry(float Duration);
    void Event_Sabotage_NavIndicators(float Duration);
    void ExecuteUbergraph_BP_NetworkCharacter(int32_t EntryPoint);
    void CommsRequested__DelegateSignature();
    void PlayerEnded__DelegateSignature();
    void EscapedMonsterDetection__DelegateSignature();
    void EnteredMonsterDetection__DelegateSignature();
    void EmoteRequested__DelegateSignature();
    void On_Started_Jumpscare_Animation__DelegateSignature();
    void Toggled_Third_Person_During_Jumpscare__DelegateSignature();
}; // Size: 0xe30
#pragma pack(pop)
}
