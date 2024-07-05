#include "..\FUObjectArray.hpp"
#include "RigUnit_HighlevelBaseMutable.hpp"
#include "RigUnit_SlideChainPerItem.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_SlideChainPerItem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_SlideChainPerItem");
    return result;
}
void* _Script_ControlRig::RigUnit_SlideChainPerItem::get_WorkData() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_ControlRig::RigUnit_SlideChainPerItem::get_Items() {
    return (void*)((uintptr_t)this + 0x68);
}
float& _Script_ControlRig::RigUnit_SlideChainPerItem::get_SlideAmount() {
    return *(float*)((uintptr_t)this + 0x78);
}
bool _Script_ControlRig::RigUnit_SlideChainPerItem::get_bPropagateToChildren() {
    return (*(uint8_t*)((uintptr_t)this + 0x7c + 0)) & 1 != 0;
}
void _Script_ControlRig::RigUnit_SlideChainPerItem::set_bPropagateToChildren(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7c + 0);
    *(uint8_t*)((uintptr_t)this + 0x7c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
