#include "..\FUObjectArray.hpp"
#include "RigUnit_ItemBase.hpp"
#include "RigUnit_ItemReplace.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_ItemReplace::get_Item() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_ControlRig::RigUnit_ItemReplace::get_Old() {
    return (void*)((uintptr_t)this + 0x14);
}
void* _Script_ControlRig::RigUnit_ItemReplace::get_New() {
    return (void*)((uintptr_t)this + 0x1c);
}
void* _Script_ControlRig::RigUnit_ItemReplace::get_Result() {
    return (void*)((uintptr_t)this + 0x24);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_ItemReplace::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_ItemReplace");
    return result;
}
