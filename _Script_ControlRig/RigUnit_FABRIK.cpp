#include "..\FUObjectArray.hpp"
#include "RigUnit_FABRIK.hpp"
#include "RigUnit_HighlevelBaseMutable.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_ControlRig::RigUnit_FABRIK::get_Weight() {
    return *(float*)((uintptr_t)this + 0xb4);
}
void* _Script_ControlRig::RigUnit_FABRIK::get_StartBone() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_ControlRig::RigUnit_FABRIK::get_EffectorBone() {
    return (void*)((uintptr_t)this + 0x70);
}
int32_t& _Script_ControlRig::RigUnit_FABRIK::get_MaxIterations() {
    return *(int32_t*)((uintptr_t)this + 0xbc);
}
void* _Script_ControlRig::RigUnit_FABRIK::get_EffectorTransform() {
    return (void*)((uintptr_t)this + 0x80);
}
float& _Script_ControlRig::RigUnit_FABRIK::get_Precision() {
    return *(float*)((uintptr_t)this + 0xb0);
}
bool _Script_ControlRig::RigUnit_FABRIK::get_bPropagateToChildren() {
    return (*(uint8_t*)((uintptr_t)this + 0xb8 + 0)) & 1 != 0;
}
void _Script_ControlRig::RigUnit_FABRIK::set_bPropagateToChildren(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ControlRig::RigUnit_FABRIK::get_WorkData() {
    return (void*)((uintptr_t)this + 0xc0);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_FABRIK::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_FABRIK");
    return result;
}
