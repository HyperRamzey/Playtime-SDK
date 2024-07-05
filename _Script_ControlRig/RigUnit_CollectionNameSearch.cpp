#include "..\FUObjectArray.hpp"
#include "RigUnit_CollectionBase.hpp"
#include "RigUnit_CollectionNameSearch.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_CollectionNameSearch::get_Collection() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_ControlRig::RigUnit_CollectionNameSearch::get_PartialName() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_ControlRig::RigUnit_CollectionNameSearch::get_TypeToSearch() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_ControlRig::RigUnit_CollectionNameSearch::get_CachedCollection() {
    return (void*)((uintptr_t)this + 0x28);
}
int32_t& _Script_ControlRig::RigUnit_CollectionNameSearch::get_CachedHierarchyHash() {
    return *(int32_t*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_CollectionNameSearch::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_CollectionNameSearch");
    return result;
}
