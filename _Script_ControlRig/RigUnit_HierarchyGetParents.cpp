#include "..\FUObjectArray.hpp"
#include "RigUnit_HierarchyBase.hpp"
#include "RigUnit_HierarchyGetParents.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void _Script_ControlRig::RigUnit_HierarchyGetParents::set_bIncludeChild(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14 + 0);
    *(uint8_t*)((uintptr_t)this + 0x14 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ControlRig::RigUnit_HierarchyGetParents::get_Child() {
    return (void*)((uintptr_t)this + 0x8);
}
void _Script_ControlRig::RigUnit_HierarchyGetParents::set_bReverse(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x15 + 0);
    *(uint8_t*)((uintptr_t)this + 0x15 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_ControlRig::RigUnit_HierarchyGetParents::get_bIncludeChild() {
    return (*(uint8_t*)((uintptr_t)this + 0x14 + 0)) & 1 != 0;
}
bool _Script_ControlRig::RigUnit_HierarchyGetParents::get_bReverse() {
    return (*(uint8_t*)((uintptr_t)this + 0x15 + 0)) & 1 != 0;
}
void* _Script_ControlRig::RigUnit_HierarchyGetParents::get_Parents() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_ControlRig::RigUnit_HierarchyGetParents::get_CachedChild() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_ControlRig::RigUnit_HierarchyGetParents::get_CachedParents() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_HierarchyGetParents::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_HierarchyGetParents");
    return result;
}
