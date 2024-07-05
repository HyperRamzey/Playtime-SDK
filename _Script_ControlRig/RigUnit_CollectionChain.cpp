#include "..\FUObjectArray.hpp"
#include "RigUnit_CollectionBase.hpp"
#include "RigUnit_CollectionChain.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_CollectionChain::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_CollectionChain");
    return result;
}
int32_t& _Script_ControlRig::RigUnit_CollectionChain::get_CachedHierarchyHash() {
    return *(int32_t*)((uintptr_t)this + 0x48);
}
bool _Script_ControlRig::RigUnit_CollectionChain::get_Reverse() {
    return (*(uint8_t*)((uintptr_t)this + 0x20 + 0)) & 1 != 0;
}
void* _Script_ControlRig::RigUnit_CollectionChain::get_FirstItem() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_ControlRig::RigUnit_CollectionChain::get_CachedCollection() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_ControlRig::RigUnit_CollectionChain::get_LastItem() {
    return (void*)((uintptr_t)this + 0x14);
}
void _Script_ControlRig::RigUnit_CollectionChain::set_Reverse(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20 + 0);
    *(uint8_t*)((uintptr_t)this + 0x20 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ControlRig::RigUnit_CollectionChain::get_Collection() {
    return (void*)((uintptr_t)this + 0x28);
}
