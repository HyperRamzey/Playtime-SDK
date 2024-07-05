#include "..\FUObjectArray.hpp"
#include "RigUnit_ModifyTransforms_PerItem.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_ModifyTransforms_PerItem::get_Item() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_ModifyTransforms_PerItem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_ModifyTransforms_PerItem");
    return result;
}
void* _Script_ControlRig::RigUnit_ModifyTransforms_PerItem::get_Transform() {
    return (void*)((uintptr_t)this + 0x10);
}
