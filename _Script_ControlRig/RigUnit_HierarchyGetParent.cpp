#include "..\FUObjectArray.hpp"
#include "RigUnit_HierarchyBase.hpp"
#include "RigUnit_HierarchyGetParent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_HierarchyGetParent::get_Child() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_ControlRig::RigUnit_HierarchyGetParent::get_Parent() {
    return (void*)((uintptr_t)this + 0x14);
}
void* _Script_ControlRig::RigUnit_HierarchyGetParent::get_CachedChild() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_ControlRig::RigUnit_HierarchyGetParent::get_CachedParent() {
    return (void*)((uintptr_t)this + 0x34);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_HierarchyGetParent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_HierarchyGetParent");
    return result;
}
