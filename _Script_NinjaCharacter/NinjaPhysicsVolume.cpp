#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\PhysicsVolume.hpp"
#include "NinjaPhysicsVolume.hpp"
void* _Script_NinjaCharacter::NinjaPhysicsVolume::get_TrackedActors() {
    return (void*)((uintptr_t)this + 0x268);
}
void _Script_NinjaCharacter::NinjaPhysicsVolume::SetBoxGravityDirection(_Script_CoreUObject::Vector& NewGravityBoxOrigin, _Script_CoreUObject::Vector& NewGravityBoxExtent) {
    return;
}
void* _Script_NinjaCharacter::NinjaPhysicsVolume::get_GravityVectorB() {
    return (void*)((uintptr_t)this + 0x298);
}
void* _Script_NinjaCharacter::NinjaPhysicsVolume::get_GravityDirectionMode() {
    return (void*)((uintptr_t)this + 0x288);
}
void* _Script_NinjaCharacter::NinjaPhysicsVolume::get_TrackedNinjas() {
    return (void*)((uintptr_t)this + 0x278);
}
_Script_Engine::Actor*& _Script_NinjaCharacter::NinjaPhysicsVolume::get_GravityActor() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x2a8);
}
void _Script_NinjaCharacter::NinjaPhysicsVolume::SetLineGravityDirection(_Script_CoreUObject::Vector& NewGravityLineStart, _Script_CoreUObject::Vector& NewGravityLineEnd) {
    return;
}
void* _Script_NinjaCharacter::NinjaPhysicsVolume::get_GravityVectorA() {
    return (void*)((uintptr_t)this + 0x28c);
}
float& _Script_NinjaCharacter::NinjaPhysicsVolume::get_GravityScale() {
    return *(float*)((uintptr_t)this + 0x2b0);
}
void* _Script_NinjaCharacter::NinjaPhysicsVolume::get_NinjaFallVelocity() {
    return (void*)((uintptr_t)this + 0x2b4);
}
_Script_CoreUObject::Class* _Script_NinjaCharacter::NinjaPhysicsVolume::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/NinjaCharacter.NinjaPhysicsVolume");
    return result;
}
void _Script_NinjaCharacter::NinjaPhysicsVolume::SetSplineTangentGravityDirection(_Script_Engine::Actor* NewGravityActor) {
    return;
}
void _Script_NinjaCharacter::NinjaPhysicsVolume::SetSplinePlaneGravityDirection(_Script_Engine::Actor* NewGravityActor) {
    return;
}
void _Script_NinjaCharacter::NinjaPhysicsVolume::SetBoxGravityDirectionFromActor(_Script_Engine::Actor* NewGravityActor) {
    return;
}
void _Script_NinjaCharacter::NinjaPhysicsVolume::SetSplineGravityDirection(_Script_Engine::Actor* NewGravityActor) {
    return;
}
void _Script_NinjaCharacter::NinjaPhysicsVolume::SetSegmentGravityDirection(_Script_CoreUObject::Vector& NewGravitySegmentStart, _Script_CoreUObject::Vector& NewGravitySegmentEnd) {
    return;
}
void _Script_NinjaCharacter::NinjaPhysicsVolume::SetPointGravityDirectionFromActor(_Script_Engine::Actor* NewGravityActor) {
    return;
}
float _Script_NinjaCharacter::NinjaPhysicsVolume::GetGravityMagnitude(_Script_CoreUObject::Vector& Point) {
    return;
}
void _Script_NinjaCharacter::NinjaPhysicsVolume::SetPointGravityDirection(_Script_CoreUObject::Vector& NewGravityPoint) {
    return;
}
void _Script_NinjaCharacter::NinjaPhysicsVolume::SetGravityScale(float NewGravityScale) {
    return;
}
void _Script_NinjaCharacter::NinjaPhysicsVolume::SetCollisionGravityDirection(_Script_Engine::Actor* NewGravityActor) {
    return;
}
void _Script_NinjaCharacter::NinjaPhysicsVolume::K2_SetPlaneGravityDirection(_Script_CoreUObject::Vector& NewGravityPlaneBase, _Script_CoreUObject::Vector& NewGravityPlaneNormal) {
    return;
}
void _Script_NinjaCharacter::NinjaPhysicsVolume::K2_SetFixedGravityDirection(_Script_CoreUObject::Vector& NewGravityDirection) {
    return;
}
float _Script_NinjaCharacter::NinjaPhysicsVolume::GetGravityScale() {
    return;
}
_Script_CoreUObject::Vector _Script_NinjaCharacter::NinjaPhysicsVolume::GetGravityDirection(_Script_CoreUObject::Vector& Point) {
    return;
}
_Script_CoreUObject::Vector _Script_NinjaCharacter::NinjaPhysicsVolume::GetGravity(_Script_CoreUObject::Vector& Point) {
    return;
}
