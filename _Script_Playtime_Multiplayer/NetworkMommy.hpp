#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "Monster.hpp"
namespace _Script_Engine {
struct SpringArmComponent;
}
namespace _Script_Engine {
struct CameraComponent;
}
namespace _Script_Engine {
struct CapsuleComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
struct MommyMovementComponent;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct NetworkMommy : public Monster {
    private: char pad_5d0[0xc0]; public:
    _Script_Engine::SpringArmComponent*& get_CameraSpringArm();
    _Script_Engine::CameraComponent*& get_GimbalCamera();
    void* get_MommyGrappleShot();
    void* get_MommyGrappleGrab();
    void* get_MommyLaunched();
    _Script_Engine::SceneComponent*& get_FirstPersonArmsSpringRef();
    _Script_Engine::SceneComponent*& get_FirstPersonArmsRef();
    _Script_Engine::CapsuleComponent*& get_CapsuleComponentRef();
    void* get_HandLerpWorld();
    void* get_HandLerpRelative();
    void* get_LocalCameraRotation();
    void* get_NetCameraRotation();
    void* get_WallAttachmentNormal();
    float& get_MaxGrappleDistance();
    bool get_bIsOnWall();
    void set_bIsOnWall(bool value);
    bool get_bDoOnce();
    void set_bDoOnce(bool value);
    void* get_GrappleLocation();
    void* get_GrappleDirection();
    float& get_GrappleShootSpeed();
    void* get_GrappleState();
    static _Script_CoreUObject::Class* static_class();
    void Server_SendGrapple(_Script_CoreUObject::Vector In_Direction);
    void Server_LaunchFromWall(_Script_CoreUObject::Rotator LaunchDirection);
    void Server_CancelGrapple();
    void Server_BeginPulling();
    void Server_AttachToWall(_Script_CoreUObject::Vector Location, _Script_CoreUObject::Vector Normal);
    void PseudoConstruct(_Script_Engine::SceneComponent* In_FirstPersonArmsSpring, _Script_Engine::SceneComponent* In_FirstPersonArms, _Script_Engine::CapsuleComponent* In_CapsuleComponent);
    void ParseInputAction_Jump();
    void Owning_BeginPulling();
    void OnRep_GrappleState();
    void Multicast_SendGrapple(_Script_CoreUObject::Vector In_Direction);
    void Multicast_CancelGrapple();
    void Multicast_AttachToWall(_Script_CoreUObject::Vector Location, _Script_CoreUObject::Vector Normal);
    void LaunchFromWall(_Script_CoreUObject::Rotator LaunchDirection);
    void IsMommyAttachedToWall(bool& AttachedToWall);
    void IsGrapplePulling(bool& Pulling);
    void IsGrappleActive(bool& Extended);
    void IncrementMommyStat(float Amount, void* Stat);
    _Script_Playtime_Multiplayer::MommyMovementComponent* GetMommyMovementComponent();
    void GetGrappleEndpointPosition(_Script_CoreUObject::Vector& Position);
    void DoGrappleExtension(float DeltaSeconds);
    void CancelGrapple();
    void BP_OnRep_IsGrapplePulling(bool IsPulling);
    void BP_OnRep_GrappleState();
    void BeginPulling();
    void AttachToWall(_Script_CoreUObject::Vector Location, _Script_CoreUObject::Vector Normal);
}; // Size: 0x690
#pragma pack(pop)
}
