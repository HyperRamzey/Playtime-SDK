#include "..\FUObjectArray.hpp"
#include "RigUnit_HierarchyBase.hpp"
#include "RigUnit_HierarchyGetSiblings.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_HierarchyGetSiblings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_HierarchyGetSiblings");
    return result;
}
void* _Script_ControlRig::RigUnit_HierarchyGetSiblings::get_Item() {
    return (void*)((uintptr_t)this + 0x8);
}
bool _Script_ControlRig::RigUnit_HierarchyGetSiblings::get_bIncludeItem() {
    return (*(uint8_t*)((uintptr_t)this + 0x14 + 0)) & 1 != 0;
}
void* _Script_ControlRig::RigUnit_HierarchyGetSiblings::get_Siblings() {
    return (void*)((uintptr_t)this + 0x18);
}
void _Script_ControlRig::RigUnit_HierarchyGetSiblings::set_bIncludeItem(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14 + 0);
    *(uint8_t*)((uintptr_t)this + 0x14 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ControlRig::RigUnit_HierarchyGetSiblings::get_CachedSiblings() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_ControlRig::RigUnit_HierarchyGetSiblings::get_CachedItem() {
    return (void*)((uintptr_t)this + 0x28);
}
