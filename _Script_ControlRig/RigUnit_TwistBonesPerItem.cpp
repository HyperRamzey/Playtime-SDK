#include "..\FUObjectArray.hpp"
#include "RigUnit_HighlevelBaseMutable.hpp"
#include "RigUnit_TwistBonesPerItem.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_TwistBonesPerItem::get_Items() {
    return (void*)((uintptr_t)this + 0x68);
}
void _Script_ControlRig::RigUnit_TwistBonesPerItem::set_bPropagateToChildren(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x98 + 0);
    *(uint8_t*)((uintptr_t)this + 0x98 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_ControlRig::RigUnit_TwistBonesPerItem::get_bPropagateToChildren() {
    return (*(uint8_t*)((uintptr_t)this + 0x98 + 0)) & 1 != 0;
}
float& _Script_ControlRig::RigUnit_TwistBonesPerItem::get_Weight() {
    return *(float*)((uintptr_t)this + 0x94);
}
void* _Script_ControlRig::RigUnit_TwistBonesPerItem::get_TwistAxis() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_ControlRig::RigUnit_TwistBonesPerItem::get_PoleAxis() {
    return (void*)((uintptr_t)this + 0x84);
}
void* _Script_ControlRig::RigUnit_TwistBonesPerItem::get_TwistEaseType() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_ControlRig::RigUnit_TwistBonesPerItem::get_WorkData() {
    return (void*)((uintptr_t)this + 0xa0);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_TwistBonesPerItem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_TwistBonesPerItem");
    return result;
}
