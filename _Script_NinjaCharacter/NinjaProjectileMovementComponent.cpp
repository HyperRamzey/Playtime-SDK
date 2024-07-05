#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ProjectileMovementComponent.hpp"
#include "NinjaProjectileMovementComponent.hpp"
bool _Script_NinjaCharacter::NinjaProjectileMovementComponent::get_bFollowGravityDirection() {
    return (*(uint8_t*)((uintptr_t)this + 0x1d0 + 0)) & 1 != 0;
}
void _Script_NinjaCharacter::NinjaProjectileMovementComponent::set_bFollowGravityDirection(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1d0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1d0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_NinjaCharacter::NinjaProjectileMovementComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/NinjaCharacter.NinjaProjectileMovementComponent");
    return result;
}
