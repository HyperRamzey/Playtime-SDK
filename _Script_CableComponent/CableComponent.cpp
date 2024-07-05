#include "..\FUObjectArray.hpp"
#include "CableComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\MeshComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
bool _Script_CableComponent::CableComponent::get_bAttachStart() {
    return (*(uint8_t*)((uintptr_t)this + 0x478 + 0)) & 1 != 0;
}
void _Script_CableComponent::CableComponent::set_bAttachStart(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x478 + 0);
    *(uint8_t*)((uintptr_t)this + 0x478 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_CableComponent::CableComponent::get_CableLength() {
    return *(float*)((uintptr_t)this + 0x4bc);
}
void _Script_CableComponent::CableComponent::set_bAttachEnd(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x479 + 0);
    *(uint8_t*)((uintptr_t)this + 0x479 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_CableComponent::CableComponent::get_bSkipCableUpdateWhenNotOwnerRecentlyRendered() {
    return (*(uint8_t*)((uintptr_t)this + 0x4cf + 0)) & 1 != 0;
}
bool _Script_CableComponent::CableComponent::get_bAttachEnd() {
    return (*(uint8_t*)((uintptr_t)this + 0x479 + 0)) & 1 != 0;
}
int32_t& _Script_CableComponent::CableComponent::get_NumSides() {
    return *(int32_t*)((uintptr_t)this + 0x4ec);
}
void* _Script_CableComponent::CableComponent::get_AttachEndTo() {
    return (void*)((uintptr_t)this + 0x480);
}
void* _Script_CableComponent::CableComponent::get_AttachEndToSocketName() {
    return (void*)((uintptr_t)this + 0x4a8);
}
void* _Script_CableComponent::CableComponent::get_EndLocation() {
    return (void*)((uintptr_t)this + 0x4b0);
}
int32_t& _Script_CableComponent::CableComponent::get_NumSegments() {
    return *(int32_t*)((uintptr_t)this + 0x4c0);
}
void _Script_CableComponent::CableComponent::set_bEnableStiffness(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4cc + 0);
    *(uint8_t*)((uintptr_t)this + 0x4cc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_CableComponent::CableComponent::get_SubstepTime() {
    return *(float*)((uintptr_t)this + 0x4c4);
}
int32_t& _Script_CableComponent::CableComponent::get_SolverIterations() {
    return *(int32_t*)((uintptr_t)this + 0x4c8);
}
bool _Script_CableComponent::CableComponent::get_bEnableStiffness() {
    return (*(uint8_t*)((uintptr_t)this + 0x4cc + 0)) & 1 != 0;
}
bool _Script_CableComponent::CableComponent::get_bUseSubstepping() {
    return (*(uint8_t*)((uintptr_t)this + 0x4cd + 0)) & 1 != 0;
}
void _Script_CableComponent::CableComponent::set_bUseSubstepping(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4cd + 0);
    *(uint8_t*)((uintptr_t)this + 0x4cd + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_CableComponent::CableComponent::get_bSkipCableUpdateWhenNotVisible() {
    return (*(uint8_t*)((uintptr_t)this + 0x4ce + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_CableComponent::CableComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/CableComponent.CableComponent");
    return result;
}
void _Script_CableComponent::CableComponent::set_bSkipCableUpdateWhenNotVisible(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4ce + 0);
    *(uint8_t*)((uintptr_t)this + 0x4ce + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_CableComponent::CableComponent::set_bSkipCableUpdateWhenNotOwnerRecentlyRendered(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4cf + 0);
    *(uint8_t*)((uintptr_t)this + 0x4cf + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_CableComponent::CableComponent::get_bEnableCollision() {
    return (*(uint8_t*)((uintptr_t)this + 0x4d0 + 0)) & 1 != 0;
}
void _Script_CableComponent::CableComponent::set_bEnableCollision(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4d0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4d0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_CableComponent::CableComponent::get_CollisionFriction() {
    return *(float*)((uintptr_t)this + 0x4d4);
}
void* _Script_CableComponent::CableComponent::get_CableForce() {
    return (void*)((uintptr_t)this + 0x4d8);
}
float& _Script_CableComponent::CableComponent::get_CableGravityScale() {
    return *(float*)((uintptr_t)this + 0x4e4);
}
float& _Script_CableComponent::CableComponent::get_CableWidth() {
    return *(float*)((uintptr_t)this + 0x4e8);
}
float& _Script_CableComponent::CableComponent::get_TileMaterial() {
    return *(float*)((uintptr_t)this + 0x4f0);
}
void _Script_CableComponent::CableComponent::SetAttachEndToComponent(_Script_Engine::SceneComponent* Component, void* SocketName) {
    return;
}
void _Script_CableComponent::CableComponent::SetAttachEndTo(_Script_Engine::Actor* Actor, void* ComponentProperty, void* SocketName) {
    return;
}
void _Script_CableComponent::CableComponent::GetCableParticleLocations(void*& Locations) {
    return;
}
_Script_Engine::SceneComponent* _Script_CableComponent::CableComponent::GetAttachedComponent() {
    return;
}
_Script_Engine::Actor* _Script_CableComponent::CableComponent::GetAttachedActor() {
    return;
}
