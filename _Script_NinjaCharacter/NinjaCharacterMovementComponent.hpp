#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\CharacterMovementComponent.hpp"
namespace _Script_Engine {
struct Actor;
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
namespace _Script_NinjaCharacter {
#pragma pack(push, 1)
struct NinjaCharacterMovementComponent : public _Script_Engine::CharacterMovementComponent {
    private: char pad_af0[0xd0]; public:
    bool get_RotateUp();
    void set_RotateUp(bool value);
    bool get_GiveMommyBoost();
    void set_GiveMommyBoost(bool value);
    void* get_RotateUpVolume();
    bool get_bForceSimulateMovement();
    void set_bForceSimulateMovement(bool value);
    bool get_bRevertToDefaultGravity();
    void set_bRevertToDefaultGravity(bool value);
    bool get_bLandOnAnySurface();
    void set_bLandOnAnySurface(bool value);
    bool get_bTriggerUnwalkableHits();
    void set_bTriggerUnwalkableHits(bool value);
    void* get_GravityDirectionMode();
    void* get_GravityVectorA();
    void* get_GravityVectorB();
    _Script_Engine::Actor*& get_GravityActor();
    bool get_bDisableGravityReplication();
    void set_bDisableGravityReplication(bool value);
    bool get_bAlignGravityToBase();
    void set_bAlignGravityToBase(bool value);
    bool get_bAlignComponentToFloor();
    void set_bAlignComponentToFloor(bool value);
    bool get_bAlignComponentToGravity();
    void set_bAlignComponentToGravity(bool value);
    bool get_bAlwaysRotateAroundCenter();
    void set_bAlwaysRotateAroundCenter(bool value);
    bool get_bRotateVelocityOnGround();
    void set_bRotateVelocityOnGround(bool value);
    float& get_ThresholdParallelAngle();
    float& get_ThresholdOrthogonalCosine();
    float& get_ThresholdParallelCosine();
    static _Script_CoreUObject::Class* static_class();
    void SetSplineTangentGravityDirection(_Script_Engine::Actor* NewGravityActor);
    void SetSplinePlaneGravityDirection(_Script_Engine::Actor* NewGravityActor);
    void SetSplineGravityDirection(_Script_Engine::Actor* NewGravityActor);
    void SetSegmentGravityDirection(_Script_CoreUObject::Vector& NewGravitySegmentStart, _Script_CoreUObject::Vector& NewGravitySegmentEnd);
    void SetPointGravityDirectionFromActor(_Script_Engine::Actor* NewGravityActor);
    void SetPointGravityDirection(_Script_CoreUObject::Vector& NewGravityPoint);
    void SetLineGravityDirection(_Script_CoreUObject::Vector& NewGravityLineStart, _Script_CoreUObject::Vector& NewGravityLineEnd);
    void SetCollisionGravityDirection(_Script_Engine::Actor* NewGravityActor);
    void SetBoxGravityDirectionFromActor(_Script_Engine::Actor* NewGravityActor);
    void SetBoxGravityDirection(_Script_CoreUObject::Vector& NewGravityBoxOrigin, _Script_CoreUObject::Vector& NewGravityBoxExtent);
    void SetAlignGravityToBase(bool bNewAlignGravityToBase);
    void SetAlignComponentToGravity(bool bNewAlignComponentToGravity);
    void SetAlignComponentToFloor(bool bNewAlignComponentToFloor);
    void OnComponentHit(_Script_Engine::PrimitiveComponent* HitComp, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, _Script_CoreUObject::Vector NormalImpulse, _Script_Engine::HitResult& Hit);
    void MulticastSetSplineTangentGravityDirection(_Script_Engine::Actor* NewGravityActor);
    void MulticastSetSplinePlaneGravityDirection(_Script_Engine::Actor* NewGravityActor);
    void MulticastSetSplineGravityDirection(_Script_Engine::Actor* NewGravityActor);
    void MulticastSetSegmentGravityDirection(_Script_CoreUObject::Vector& NewGravitySegmentStart, _Script_CoreUObject::Vector& NewGravitySegmentEnd);
    void MulticastSetPointGravityDirectionFromActor(_Script_Engine::Actor* NewGravityActor);
    void MulticastSetPointGravityDirection(_Script_CoreUObject::Vector& NewGravityPoint);
    void MulticastSetPlaneGravityDirection(_Script_CoreUObject::Vector& NewGravityPlaneBase, _Script_CoreUObject::Vector& NewGravityPlaneNormal);
    void MulticastSetLineGravityDirection(_Script_CoreUObject::Vector& NewGravityLineStart, _Script_CoreUObject::Vector& NewGravityLineEnd);
    void MulticastSetGravityScale(float NewGravityScale);
    void MulticastSetFixedGravityDirection(_Script_CoreUObject::Vector& NewFixedGravityDirection);
    void MulticastSetCollisionGravityDirection(_Script_Engine::Actor* NewGravityActor);
    void MulticastSetBoxGravityDirectionFromActor(_Script_Engine::Actor* NewGravityActor);
    void MulticastSetBoxGravityDirection(_Script_CoreUObject::Vector& NewGravityBoxOrigin, _Script_CoreUObject::Vector& NewGravityBoxExtent);
    void MulticastEnableAlignGravityToBase();
    void MulticastEnableAlignComponentToGravity();
    void MulticastEnableAlignComponentToFloor();
    void MulticastDisableAlignGravityToBase();
    void MulticastDisableAlignComponentToGravity();
    void MulticastDisableAlignComponentToFloor();
    void K2_SetPlaneGravityDirection(_Script_CoreUObject::Vector& NewGravityPlaneBase, _Script_CoreUObject::Vector& NewGravityPlaneNormal);
    void K2_SetFixedGravityDirection(_Script_CoreUObject::Vector& NewGravityDirection);
    float GetGravityMagnitude();
    _Script_CoreUObject::Vector GetGravityDirection(bool bAvoidZeroGravity);
}; // Size: 0xbc0
#pragma pack(pop)
}
