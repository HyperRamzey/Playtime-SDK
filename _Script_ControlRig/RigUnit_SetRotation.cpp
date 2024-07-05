#include "..\FUObjectArray.hpp"
#include "RigUnitMutable.hpp"
#include "RigUnit_SetRotation.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void _Script_ControlRig::RigUnit_SetRotation::set_bPropagateToChildren(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x94 + 0);
    *(uint8_t*)((uintptr_t)this + 0x94 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_ControlRig::RigUnit_SetRotation::get_Weight() {
    return *(float*)((uintptr_t)this + 0x90);
}
void* _Script_ControlRig::RigUnit_SetRotation::get_Rotation() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_ControlRig::RigUnit_SetRotation::get_Item() {
    return (void*)((uintptr_t)this + 0x68);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_SetRotation::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_SetRotation");
    return result;
}
void* _Script_ControlRig::RigUnit_SetRotation::get_CachedIndex() {
    return (void*)((uintptr_t)this + 0x98);
}
void* _Script_ControlRig::RigUnit_SetRotation::get_Space() {
    return (void*)((uintptr_t)this + 0x74);
}
bool _Script_ControlRig::RigUnit_SetRotation::get_bPropagateToChildren() {
    return (*(uint8_t*)((uintptr_t)this + 0x94 + 0)) & 1 != 0;
}
