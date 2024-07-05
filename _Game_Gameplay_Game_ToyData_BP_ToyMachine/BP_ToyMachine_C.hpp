#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Gameplay_Puzzles_BP_MP_Puzzle_Trigger\BP_MP_Puzzle_Trigger_C.hpp"
namespace _Game_Interface_BPC_Tooltip {
struct BPC_Tooltip_C;
}
namespace _Script_Engine {
struct SphereComponent;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct AudioComponent;
}
namespace _Script_Engine {
struct BoxComponent;
}
namespace _Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet {
struct BPC_HandMagnet_C;
}
namespace _Script_AIModule {
struct AIPerceptionStimuliSourceComponent;
}
namespace _Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement {
struct BPC_NavElement_C;
}
namespace _Script_Engine {
struct PointLightComponent;
}
namespace _Script_Engine {
struct ParticleSystemComponent;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_Engine {
struct TimelineComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct StaticMesh;
}
namespace _Game_Gameplay_Game_ToyData_BP_ToyMachine {
#pragma pack(push, 1)
struct BP_ToyMachine_C : public _Game_Gameplay_Puzzles_BP_MP_Puzzle_Trigger::BP_MP_Puzzle_Trigger_C {
    private: char pad_260[0x240]; public:
    void* get_UberGraphFrame0();
    _Script_Engine::SkeletalMeshComponent*& get_Hand7();
    _Script_Engine::BoxComponent*& get_Box7();
    _Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& get_BPC_HandMagnet7();
    _Script_Engine::BoxComponent*& get_Box5();
    _Script_Engine::SkeletalMeshComponent*& get_Hand5();
    _Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& get_BPC_HandMagnet5();
    _Script_Engine::SkeletalMeshComponent*& get_Hand3();
    _Script_Engine::BoxComponent*& get_Box3();
    _Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& get_BPC_HandMagnet3();
    _Script_Engine::SkeletalMeshComponent*& get_Hand1();
    _Script_Engine::BoxComponent*& get_Box1();
    _Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& get_BPC_HandMagnet1();
    _Script_Engine::AudioComponent*& get_Audio();
    _Script_Engine::SphereComponent*& get_SecondaryObjectiveVolume();
    _Script_AIModule::AIPerceptionStimuliSourceComponent*& get_AIPerceptionStimuliSource();
    _Game_Interface_BPC_Tooltip::BPC_Tooltip_C*& get_BPC_Tooltip();
    _Script_Engine::SkeletalMeshComponent*& get_Hand6();
    _Script_Engine::SkeletalMeshComponent*& get_Hand4();
    _Script_Engine::SkeletalMeshComponent*& get_Hand2();
    _Script_Engine::SkeletalMeshComponent*& get_Hand0();
    _Script_Engine::SceneComponent*& get_Handle3();
    _Script_Engine::BoxComponent*& get_Box6();
    _Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& get_BPC_HandMagnet6();
    _Script_Engine::BoxComponent*& get_Box4();
    _Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& get_BPC_HandMagnet4();
    _Script_Engine::SceneComponent*& get_Handle2();
    _Game_Interface_NavSystem_Blueprints_Components_BPC_NavElement::BPC_NavElement_C*& get_BPC_NavElement();
    _Script_Engine::BoxComponent*& get_Box2();
    _Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& get_BPC_HandMagnet2();
    _Script_Engine::SceneComponent*& get_Handle1();
    _Script_Engine::BoxComponent*& get_Box0();
    _Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& get_BPC_HandMagnet0();
    _Script_Engine::SceneComponent*& get_Handle();
    _Script_Engine::PointLightComponent*& get_PointLight7();
    _Script_Engine::PointLightComponent*& get_PointLight6();
    _Script_Engine::PointLightComponent*& get_PointLight5();
    _Script_Engine::PointLightComponent*& get_PointLight4();
    _Script_Engine::PointLightComponent*& get_PointLight3();
    _Script_Engine::PointLightComponent*& get_PointLight2();
    _Script_Engine::PointLightComponent*& get_PointLight1();
    _Script_Engine::PointLightComponent*& get_PointLight();
    _Script_Engine::ParticleSystemComponent*& get_P_Mist();
    _Script_Engine::StaticMeshComponent*& get_Pipe();
    _Script_Engine::StaticMeshComponent*& get_OuterPipe();
    _Script_Engine::StaticMeshComponent*& get_ToyPart01();
    _Script_Engine::SkeletalMeshComponent*& get_SkeletalMesh();
    _Script_Engine::StaticMeshComponent*& get_ToyPart06();
    _Script_Engine::StaticMeshComponent*& get_ToyPart05();
    _Script_Engine::StaticMeshComponent*& get_ToyPart04();
    _Script_Engine::StaticMeshComponent*& get_ToyPart03();
    _Script_Engine::StaticMeshComponent*& get_ToyPart02();
    _Script_Engine::StaticMeshComponent*& get_ToyMachineMesh();
    float& get_PullTimeline_Alpha_3E00CAD342B3780303EC5AA72C277556();
    void* get_PullTimeline__Direction_3E00CAD342B3780303EC5AA72C277556();
    _Script_Engine::TimelineComponent*& get_PullTimeline();
    float& get_ToyUp_Scale_2A98A20A44EFF04FB7B4188CB7490CB1();
    float& get_ToyUp_Track_2A98A20A44EFF04FB7B4188CB7490CB1();
    void* get_ToyUp__Direction_2A98A20A44EFF04FB7B4188CB7490CB1();
    _Script_Engine::TimelineComponent*& get_ToyUp();
    float& get_ToyAdd_Track_B36DF1884016C5196C64B0AD548D421D();
    void* get_ToyAdd__Direction_B36DF1884016C5196C64B0AD548D421D();
    _Script_Engine::TimelineComponent*& get_ToyAdd();
    void* get_PartsAdded();
    bool get_PipeGrabbable();
    void set_PipeGrabbable(bool value);
    int32_t& get_PullSpeed();
    bool get_TimelineIsUpdating();
    void set_TimelineIsUpdating(bool value);
    float& get_TargetTimelineAlpha();
    float& get_PullTime();
    float& get_Delta();
    float& get_Lerped_Timeline_Alpha();
    float& get_NetLerpSpeed();
    void* get_OnAddToyPart();
    void* get_OnPipeConnected();
    void* get_PipeTimerHandle();
    int32_t& get_NumHandsPulling();
    static _Script_CoreUObject::Class* static_class();
    void OnRep_NumHandsAttached();
    void EvaluateHandsObjective();
    void EvaluateHands();
    void OnRep_PipeGrabbable();
    void MakePipeGrabbable();
    void OnRep_PartsAdded();
    void AddToyPart(int32_t ToyIndex, _Script_Engine::StaticMesh* Mesh);
    bool AreAllPartsAdded();
    void ClearToyParts();
    void ToyAdd__FinishedFunc();
    void ToyAdd__UpdateFunc();
    void ToyUp__FinishedFunc();
    void ToyUp__UpdateFunc();
    void PullTimeline__FinishedFunc();
    void PullTimeline__UpdateFunc();
    void PlayToyAddAnimation();
    void PlayToyUpAnimation();
    void ReceiveBeginPlay();
    void MultiChangeObjective(void* NewObjective);
    void MultiSetIsUse(bool IsUse);
    void Set_Pull_Speed_Timeline(int32_t PullSpeed);
    void ReceiveTick(float DeltaSeconds);
    void Multicast_IncrementStat();
    void IsPlayerNearby();
    void ConnectPipe();
    void BndEvt__BP_ToyMachine_BPC_HandMagnet0_K2Node_ComponentBoundEvent_0_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange);
    void BndEvt__BP_ToyMachine_BPC_HandMagnet1_K2Node_ComponentBoundEvent_1_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange);
    void BndEvt__BP_ToyMachine_BPC_HandMagnet2_K2Node_ComponentBoundEvent_2_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange);
    void BndEvt__BP_ToyMachine_BPC_HandMagnet3_K2Node_ComponentBoundEvent_3_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange);
    void Evaluate_Sounds();
    void BndEvt__BP_ToyMachine_BPC_HandMagnet1_K2Node_ComponentBoundEvent_4_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange);
    void BndEvt__BP_ToyMachine_BPC_HandMagnet3_K2Node_ComponentBoundEvent_5_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange);
    void BndEvt__BP_ToyMachine_BPC_HandMagnet7_K2Node_ComponentBoundEvent_6_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange);
    void BndEvt__BP_ToyMachine_BPC_HandMagnet5_K2Node_ComponentBoundEvent_7_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange);
    void EnableMagnetCollision(int32_t Index, void* AttachmentState);
    void ExecuteUbergraph_BP_ToyMachine(int32_t EntryPoint);
    void OnPipeConnected__DelegateSignature();
    void OnAddToyPart__DelegateSignature();
}; // Size: 0x4a0
#pragma pack(pop)
}
