#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
struct UHandRigPackageComponent;
}
namespace _Script_Engine {
struct CurveFloat;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
struct PhysicsConstraintActor;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_Playtime_Multiplayer {
struct ANetworkCharacter;
}
namespace _Script_Engine {
struct AnimInstance;
}
namespace _Script_Engine {
struct AnimSequence;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct ANetworkHand : public _Script_Engine::Actor {
    private: char pad_220[0x170]; public:
    void* get_Limb();
    _Script_Playtime_Multiplayer::UHandRigPackageComponent*& get_FromPkg();
    _Script_Engine::PhysicsConstraintActor*& get_AttachConstraint();
    _Script_CoreUObject::Object*& get_GrabbedGrabbable();
    _Script_Engine::SceneComponent*& get_RootScene();
    _Script_Engine::SceneComponent*& get_HandScene();
    _Script_Engine::StaticMeshComponent*& get_HandPivot();
    _Script_Engine::SkeletalMeshComponent*& get_SK_Hand();
    _Script_Engine::SceneComponent*& get_RopeAttachmentScene();
    _Script_Engine::SceneComponent*& get_AttachConstraintScene();
    void* get_HandMagnetTraceChannel();
    void* get_PlayerHandsCollisionChannel();
    float& get_ShootSpeed();
    float& get_PullSpeed();
    float& get_InitialShootSpeed();
    float& get_GravityStrength();
    _Script_Engine::CurveFloat*& get_GravityOverDistance();
    float& get_MasterArcSpeed();
    _Script_Engine::CurveFloat*& get_ArcSpeedOverDistance();
    float& get_MaxWireLength();
    float& get_CurrentWireLength();
    float& get_CancellationPause();
    float& get_CurrentCancellationTimer();
    void* get_OriginalHandPivotTransform();
    void* get_OriginalCollisionResponses();
    float& get_GrabbedThickness();
    float& get_DistanceFromPalm();
    bool get_bIsTouching();
    void set_bIsTouching(bool value);
    void* get_SK_HandInitialAnimation();
    _Script_Engine::SceneComponent*& get_SpawnPoint();
    void* get_NetHandState();
    void* get_LocalHandState();
    static _Script_CoreUObject::Class* static_class();
    void OnRep_HandState();
    bool IsPulling();
    bool IsActive();
    _Script_Playtime_Multiplayer::ANetworkCharacter* GetOwningCharacter();
    void* GetHandState();
    _Script_Engine::AnimInstance* GetAnimInstance();
    void DetermineVisuals();
    void DetachAndRetract();
    void CheckWire();
    bool CanGrabOntoGrabbable();
    void BP_PseudoSpawn();
    void BP_PseudoDestroy();
    void BP_HandStateCorrectionIssued(void* In_PreviousState);
    void BP_EndTouch();
    void BP_BeginTouch(float GrabbedThickness_, float DistanceFromPalm_, _Script_Engine::AnimSequence* AnimToPlay);
}; // Size: 0x390
#pragma pack(pop)
}
