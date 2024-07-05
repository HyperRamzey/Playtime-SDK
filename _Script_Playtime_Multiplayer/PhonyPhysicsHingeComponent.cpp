#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PhonyPhysicsComponent.hpp"
#include "PhonyPhysicsHingeComponent.hpp"
void* _Script_Playtime_Multiplayer::PhonyPhysicsHingeComponent::get_CurrentRotation() {
    return (void*)((uintptr_t)this + 0x288);
}
void* _Script_Playtime_Multiplayer::PhonyPhysicsHingeComponent::get_RotatorAxis() {
    return (void*)((uintptr_t)this + 0x280);
}
float& _Script_Playtime_Multiplayer::PhonyPhysicsHingeComponent::get_TargetAngle() {
    return *(float*)((uintptr_t)this + 0x284);
}
void* _Script_Playtime_Multiplayer::PhonyPhysicsHingeComponent::get_NetRotation() {
    return (void*)((uintptr_t)this + 0x294);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::PhonyPhysicsHingeComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.PhonyPhysicsHingeComponent");
    return result;
}
