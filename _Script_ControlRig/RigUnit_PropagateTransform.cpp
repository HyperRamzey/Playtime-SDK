#include "..\FUObjectArray.hpp"
#include "RigUnitMutable.hpp"
#include "RigUnit_PropagateTransform.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_PropagateTransform::get_Item() {
    return (void*)((uintptr_t)this + 0x68);
}
bool _Script_ControlRig::RigUnit_PropagateTransform::get_bRecomputeGlobal() {
    return (*(uint8_t*)((uintptr_t)this + 0x74 + 0)) & 1 != 0;
}
bool _Script_ControlRig::RigUnit_PropagateTransform::get_bRecursive() {
    return (*(uint8_t*)((uintptr_t)this + 0x76 + 0)) & 1 != 0;
}
void _Script_ControlRig::RigUnit_PropagateTransform::set_bRecomputeGlobal(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x74 + 0);
    *(uint8_t*)((uintptr_t)this + 0x74 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_ControlRig::RigUnit_PropagateTransform::set_bApplyToChildren(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x75 + 0);
    *(uint8_t*)((uintptr_t)this + 0x75 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_ControlRig::RigUnit_PropagateTransform::get_bApplyToChildren() {
    return (*(uint8_t*)((uintptr_t)this + 0x75 + 0)) & 1 != 0;
}
void _Script_ControlRig::RigUnit_PropagateTransform::set_bRecursive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x76 + 0);
    *(uint8_t*)((uintptr_t)this + 0x76 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ControlRig::RigUnit_PropagateTransform::get_CachedIndex() {
    return (void*)((uintptr_t)this + 0x78);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_PropagateTransform::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_PropagateTransform");
    return result;
}
