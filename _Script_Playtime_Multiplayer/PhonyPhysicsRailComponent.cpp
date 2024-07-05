#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SplineComponent.hpp"
#include "PhonyPhysicsComponent.hpp"
#include "PhonyPhysicsRailComponent.hpp"
void _Script_Playtime_Multiplayer::PhonyPhysicsRailComponent::set_bAffectTargetRotation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x288 + 0);
    *(uint8_t*)((uintptr_t)this + 0x288 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Playtime_Multiplayer::PhonyPhysicsRailComponent::get_TargetTag() {
    return (void*)((uintptr_t)this + 0x280);
}
bool _Script_Playtime_Multiplayer::PhonyPhysicsRailComponent::get_bDoDistanceDebug() {
    return (*(uint8_t*)((uintptr_t)this + 0x298 + 0)) & 1 != 0;
}
bool _Script_Playtime_Multiplayer::PhonyPhysicsRailComponent::get_bAffectTargetRotation() {
    return (*(uint8_t*)((uintptr_t)this + 0x288 + 0)) & 1 != 0;
}
float& _Script_Playtime_Multiplayer::PhonyPhysicsRailComponent::get_StartingDistance() {
    return *(float*)((uintptr_t)this + 0x28c);
}
_Script_Engine::SplineComponent*& _Script_Playtime_Multiplayer::PhonyPhysicsRailComponent::get_Spline() {
    return *(_Script_Engine::SplineComponent**)((uintptr_t)this + 0x290);
}
void _Script_Playtime_Multiplayer::PhonyPhysicsRailComponent::set_bDoDistanceDebug(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x298 + 0);
    *(uint8_t*)((uintptr_t)this + 0x298 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Playtime_Multiplayer::PhonyPhysicsRailComponent::get_SplineLength() {
    return *(float*)((uintptr_t)this + 0x29c);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::PhonyPhysicsRailComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.PhonyPhysicsRailComponent");
    return result;
}
void _Script_Playtime_Multiplayer::PhonyPhysicsRailComponent::SnapTargetToSpline() {
    return;
}
void _Script_Playtime_Multiplayer::PhonyPhysicsRailComponent::SetSpeed(float& Speed) {
    return;
}
void _Script_Playtime_Multiplayer::PhonyPhysicsRailComponent::SetDistance(float& Distance) {
    return;
}
