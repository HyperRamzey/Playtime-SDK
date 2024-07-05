#include "..\FUObjectArray.hpp"
#include "RigUnitMutable.hpp"
#include "RigUnit_ParentSwitchConstraint.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
int32_t& _Script_ControlRig::RigUnit_ParentSwitchConstraint::get_ParentIndex() {
    return *(int32_t*)((uintptr_t)this + 0x74);
}
void* _Script_ControlRig::RigUnit_ParentSwitchConstraint::get_Subject() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_ControlRig::RigUnit_ParentSwitchConstraint::get_Parents() {
    return (void*)((uintptr_t)this + 0x78);
}
void _Script_ControlRig::RigUnit_ParentSwitchConstraint::set_Switched(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x100 + 0);
    *(uint8_t*)((uintptr_t)this + 0x100 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ControlRig::RigUnit_ParentSwitchConstraint::get_Transform() {
    return (void*)((uintptr_t)this + 0xd0);
}
void* _Script_ControlRig::RigUnit_ParentSwitchConstraint::get_InitialGlobalTransform() {
    return (void*)((uintptr_t)this + 0x90);
}
bool _Script_ControlRig::RigUnit_ParentSwitchConstraint::get_Switched() {
    return (*(uint8_t*)((uintptr_t)this + 0x100 + 0)) & 1 != 0;
}
float& _Script_ControlRig::RigUnit_ParentSwitchConstraint::get_Weight() {
    return *(float*)((uintptr_t)this + 0xc0);
}
void* _Script_ControlRig::RigUnit_ParentSwitchConstraint::get_CachedSubject() {
    return (void*)((uintptr_t)this + 0x104);
}
void* _Script_ControlRig::RigUnit_ParentSwitchConstraint::get_CachedParent() {
    return (void*)((uintptr_t)this + 0x118);
}
void* _Script_ControlRig::RigUnit_ParentSwitchConstraint::get_RelativeOffset() {
    return (void*)((uintptr_t)this + 0x130);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_ParentSwitchConstraint::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_ParentSwitchConstraint");
    return result;
}
