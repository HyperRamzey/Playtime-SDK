#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Playtime_Multiplayer {
struct UFistRigPackageComponent;
}
namespace _Script_Engine {
struct PhysicsConstraintActor;
}
namespace _Script_Playtime_Multiplayer {
struct ANetworkCharacter;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_Engine {
struct CapsuleComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct ANetworkFist : public _Script_Engine::Actor {
    private: char pad_220[0xd0]; public:
    bool get_IsActive();
    void set_IsActive(bool value);
    _Script_Playtime_Multiplayer::UFistRigPackageComponent*& get_FromPkg();
    _Script_Engine::PhysicsConstraintActor*& get_AttachConstraint();
    _Script_Playtime_Multiplayer::ANetworkCharacter*& get_GrabbedCharacter();
    _Script_Engine::SceneComponent*& get_RootScene();
    _Script_Engine::StaticMeshComponent*& get_FistPivot();
    _Script_Engine::SceneComponent*& get_RopeAttachmentScene();
    _Script_Engine::SceneComponent*& get_AttachConstraintScene();
    _Script_Engine::CapsuleComponent*& get_RetractionCapsuleConstraint();
    void* get_PlayerHandsCollisionChannel();
    float& get_ShootSpeed();
    float& get_PullSpeed();
    float& get_MaxWireLength();
    float& get_CurrentWireLength();
    void* get_OriginalFistPivotTransform();
    void* get_OriginalCollisionResponses();
    bool get_bShootingForward();
    void set_bShootingForward(bool value);
    bool get_bRetractingBackward();
    void set_bRetractingBackward(bool value);
    _Script_Engine::Actor*& get_OwningCharacter();
    _Script_Engine::SceneComponent*& get_SpawnPoint();
    static _Script_CoreUObject::Class* static_class();
    bool IsRetractingBackward();
    _Script_Engine::Actor* GetOwningCharacter();
    void DetachAndRetract();
}; // Size: 0x2f0
#pragma pack(pop)
}
