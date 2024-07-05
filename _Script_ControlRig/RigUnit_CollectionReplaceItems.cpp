#include "..\FUObjectArray.hpp"
#include "RigUnit_CollectionBase.hpp"
#include "RigUnit_CollectionReplaceItems.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_CollectionReplaceItems::get_Items() {
    return (void*)((uintptr_t)this + 0x8);
}
bool _Script_ControlRig::RigUnit_CollectionReplaceItems::get_RemoveInvalidItems() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
void* _Script_ControlRig::RigUnit_CollectionReplaceItems::get_Old() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_ControlRig::RigUnit_CollectionReplaceItems::get_New() {
    return (void*)((uintptr_t)this + 0x20);
}
void _Script_ControlRig::RigUnit_CollectionReplaceItems::set_RemoveInvalidItems(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_ControlRig::RigUnit_CollectionReplaceItems::get_CachedHierarchyHash() {
    return *(int32_t*)((uintptr_t)this + 0x50);
}
void* _Script_ControlRig::RigUnit_CollectionReplaceItems::get_Collection() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_ControlRig::RigUnit_CollectionReplaceItems::get_CachedCollection() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_CollectionReplaceItems::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_CollectionReplaceItems");
    return result;
}
