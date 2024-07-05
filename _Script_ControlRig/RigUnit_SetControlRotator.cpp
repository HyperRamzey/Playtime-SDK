#include "..\FUObjectArray.hpp"
#include "RigUnitMutable.hpp"
#include "RigUnit_SetControlRotator.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_SetControlRotator::get_Control() {
    return (void*)((uintptr_t)this + 0x68);
}
float& _Script_ControlRig::RigUnit_SetControlRotator::get_Weight() {
    return *(float*)((uintptr_t)this + 0x70);
}
void* _Script_ControlRig::RigUnit_SetControlRotator::get_Rotator() {
    return (void*)((uintptr_t)this + 0x74);
}
void* _Script_ControlRig::RigUnit_SetControlRotator::get_Space() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_ControlRig::RigUnit_SetControlRotator::get_CachedControlIndex() {
    return (void*)((uintptr_t)this + 0x84);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_SetControlRotator::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_SetControlRotator");
    return result;
}
