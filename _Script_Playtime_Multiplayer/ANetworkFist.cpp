#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\CapsuleComponent.hpp"
#include "..\_Script_Engine\PhysicsConstraintActor.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "ANetworkCharacter.hpp"
#include "ANetworkFist.hpp"
#include "UFistRigPackageComponent.hpp"
bool _Script_Playtime_Multiplayer::ANetworkFist::get_IsActive() {
    return (*(uint8_t*)((uintptr_t)this + 0x220 + 0)) & 1 != 0;
}
_Script_Engine::SceneComponent*& _Script_Playtime_Multiplayer::ANetworkFist::get_RootScene() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x240);
}
float& _Script_Playtime_Multiplayer::ANetworkFist::get_CurrentWireLength() {
    return *(float*)((uintptr_t)this + 0x278);
}
void _Script_Playtime_Multiplayer::ANetworkFist::set_IsActive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x220 + 0);
    *(uint8_t*)((uintptr_t)this + 0x220 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Playtime_Multiplayer::ANetworkCharacter*& _Script_Playtime_Multiplayer::ANetworkFist::get_GrabbedCharacter() {
    return *(_Script_Playtime_Multiplayer::ANetworkCharacter**)((uintptr_t)this + 0x238);
}
_Script_Playtime_Multiplayer::UFistRigPackageComponent*& _Script_Playtime_Multiplayer::ANetworkFist::get_FromPkg() {
    return *(_Script_Playtime_Multiplayer::UFistRigPackageComponent**)((uintptr_t)this + 0x228);
}
_Script_Engine::StaticMeshComponent*& _Script_Playtime_Multiplayer::ANetworkFist::get_FistPivot() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x248);
}
_Script_Engine::PhysicsConstraintActor*& _Script_Playtime_Multiplayer::ANetworkFist::get_AttachConstraint() {
    return *(_Script_Engine::PhysicsConstraintActor**)((uintptr_t)this + 0x230);
}
_Script_Engine::SceneComponent*& _Script_Playtime_Multiplayer::ANetworkFist::get_RopeAttachmentScene() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x250);
}
_Script_Engine::SceneComponent*& _Script_Playtime_Multiplayer::ANetworkFist::get_AttachConstraintScene() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x258);
}
_Script_Engine::CapsuleComponent*& _Script_Playtime_Multiplayer::ANetworkFist::get_RetractionCapsuleConstraint() {
    return *(_Script_Engine::CapsuleComponent**)((uintptr_t)this + 0x260);
}
void* _Script_Playtime_Multiplayer::ANetworkFist::get_PlayerHandsCollisionChannel() {
    return (void*)((uintptr_t)this + 0x268);
}
float& _Script_Playtime_Multiplayer::ANetworkFist::get_ShootSpeed() {
    return *(float*)((uintptr_t)this + 0x26c);
}
float& _Script_Playtime_Multiplayer::ANetworkFist::get_PullSpeed() {
    return *(float*)((uintptr_t)this + 0x270);
}
float& _Script_Playtime_Multiplayer::ANetworkFist::get_MaxWireLength() {
    return *(float*)((uintptr_t)this + 0x274);
}
void* _Script_Playtime_Multiplayer::ANetworkFist::get_OriginalFistPivotTransform() {
    return (void*)((uintptr_t)this + 0x280);
}
void* _Script_Playtime_Multiplayer::ANetworkFist::get_OriginalCollisionResponses() {
    return (void*)((uintptr_t)this + 0x2b0);
}
bool _Script_Playtime_Multiplayer::ANetworkFist::get_bShootingForward() {
    return (*(uint8_t*)((uintptr_t)this + 0x2d0 + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::ANetworkFist::set_bShootingForward(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2d0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2d0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Playtime_Multiplayer::ANetworkFist::get_bRetractingBackward() {
    return (*(uint8_t*)((uintptr_t)this + 0x2d1 + 0)) & 1 != 0;
}
void _Script_Playtime_Multiplayer::ANetworkFist::set_bRetractingBackward(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2d1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2d1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::Actor*& _Script_Playtime_Multiplayer::ANetworkFist::get_OwningCharacter() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x2d8);
}
_Script_Engine::SceneComponent*& _Script_Playtime_Multiplayer::ANetworkFist::get_SpawnPoint() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x2e0);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::ANetworkFist::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.ANetworkFist");
    return result;
}
bool _Script_Playtime_Multiplayer::ANetworkFist::IsRetractingBackward() {
    return;
}
_Script_Engine::Actor* _Script_Playtime_Multiplayer::ANetworkFist::GetOwningCharacter() {
    return;
}
void _Script_Playtime_Multiplayer::ANetworkFist::DetachAndRetract() {
    return;
}
