#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Character.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "NinjaCharacter.hpp"
void _Script_NinjaCharacter::NinjaCharacter::SmoothComponentLocation(_Script_Engine::SceneComponent* SceneComponent, float DeltaTime, float LocationSpeed, _Script_CoreUObject::Vector& RelativeLocation) {
    return;
}
bool _Script_NinjaCharacter::NinjaCharacter::get_bCapsuleRotatesControlRotation() {
    return (*(uint8_t*)((uintptr_t)this + 0x4e0 + 0)) & 1 != 0;
}
void _Script_NinjaCharacter::NinjaCharacter::set_bCapsuleRotatesControlRotation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4e0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4e0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_NinjaCharacter::NinjaCharacter::SmoothComponentLocationAndRotation(_Script_Engine::SceneComponent* SceneComponent, float DeltaTime, float LocationSpeed, float RotationSpeed, _Script_CoreUObject::Vector& RelativeLocation, _Script_CoreUObject::Rotator& RelativeRotation) {
    return;
}
_Script_CoreUObject::Class* _Script_NinjaCharacter::NinjaCharacter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/NinjaCharacter.NinjaCharacter");
    return result;
}
void _Script_NinjaCharacter::NinjaCharacter::SmoothComponentRotation(_Script_Engine::SceneComponent* SceneComponent, float DeltaTime, float RotationSpeed, _Script_CoreUObject::Rotator& RelativeRotation) {
    return;
}
bool _Script_NinjaCharacter::NinjaCharacter::SetCharMovementAxis(_Script_CoreUObject::Vector& NewAxisZ, bool bForceFindFloor) {
    return;
}
void _Script_NinjaCharacter::NinjaCharacter::LaunchCharacterRotated(_Script_CoreUObject::Vector LaunchVelocity, bool bHorizontalOverride, bool bVerticalOverride) {
    return;
}
void _Script_NinjaCharacter::NinjaCharacter::K2_OnUnwalkableHit(_Script_Engine::HitResult& Hit) {
    return;
}
void _Script_NinjaCharacter::NinjaCharacter::K2_OnGravityDirectionChanged(void* OldGravityDirectionMode, void* CurrentGravityDirectionMode) {
    return;
}
void _Script_NinjaCharacter::NinjaCharacter::K2_OnCharMovementAxisChanged(_Script_CoreUObject::Vector& OldAxisZ, _Script_CoreUObject::Vector& CurrentAxisZ) {
    return;
}
