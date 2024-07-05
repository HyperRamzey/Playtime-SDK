#include "..\FUObjectArray.hpp"
#include "ArchVisCharacter.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Character.hpp"
void* _Script_ArchVisCharacter::ArchVisCharacter::get_MoveRightAxisName() {
    return (void*)((uintptr_t)this + 0x508);
}
void* _Script_ArchVisCharacter::ArchVisCharacter::get_LookUpAxisName() {
    return (void*)((uintptr_t)this + 0x4b8);
}
void* _Script_ArchVisCharacter::ArchVisCharacter::get_LookUpAtRateAxisName() {
    return (void*)((uintptr_t)this + 0x4c8);
}
void* _Script_ArchVisCharacter::ArchVisCharacter::get_TurnAxisName() {
    return (void*)((uintptr_t)this + 0x4d8);
}
void* _Script_ArchVisCharacter::ArchVisCharacter::get_TurnAtRateAxisName() {
    return (void*)((uintptr_t)this + 0x4e8);
}
void* _Script_ArchVisCharacter::ArchVisCharacter::get_MoveForwardAxisName() {
    return (void*)((uintptr_t)this + 0x4f8);
}
float& _Script_ArchVisCharacter::ArchVisCharacter::get_MouseSensitivityScale_Yaw() {
    return *(float*)((uintptr_t)this + 0x51c);
}
float& _Script_ArchVisCharacter::ArchVisCharacter::get_MouseSensitivityScale_Pitch() {
    return *(float*)((uintptr_t)this + 0x518);
}
_Script_CoreUObject::Class* _Script_ArchVisCharacter::ArchVisCharacter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ArchVisCharacter.ArchVisCharacter");
    return result;
}
