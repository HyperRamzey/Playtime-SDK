#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Playtime_Multiplayer\Hatch.hpp"
namespace _Game_Gameplay_Interaction_BP_OutlineComponent {
struct BP_OutlineComponent_C;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct BoxComponent;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Game_Interface_NavSystem_Blueprints_Actors_BP_NavReviveTooltip {
struct BP_NavReviveTooltip_C;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
struct SplineComponent;
}
namespace _Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet {
struct BPC_HandMagnet_C;
}
namespace _Script_Engine {
struct TimelineComponent;
}
namespace _Game_Interface_NavSystem_Blueprints_Actors_BP_NavHookIndicator {
struct BP_NavHookIndicator_C;
}
namespace _Game_Interface_NavSystem_Blueprints_Actors_BP_NavOpenDoor {
struct BP_NavOpenDoor_C;
}
namespace _Game_Interface_NavSystem_Blueprints_Actors_BP_NavDoorRevive {
struct BP_NavDoorRevive_C;
}
namespace _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter {
struct BP_NetworkCharacter_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
struct ANetworkHand;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Script_Playtime_Multiplayer {
struct ANetworkCharacter;
}
namespace _Game_Gameplay_Interaction_Sewers_BP_DualSplineFollower {
struct BP_DualSplineFollower_C;
}
namespace _Game_Gameplay_Interaction_Sewers_BP_WormholeEntrance {
#pragma pack(push, 1)
struct BP_WormholeEntrance_C : public _Script_Playtime_Multiplayer::Hatch {
    private: char pad_2f0[0x1b8]; public:
    void* get_UberGraphFrame();
    _Game_Gameplay_Interaction_BP_OutlineComponent::BP_OutlineComponent_C*& get_BP_OutlineComponent();
    _Script_Engine::BoxComponent*& get_DepositBox();
    _Script_Engine::StaticMeshComponent*& get_HandObfuscator();
    _Script_Engine::StaticMeshComponent*& get_SM_DoorLid();
    _Script_Engine::SceneComponent*& get_DoorHinge();
    _Script_Engine::StaticMeshComponent*& get_SM_DoorBase();
    _Script_Engine::StaticMeshComponent*& get_GreenBorder9();
    _Script_Engine::SceneComponent*& get_Scene8();
    _Script_Engine::StaticMeshComponent*& get_GreenBorder8();
    _Script_Engine::SceneComponent*& get_Scene7();
    _Script_Engine::StaticMeshComponent*& get_GreenBorder3();
    _Script_Engine::SceneComponent*& get_Scene2();
    _Script_Engine::StaticMeshComponent*& get_GreenBorder1();
    _Script_Engine::SceneComponent*& get_Scene();
    _Script_Engine::SceneComponent*& get_GreenOutline();
    _Script_Engine::BoxComponent*& get_Box1();
    _Script_Engine::SceneComponent*& get_NavScene();
    _Script_Engine::StaticMeshComponent*& get_Cube4();
    _Script_Engine::SplineComponent*& get_CMOVE_Spline_Pull();
    _Script_Engine::SkeletalMeshComponent*& get_Hand();
    _Script_Engine::BoxComponent*& get_ExtractionmagnetCollision();
    _Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& get_ExtractionMagnet();
    _Script_Engine::SplineComponent*& get_CMOVE_Spline();
    _Script_Engine::SceneComponent*& get_DropPoint();
    _Script_Engine::StaticMeshComponent*& get_Door();
    _Script_Engine::SceneComponent*& get_Hinge();
    _Script_Engine::StaticMeshComponent*& get_Darkness();
    _Script_Engine::SceneComponent*& get_Stationary();
    float& get_HitHatchTimeline_NewTrack_0_BFC43FFF436008CE8474B28D58C2DBB6();
    void* get_HitHatchTimeline__Direction_BFC43FFF436008CE8474B28D58C2DBB6();
    _Script_Engine::TimelineComponent*& get_HitHatchTimeline();
    float& get_Spline_Timeline_In_NewTrack_0_DB0323984144D38502CCC88809F02900();
    void* get_Spline_Timeline_In__Direction_DB0323984144D38502CCC88809F02900();
    _Script_Engine::TimelineComponent*& get_Spline_Timeline_In();
    float& get_Spline_Timeline_Out_NewTrack_0_429EA26545AD27EBC11BC69784DF3DCD();
    void* get_Spline_Timeline_Out__Direction_429EA26545AD27EBC11BC69784DF3DCD();
    _Script_Engine::TimelineComponent*& get_Spline_Timeline_Out();
    _Game_Interface_NavSystem_Blueprints_Actors_BP_NavHookIndicator::BP_NavHookIndicator_C*& get_NavIndicator();
    _Game_Interface_NavSystem_Blueprints_Actors_BP_NavOpenDoor::BP_NavOpenDoor_C*& get_OpenNavIndicator();
    _Game_Interface_NavSystem_Blueprints_Actors_BP_NavDoorRevive::BP_NavDoorRevive_C*& get_DoorReviveIndicator();
    float& get_Progress();
    _Game_Interface_NavSystem_Blueprints_Actors_BP_NavReviveTooltip::BP_NavReviveTooltip_C*& get_ReviveTooltip();
    void* get_SpawnTooltipTimer();
    _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C*& get_CachedReviver();
    float& get_ReviveTime();
    void* get_OnDroppedInHole();
    void* get_OpenRotation();
    void* get_ClosedRotation();
    void* get_OnPulledFromHole();
    void* get_BoogiebotSpawnPoints();
    bool get_IgnoreBoogiebotSpawnDistance();
    void set_IgnoreBoogiebotSpawnDistance(bool value);
    void* get_StrikeTimer();
    bool get_CanHitHatch();
    void set_CanHitHatch(bool value);
    static _Script_CoreUObject::Class* static_class();
    void GetHandFromReviver(_Script_Playtime_Multiplayer::ANetworkHand*& Hand);
    bool Reviver_Is_Local();
    void OnRep_Progress();
    void ViewProgress();
    void UserConstructionScript();
    void Spline_Timeline_In__FinishedFunc();
    void Spline_Timeline_In__UpdateFunc();
    void Spline_Timeline_Out__FinishedFunc();
    void Spline_Timeline_Out__UpdateFunc();
    void HitHatchTimeline__FinishedFunc();
    void HitHatchTimeline__UpdateFunc();
    void Multicast_Success_Reviver_Tooltip();
    void Multicast_Start_Reviver_Tooltip();
    void Net_DetachHands();
    void BndEvt__BP_WormholeEntrance_ExtractionMagnet_K2Node_ComponentBoundEvent_0_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange);
    void ReviveSuccess();
    void ShowReviveIndicator(bool Shown_);
    void MonsterShowNavIndicator(bool Shown_);
    void BndEvt__BP_WormholeEntrance_DepositBox_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void BP_MakeBoogieBot0(_Script_Playtime_Multiplayer::ANetworkCharacter* Player);
    void BP_ShowOpenHatchIndicator0(bool Shown);
    void BP_PlayerFuncImprisonedInWuggyHole0(_Script_Playtime_Multiplayer::ANetworkCharacter* Player);
    void Multicast_PlayerImprisoned(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C* NewParam);
    void Multicast_Cancel_Reviver_Tooltip();
    void Multicast_Spawn_Reviver_Tooltip();
    void ReceiveTick(float DeltaSeconds);
    void StartSplineIn();
    void StartSplineOut();
    void Multicast_DetachHands();
    void BP_SetHingeRotation0(float Progress);
    void ReleasePlayer();
    void AddStrike();
    void HitHatch();
    void PauseTimer();
    void UnpauseTimer();
    void ExecuteUbergraph_BP_WormholeEntrance(int32_t EntryPoint);
    void OnPulledFromHole__DelegateSignature(_Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C* Revived_Player);
    void OnDroppedInHole__DelegateSignature(_Game_Gameplay_Interaction_Sewers_BP_DualSplineFollower::BP_DualSplineFollower_C* DSF);
}; // Size: 0x4a8
#pragma pack(pop)
}
