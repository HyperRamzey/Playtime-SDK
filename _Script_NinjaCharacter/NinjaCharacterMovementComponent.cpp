#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\CharacterMovementComponent.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "NinjaCharacterMovementComponent.hpp"
bool _Script_NinjaCharacter::NinjaCharacterMovementComponent::get_bForceSimulateMovement() {
    return (*(uint8_t*)((uintptr_t)this + 0xb00 + 0)) & 2 != 0;
}
void _Script_NinjaCharacter::NinjaCharacterMovementComponent::MulticastSetSplinePlaneGravityDirection(_Script_Engine::Actor* NewGravityActor) {
    return;
}
bool _Script_NinjaCharacter::NinjaCharacterMovementComponent::get_GiveMommyBoost() {
    return (*(uint8_t*)((uintptr_t)this + 0xaf1 + 0)) & 1 != 0;
}
void _Script_NinjaCharacter::NinjaCharacterMovementComponent::SetBoxGravityDirectionFromActor(_Script_Engine::Actor* NewGravityActor) {
    return;
}
void _Script_NinjaCharacter::NinjaCharacterMovementComponent::MulticastSetBoxGravityDirectionFromActor(_Script_Engine::Actor* NewGravityActor) {
    return;
}
bool _Script_NinjaCharacter::NinjaCharacterMovementComponent::get_RotateUp() {
    return (*(uint8_t*)((uintptr_t)this + 0xaf0 + 0)) & 1 != 0;
}
void _Script_NinjaCharacter::NinjaCharacterMovementComponent::SetSegmentGravityDirection(_Script_CoreUObject::Vector& NewGravitySegmentStart, _Script_CoreUObject::Vector& NewGravitySegmentEnd) {
    return;
}
void _Script_NinjaCharacter::NinjaCharacterMovementComponent::set_RotateUp(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xaf0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xaf0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_NinjaCharacter::NinjaCharacterMovementComponent::set_GiveMommyBoost(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xaf1 + 0);
    *(uint8_t*)((uintptr_t)this + 0xaf1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_NinjaCharacter::NinjaCharacterMovementComponent::get_bRevertToDefaultGravity() {
    return (*(uint8_t*)((uintptr_t)this + 0xb00 + 0)) & 4 != 0;
}
void _Script_NinjaCharacter::NinjaCharacterMovementComponent::MulticastSetPointGravityDirection(_Script_CoreUObject::Vector& NewGravityPoint) {
    return;
}
void* _Script_NinjaCharacter::NinjaCharacterMovementComponent::get_RotateUpVolume() {
    return (void*)((uintptr_t)this + 0xaf8);
}
void _Script_NinjaCharacter::NinjaCharacterMovementComponent::MulticastSetSplineTangentGravityDirection(_Script_Engine::Actor* NewGravityActor) {
    return;
}
void _Script_NinjaCharacter::NinjaCharacterMovementComponent::set_bForceSimulateMovement(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb00 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb00 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_NinjaCharacter::NinjaCharacterMovementComponent::MulticastSetFixedGravityDirection(_Script_CoreUObject::Vector& NewFixedGravityDirection) {
    return;
}
void _Script_NinjaCharacter::NinjaCharacterMovementComponent::set_bRevertToDefaultGravity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb00 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb00 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_NinjaCharacter::NinjaCharacterMovementComponent::get_bLandOnAnySurface() {
    return (*(uint8_t*)((uintptr_t)this + 0xb04 + 0)) & 1 != 0;
}
void _Script_NinjaCharacter::NinjaCharacterMovementComponent::set_bLandOnAnySurface(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb04 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb04 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_NinjaCharacter::NinjaCharacterMovementComponent::MulticastSetCollisionGravityDirection(_Script_Engine::Actor* NewGravityActor) {
    return;
}
bool _Script_NinjaCharacter::NinjaCharacterMovementComponent::get_bTriggerUnwalkableHits() {
    return (*(uint8_t*)((uintptr_t)this + 0xb70 + 0)) & 1 != 0;
}
void _Script_NinjaCharacter::NinjaCharacterMovementComponent::set_bTriggerUnwalkableHits(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb70 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb70 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_NinjaCharacter::NinjaCharacterMovementComponent::get_GravityDirectionMode() {
    return (void*)((uintptr_t)this + 0xb78);
}
void* _Script_NinjaCharacter::NinjaCharacterMovementComponent::get_GravityVectorA() {
    return (void*)((uintptr_t)this + 0xb7c);
}
void _Script_NinjaCharacter::NinjaCharacterMovementComponent::set_bAlwaysRotateAroundCenter(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xba8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xba8 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void* _Script_NinjaCharacter::NinjaCharacterMovementComponent::get_GravityVectorB() {
    return (void*)((uintptr_t)this + 0xb88);
}
_Script_Engine::Actor*& _Script_NinjaCharacter::NinjaCharacterMovementComponent::get_GravityActor() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0xb98);
}
bool _Script_NinjaCharacter::NinjaCharacterMovementComponent::get_bRotateVelocityOnGround() {
    return (*(uint8_t*)((uintptr_t)this + 0xba8 + 0)) & 16 != 0;
}
bool _Script_NinjaCharacter::NinjaCharacterMovementComponent::get_bDisableGravityReplication() {
    return (*(uint8_t*)((uintptr_t)this + 0xba0 + 0)) & 2 != 0;
}
void _Script_NinjaCharacter::NinjaCharacterMovementComponent::set_bDisableGravityReplication(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xba0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xba0 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_NinjaCharacter::NinjaCharacterMovementComponent::get_bAlignGravityToBase() {
    return (*(uint8_t*)((uintptr_t)this + 0xba8 + 0)) & 1 != 0;
}
void _Script_NinjaCharacter::NinjaCharacterMovementComponent::set_bAlignGravityToBase(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xba8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xba8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_NinjaCharacter::NinjaCharacterMovementComponent::MulticastSetGravityScale(float NewGravityScale) {
    return;
}
bool _Script_NinjaCharacter::NinjaCharacterMovementComponent::get_bAlignComponentToFloor() {
    return (*(uint8_t*)((uintptr_t)this + 0xba8 + 0)) & 2 != 0;
}
void _Script_NinjaCharacter::NinjaCharacterMovementComponent::set_bAlignComponentToFloor(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xba8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xba8 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_NinjaCharacter::NinjaCharacterMovementComponent::get_bAlignComponentToGravity() {
    return (*(uint8_t*)((uintptr_t)this + 0xba8 + 0)) & 4 != 0;
}
void _Script_NinjaCharacter::NinjaCharacterMovementComponent::set_bAlignComponentToGravity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xba8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xba8 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_NinjaCharacter::NinjaCharacterMovementComponent::MulticastSetPlaneGravityDirection(_Script_CoreUObject::Vector& NewGravityPlaneBase, _Script_CoreUObject::Vector& NewGravityPlaneNormal) {
    return;
}
bool _Script_NinjaCharacter::NinjaCharacterMovementComponent::get_bAlwaysRotateAroundCenter() {
    return (*(uint8_t*)((uintptr_t)this + 0xba8 + 0)) & 8 != 0;
}
void _Script_NinjaCharacter::NinjaCharacterMovementComponent::MulticastSetSplineGravityDirection(_Script_Engine::Actor* NewGravityActor) {
    return;
}
void _Script_NinjaCharacter::NinjaCharacterMovementComponent::set_bRotateVelocityOnGround(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xba8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xba8 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
void _Script_NinjaCharacter::NinjaCharacterMovementComponent::SetSplineTangentGravityDirection(_Script_Engine::Actor* NewGravityActor) {
    return;
}
float& _Script_NinjaCharacter::NinjaCharacterMovementComponent::get_ThresholdParallelAngle() {
    return *(float*)((uintptr_t)this + 0xbac);
}
void _Script_NinjaCharacter::NinjaCharacterMovementComponent::MulticastDisableAlignComponentToGravity() {
    return;
}
float& _Script_NinjaCharacter::NinjaCharacterMovementComponent::get_ThresholdOrthogonalCosine() {
    return *(float*)((uintptr_t)this + 0xbb0);
}
float& _Script_NinjaCharacter::NinjaCharacterMovementComponent::get_ThresholdParallelCosine() {
    return *(float*)((uintptr_t)this + 0xbb4);
}
_Script_CoreUObject::Class* _Script_NinjaCharacter::NinjaCharacterMovementComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/NinjaCharacter.NinjaCharacterMovementComponent");
    return result;
}
void _Script_NinjaCharacter::NinjaCharacterMovementComponent::SetSplinePlaneGravityDirection(_Script_Engine::Actor* NewGravityActor) {
    return;
}
void _Script_NinjaCharacter::NinjaCharacterMovementComponent::SetSplineGravityDirection(_Script_Engine::Actor* NewGravityActor) {
    return;
}
void _Script_NinjaCharacter::NinjaCharacterMovementComponent::MulticastSetBoxGravityDirection(_Script_CoreUObject::Vector& NewGravityBoxOrigin, _Script_CoreUObject::Vector& NewGravityBoxExtent) {
    return;
}
void _Script_NinjaCharacter::NinjaCharacterMovementComponent::SetPointGravityDirectionFromActor(_Script_Engine::Actor* NewGravityActor) {
    return;
}
void _Script_NinjaCharacter::NinjaCharacterMovementComponent::SetPointGravityDirection(_Script_CoreUObject::Vector& NewGravityPoint) {
    return;
}
void _Script_NinjaCharacter::NinjaCharacterMovementComponent::SetLineGravityDirection(_Script_CoreUObject::Vector& NewGravityLineStart, _Script_CoreUObject::Vector& NewGravityLineEnd) {
    return;
}
void _Script_NinjaCharacter::NinjaCharacterMovementComponent::SetCollisionGravityDirection(_Script_Engine::Actor* NewGravityActor) {
    return;
}
void _Script_NinjaCharacter::NinjaCharacterMovementComponent::MulticastDisableAlignGravityToBase() {
    return;
}
void _Script_NinjaCharacter::NinjaCharacterMovementComponent::MulticastSetPointGravityDirectionFromActor(_Script_Engine::Actor* NewGravityActor) {
    return;
}
void _Script_NinjaCharacter::NinjaCharacterMovementComponent::SetBoxGravityDirection(_Script_CoreUObject::Vector& NewGravityBoxOrigin, _Script_CoreUObject::Vector& NewGravityBoxExtent) {
    return;
}
void _Script_NinjaCharacter::NinjaCharacterMovementComponent::SetAlignGravityToBase(bool bNewAlignGravityToBase) {
    return;
}
void _Script_NinjaCharacter::NinjaCharacterMovementComponent::SetAlignComponentToGravity(bool bNewAlignComponentToGravity) {
    return;
}
void _Script_NinjaCharacter::NinjaCharacterMovementComponent::SetAlignComponentToFloor(bool bNewAlignComponentToFloor) {
    return;
}
void _Script_NinjaCharacter::NinjaCharacterMovementComponent::OnComponentHit(_Script_Engine::PrimitiveComponent* HitComp, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, _Script_CoreUObject::Vector NormalImpulse, _Script_Engine::HitResult& Hit) {
    return;
}
void _Script_NinjaCharacter::NinjaCharacterMovementComponent::MulticastSetSegmentGravityDirection(_Script_CoreUObject::Vector& NewGravitySegmentStart, _Script_CoreUObject::Vector& NewGravitySegmentEnd) {
    return;
}
void _Script_NinjaCharacter::NinjaCharacterMovementComponent::MulticastSetLineGravityDirection(_Script_CoreUObject::Vector& NewGravityLineStart, _Script_CoreUObject::Vector& NewGravityLineEnd) {
    return;
}
void _Script_NinjaCharacter::NinjaCharacterMovementComponent::MulticastEnableAlignGravityToBase() {
    return;
}
void _Script_NinjaCharacter::NinjaCharacterMovementComponent::MulticastEnableAlignComponentToGravity() {
    return;
}
void _Script_NinjaCharacter::NinjaCharacterMovementComponent::MulticastEnableAlignComponentToFloor() {
    return;
}
void _Script_NinjaCharacter::NinjaCharacterMovementComponent::MulticastDisableAlignComponentToFloor() {
    return;
}
void _Script_NinjaCharacter::NinjaCharacterMovementComponent::K2_SetPlaneGravityDirection(_Script_CoreUObject::Vector& NewGravityPlaneBase, _Script_CoreUObject::Vector& NewGravityPlaneNormal) {
    return;
}
void _Script_NinjaCharacter::NinjaCharacterMovementComponent::K2_SetFixedGravityDirection(_Script_CoreUObject::Vector& NewGravityDirection) {
    return;
}
float _Script_NinjaCharacter::NinjaCharacterMovementComponent::GetGravityMagnitude() {
    return;
}
_Script_CoreUObject::Vector _Script_NinjaCharacter::NinjaCharacterMovementComponent::GetGravityDirection(bool bAvoidZeroGravity) {
    return;
}
