#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_CableComponent {
struct CableComponent;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_Engine {
struct BoxComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter {
struct BP_NetworkCharacter_C;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet {
struct BPC_HandMagnet_C;
}
namespace _Script_Engine {
struct TimelineComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Script_CoreUObject {
struct Vector;
}
namespace _Game_Gameplay_Puzzles_Triggers_BP_WireConnect {
#pragma pack(push, 1)
struct BP_WireConnect_C : public _Script_Engine::Actor {
    private: char pad_220[0xd8]; public:
    void* get_UberGraphFrame();
    _Script_Engine::StaticMeshComponent*& get_StaticMesh1();
    _Script_Engine::SceneComponent*& get_ConnectPoint();
    _Script_Engine::BoxComponent*& get_ConnectionTrigger();
    _Script_Engine::SkeletalMeshComponent*& get_HandPos();
    _Script_CableComponent::CableComponent*& get_Cable();
    _Script_Engine::SceneComponent*& get_Connection();
    _Script_Engine::SceneComponent*& get_Scene();
    _Script_Engine::SceneComponent*& get_Mover();
    _Script_Engine::BoxComponent*& get_Trigger();
    _Script_Engine::StaticMeshComponent*& get_ConnectionColor();
    _Game_Gameplay_Interaction_ModularGrabpack_BPC_HandMagnet::BPC_HandMagnet_C*& get_BPC_HandMagnet();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    float& get_TL_MoveEnd_Alpha_F850058E44BCEE484F3FDDA4F65E4931();
    void* get_TL_MoveEnd__Direction_F850058E44BCEE484F3FDDA4F65E4931();
    _Script_Engine::TimelineComponent*& get_TL_MoveEnd();
    bool get_Connected();
    void set_Connected(bool value);
    bool get_Grabbed();
    void set_Grabbed(bool value);
    void* get_StartRotation();
    _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C*& get_Player();
    bool get_WireType();
    void set_WireType(bool value);
    bool get_ConnectionType();
    void set_ConnectionType(bool value);
    void* get_OnConnected();
    void* get_EndLocation();
    void* get_WireColor();
    void* get_OnWireSetup();
    void* get_OtherWires();
    static _Script_CoreUObject::Class* static_class();
    void OnRep_Connected();
    void OnRep_WireColor();
    void OnRep_EndLocation();
    void SetGrabbed(bool Value);
    void SetConnected(bool Value, bool OnBegin);
    void TL_MoveEnd__FinishedFunc();
    void TL_MoveEnd__UpdateFunc();
    void BndEvt__BP_WireConnect_BPC_HandMagnet_K2Node_ComponentBoundEvent_0_AttachmentStateChangeSignature__DelegateSignature(void* AttachmentStateChange);
    void ReceiveTick0(float DeltaSeconds);
    void BndEvt__BP_WireConnect_ConnectionTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void MoveEndTo(_Script_CoreUObject::Vector& EndLocation);
    void Setup();
    void ExecuteUbergraph_BP_WireConnect(int32_t EntryPoint);
    void OnWireSetup__DelegateSignature();
    void OnConnected__DelegateSignature();
}; // Size: 0x2f8
#pragma pack(pop)
}
