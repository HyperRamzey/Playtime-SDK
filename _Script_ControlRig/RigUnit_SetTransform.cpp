#include "..\FUObjectArray.hpp"
#include "RigUnitMutable.hpp"
#include "RigUnit_SetTransform.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_SetTransform::get_Item() {
    return (void*)((uintptr_t)this + 0x68);
}
bool _Script_ControlRig::RigUnit_SetTransform::get_bInitial() {
    return (*(uint8_t*)((uintptr_t)this + 0x75 + 0)) & 1 != 0;
}
void* _Script_ControlRig::RigUnit_SetTransform::get_Space() {
    return (void*)((uintptr_t)this + 0x74);
}
void _Script_ControlRig::RigUnit_SetTransform::set_bInitial(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x75 + 0);
    *(uint8_t*)((uintptr_t)this + 0x75 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ControlRig::RigUnit_SetTransform::get_Transform() {
    return (void*)((uintptr_t)this + 0x80);
}
float& _Script_ControlRig::RigUnit_SetTransform::get_Weight() {
    return *(float*)((uintptr_t)this + 0xb0);
}
bool _Script_ControlRig::RigUnit_SetTransform::get_bPropagateToChildren() {
    return (*(uint8_t*)((uintptr_t)this + 0xb4 + 0)) & 1 != 0;
}
void _Script_ControlRig::RigUnit_SetTransform::set_bPropagateToChildren(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ControlRig::RigUnit_SetTransform::get_CachedIndex() {
    return (void*)((uintptr_t)this + 0xb8);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_SetTransform::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_SetTransform");
    return result;
}
