#include "..\FUObjectArray.hpp"
#include "RigUnit_CollectionBase.hpp"
#include "RigUnit_CollectionChildren.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void _Script_ControlRig::RigUnit_CollectionChildren::set_bRecursive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x15 + 0);
    *(uint8_t*)((uintptr_t)this + 0x15 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ControlRig::RigUnit_CollectionChildren::get_Parent() {
    return (void*)((uintptr_t)this + 0x8);
}
bool _Script_ControlRig::RigUnit_CollectionChildren::get_bIncludeParent() {
    return (*(uint8_t*)((uintptr_t)this + 0x14 + 0)) & 1 != 0;
}
void* _Script_ControlRig::RigUnit_CollectionChildren::get_CachedCollection() {
    return (void*)((uintptr_t)this + 0x28);
}
bool _Script_ControlRig::RigUnit_CollectionChildren::get_bRecursive() {
    return (*(uint8_t*)((uintptr_t)this + 0x15 + 0)) & 1 != 0;
}
void _Script_ControlRig::RigUnit_CollectionChildren::set_bIncludeParent(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14 + 0);
    *(uint8_t*)((uintptr_t)this + 0x14 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ControlRig::RigUnit_CollectionChildren::get_TypeToSearch() {
    return (void*)((uintptr_t)this + 0x16);
}
void* _Script_ControlRig::RigUnit_CollectionChildren::get_Collection() {
    return (void*)((uintptr_t)this + 0x18);
}
int32_t& _Script_ControlRig::RigUnit_CollectionChildren::get_CachedHierarchyHash() {
    return *(int32_t*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_CollectionChildren::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_CollectionChildren");
    return result;
}
