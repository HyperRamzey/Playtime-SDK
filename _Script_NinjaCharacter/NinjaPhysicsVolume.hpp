#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\PhysicsVolume.hpp"
namespace _Script_Engine {
struct Actor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_NinjaCharacter {
#pragma pack(push, 1)
struct NinjaPhysicsVolume : public _Script_Engine::PhysicsVolume {
    private: char pad_268[0x58]; public:
    void* get_TrackedActors();
    void* get_TrackedNinjas();
    void* get_GravityDirectionMode();
    void* get_GravityVectorA();
    void* get_GravityVectorB();
    _Script_Engine::Actor*& get_GravityActor();
    float& get_GravityScale();
    void* get_NinjaFallVelocity();
    static _Script_CoreUObject::Class* static_class();
    void SetSplineTangentGravityDirection(_Script_Engine::Actor* NewGravityActor);
    void SetSplinePlaneGravityDirection(_Script_Engine::Actor* NewGravityActor);
    void SetSplineGravityDirection(_Script_Engine::Actor* NewGravityActor);
    void SetSegmentGravityDirection(_Script_CoreUObject::Vector& NewGravitySegmentStart, _Script_CoreUObject::Vector& NewGravitySegmentEnd);
    void SetPointGravityDirectionFromActor(_Script_Engine::Actor* NewGravityActor);
    void SetPointGravityDirection(_Script_CoreUObject::Vector& NewGravityPoint);
    void SetLineGravityDirection(_Script_CoreUObject::Vector& NewGravityLineStart, _Script_CoreUObject::Vector& NewGravityLineEnd);
    void SetGravityScale(float NewGravityScale);
    void SetCollisionGravityDirection(_Script_Engine::Actor* NewGravityActor);
    void SetBoxGravityDirectionFromActor(_Script_Engine::Actor* NewGravityActor);
    void SetBoxGravityDirection(_Script_CoreUObject::Vector& NewGravityBoxOrigin, _Script_CoreUObject::Vector& NewGravityBoxExtent);
    void K2_SetPlaneGravityDirection(_Script_CoreUObject::Vector& NewGravityPlaneBase, _Script_CoreUObject::Vector& NewGravityPlaneNormal);
    void K2_SetFixedGravityDirection(_Script_CoreUObject::Vector& NewGravityDirection);
    float GetGravityScale();
    float GetGravityMagnitude(_Script_CoreUObject::Vector& Point);
    _Script_CoreUObject::Vector GetGravityDirection(_Script_CoreUObject::Vector& Point);
    _Script_CoreUObject::Vector GetGravity(_Script_CoreUObject::Vector& Point);
}; // Size: 0x2c0
#pragma pack(pop)
}
