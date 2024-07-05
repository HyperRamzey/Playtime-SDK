#include "..\FUObjectArray.hpp"
#include "RigUnit_HierarchyBase.hpp"
#include "RigUnit_HierarchyGetChildren.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
bool _Script_ControlRig::RigUnit_HierarchyGetChildren::get_bRecursive() {
    return (*(uint8_t*)((uintptr_t)this + 0x15 + 0)) & 1 != 0;
}
bool _Script_ControlRig::RigUnit_HierarchyGetChildren::get_bIncludeParent() {
    return (*(uint8_t*)((uintptr_t)this + 0x14 + 0)) & 1 != 0;
}
void* _Script_ControlRig::RigUnit_HierarchyGetChildren::get_Parent() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_ControlRig::RigUnit_HierarchyGetChildren::get_Children() {
    return (void*)((uintptr_t)this + 0x18);
}
void _Script_ControlRig::RigUnit_HierarchyGetChildren::set_bIncludeParent(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14 + 0);
    *(uint8_t*)((uintptr_t)this + 0x14 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ControlRig::RigUnit_HierarchyGetChildren::get_CachedParent() {
    return (void*)((uintptr_t)this + 0x28);
}
void _Script_ControlRig::RigUnit_HierarchyGetChildren::set_bRecursive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x15 + 0);
    *(uint8_t*)((uintptr_t)this + 0x15 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ControlRig::RigUnit_HierarchyGetChildren::get_CachedChildren() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_HierarchyGetChildren::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_HierarchyGetChildren");
    return result;
}
