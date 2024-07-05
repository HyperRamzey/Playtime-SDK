#include "..\FUObjectArray.hpp"
#include "ArchVisCharMovementComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\CharacterMovementComponent.hpp"
void* _Script_ArchVisCharacter::ArchVisCharMovementComponent::get_RotationalAcceleration() {
    return (void*)((uintptr_t)this + 0xaf0);
}
void* _Script_ArchVisCharacter::ArchVisCharMovementComponent::get_MaxRotationalVelocity() {
    return (void*)((uintptr_t)this + 0xb08);
}
void* _Script_ArchVisCharacter::ArchVisCharMovementComponent::get_RotationalDeceleration() {
    return (void*)((uintptr_t)this + 0xafc);
}
float& _Script_ArchVisCharacter::ArchVisCharMovementComponent::get_MinPitch() {
    return *(float*)((uintptr_t)this + 0xb14);
}
float& _Script_ArchVisCharacter::ArchVisCharMovementComponent::get_WalkingSpeed() {
    return *(float*)((uintptr_t)this + 0xb20);
}
float& _Script_ArchVisCharacter::ArchVisCharMovementComponent::get_MaxPitch() {
    return *(float*)((uintptr_t)this + 0xb18);
}
float& _Script_ArchVisCharacter::ArchVisCharMovementComponent::get_WalkingFriction() {
    return *(float*)((uintptr_t)this + 0xb1c);
}
float& _Script_ArchVisCharacter::ArchVisCharMovementComponent::get_WalkingAcceleration() {
    return *(float*)((uintptr_t)this + 0xb24);
}
_Script_CoreUObject::Class* _Script_ArchVisCharacter::ArchVisCharMovementComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ArchVisCharacter.ArchVisCharMovementComponent");
    return result;
}
