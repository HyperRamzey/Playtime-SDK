#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\CameraComponent.hpp"
#include "..\_Script_Engine\CapsuleComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SpringArmComponent.hpp"
#include "MommyMovementComponent.hpp"
#include "Monster.hpp"
#include "NetworkMommy.hpp"
_Script_Playtime_Multiplayer::MommyMovementComponent* _Script_Playtime_Multiplayer::NetworkMommy::GetMommyMovementComponent() {
    return;
}
_Script_Engine::SpringArmComponent*& _Script_Playtime_Multiplayer::NetworkMommy::get_CameraSpringArm() {
    return *(_Script_Engine::SpringArmComponent**)((uintptr_t)this + 0x5d0);
}
void* _Script_Playtime_Multiplayer::NetworkMommy::get_GrappleDirection() {
    return (void*)((uintptr_t)this + 0x678);
}
_Script_Engine::CameraComponent*& _Script_Playtime_Multiplayer::NetworkMommy::get_GimbalCamera() {
    return *(_Script_Engine::CameraComponent**)((uintptr_t)this + 0x5d8);
}
void _Script_Playtime_Multiplayer::NetworkMommy::BP_OnRep_IsGrapplePulling(bool IsPulling) {
    return;
}
void* _Script_Playtime_Multiplayer::NetworkMommy::get_MommyLaunched() {
    return (void*)((uintptr_t)this + 0x600);
}
bool _Script_Playtime_Multiplayer::NetworkMommy::get_bIsOnWall() {
    return (*(uint8_t*)((uintptr_t)this + 0x668 + 0)) & 1 != 0;
}
void* _Script_Playtime_Multiplayer::NetworkMommy::get_MommyGrappleShot() {
    return (void*)((uintptr_t)this + 0x5e0);
}
void _Script_Playtime_Multiplayer::NetworkMommy::CancelGrapple() {
    return;
}
_Script_Engine::SceneComponent*& _Script_Playtime_Multiplayer::NetworkMommy::get_FirstPersonArmsRef() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x618);
}
void* _Script_Playtime_Multiplayer::NetworkMommy::get_MommyGrappleGrab() {
    return (void*)((uintptr_t)this + 0x5f0);
}
void _Script_Playtime_Multiplayer::NetworkMommy::IsGrapplePulling(bool& Pulling) {
    return;
}
void _Script_Playtime_Multiplayer::NetworkMommy::set_bIsOnWall(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x668 + 0);
    *(uint8_t*)((uintptr_t)this + 0x668 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::CapsuleComponent*& _Script_Playtime_Multiplayer::NetworkMommy::get_CapsuleComponentRef() {
    return *(_Script_Engine::CapsuleComponent**)((uintptr_t)this + 0x620);
}
float& _Script_Playtime_Multiplayer::NetworkMommy::get_GrappleShootSpeed() {
    return *(float*)((uintptr_t)this + 0x684);
}
_Script_Engine::SceneComponent*& _Script_Playtime_Multiplayer::NetworkMommy::get_FirstPersonArmsSpringRef() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x610);
}
void _Script_Playtime_Multiplayer::NetworkMommy::IncrementMommyStat(float Amount, void* Stat) {
    return;
}
void* _Script_Playtime_Multiplayer::NetworkMommy::get_HandLerpWorld() {
    return (void*)((uintptr_t)this + 0x628);
}
void* _Script_Playtime_Multiplayer::NetworkMommy::get_HandLerpRelative() {
    return (void*)((uintptr_t)this + 0x634);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::NetworkMommy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.NetworkMommy");
    return result;
}
void* _Script_Playtime_Multiplayer::NetworkMommy::get_LocalCameraRotation() {
    return (void*)((uintptr_t)this + 0x640);
}
void* _Script_Playtime_Multiplayer::NetworkMommy::get_NetCameraRotation() {
    return (void*)((uintptr_t)this + 0x64c);
}
void* _Script_Playtime_Multiplayer::NetworkMommy::get_WallAttachmentNormal() {
    return (void*)((uintptr_t)this + 0x658);
}
float& _Script_Playtime_Multiplayer::NetworkMommy::get_MaxGrappleDistance() {
    return *(float*)((uintptr_t)this + 0x664);
}
bool _Script_Playtime_Multiplayer::NetworkMommy::get_bDoOnce() {
    return (*(uint8_t*)((uintptr_t)this + 0x669 + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::NetworkMommy::set_bDoOnce(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x669 + 0);
    *(uint8_t*)((uintptr_t)this + 0x669 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Playtime_Multiplayer::NetworkMommy::get_GrappleLocation() {
    return (void*)((uintptr_t)this + 0x66c);
}
void* _Script_Playtime_Multiplayer::NetworkMommy::get_GrappleState() {
    return (void*)((uintptr_t)this + 0x688);
}
void _Script_Playtime_Multiplayer::NetworkMommy::Server_SendGrapple(_Script_CoreUObject::Vector In_Direction) {
    return;
}
void _Script_Playtime_Multiplayer::NetworkMommy::Server_LaunchFromWall(_Script_CoreUObject::Rotator LaunchDirection) {
    return;
}
void _Script_Playtime_Multiplayer::NetworkMommy::Server_AttachToWall(_Script_CoreUObject::Vector Location, _Script_CoreUObject::Vector Normal) {
    return;
}
void _Script_Playtime_Multiplayer::NetworkMommy::Server_CancelGrapple() {
    return;
}
void _Script_Playtime_Multiplayer::NetworkMommy::Server_BeginPulling() {
    return;
}
void _Script_Playtime_Multiplayer::NetworkMommy::PseudoConstruct(_Script_Engine::SceneComponent* In_FirstPersonArmsSpring, _Script_Engine::SceneComponent* In_FirstPersonArms, _Script_Engine::CapsuleComponent* In_CapsuleComponent) {
    return;
}
void _Script_Playtime_Multiplayer::NetworkMommy::ParseInputAction_Jump() {
    return;
}
void _Script_Playtime_Multiplayer::NetworkMommy::Owning_BeginPulling() {
    return;
}
void _Script_Playtime_Multiplayer::NetworkMommy::OnRep_GrappleState() {
    return;
}
void _Script_Playtime_Multiplayer::NetworkMommy::Multicast_SendGrapple(_Script_CoreUObject::Vector In_Direction) {
    return;
}
void _Script_Playtime_Multiplayer::NetworkMommy::Multicast_CancelGrapple() {
    return;
}
void _Script_Playtime_Multiplayer::NetworkMommy::Multicast_AttachToWall(_Script_CoreUObject::Vector Location, _Script_CoreUObject::Vector Normal) {
    return;
}
void _Script_Playtime_Multiplayer::NetworkMommy::LaunchFromWall(_Script_CoreUObject::Rotator LaunchDirection) {
    return;
}
void _Script_Playtime_Multiplayer::NetworkMommy::IsMommyAttachedToWall(bool& AttachedToWall) {
    return;
}
void _Script_Playtime_Multiplayer::NetworkMommy::IsGrappleActive(bool& Extended) {
    return;
}
void _Script_Playtime_Multiplayer::NetworkMommy::GetGrappleEndpointPosition(_Script_CoreUObject::Vector& Position) {
    return;
}
void _Script_Playtime_Multiplayer::NetworkMommy::DoGrappleExtension(float DeltaSeconds) {
    return;
}
void _Script_Playtime_Multiplayer::NetworkMommy::BP_OnRep_GrappleState() {
    return;
}
void _Script_Playtime_Multiplayer::NetworkMommy::BeginPulling() {
    return;
}
void _Script_Playtime_Multiplayer::NetworkMommy::AttachToWall(_Script_CoreUObject::Vector Location, _Script_CoreUObject::Vector Normal) {
    return;
}
