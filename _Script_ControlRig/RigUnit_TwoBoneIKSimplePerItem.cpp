#include "..\FUObjectArray.hpp"
#include "RigUnit_HighlevelBaseMutable.hpp"
#include "RigUnit_TwoBoneIKSimplePerItem.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_TwoBoneIKSimplePerItem::get_ItemA() {
    return (void*)((uintptr_t)this + 0x68);
}
float& _Script_ControlRig::RigUnit_TwoBoneIKSimplePerItem::get_SecondaryAxisWeight() {
    return *(float*)((uintptr_t)this + 0xd8);
}
void* _Script_ControlRig::RigUnit_TwoBoneIKSimplePerItem::get_EffectorItem() {
    return (void*)((uintptr_t)this + 0x80);
}
bool _Script_ControlRig::RigUnit_TwoBoneIKSimplePerItem::get_bEnableStretch() {
    return (*(uint8_t*)((uintptr_t)this + 0xf8 + 0)) & 1 != 0;
}
void* _Script_ControlRig::RigUnit_TwoBoneIKSimplePerItem::get_ItemB() {
    return (void*)((uintptr_t)this + 0x74);
}
void* _Script_ControlRig::RigUnit_TwoBoneIKSimplePerItem::get_Effector() {
    return (void*)((uintptr_t)this + 0x90);
}
float& _Script_ControlRig::RigUnit_TwoBoneIKSimplePerItem::get_ItemALength() {
    return *(float*)((uintptr_t)this + 0x108);
}
void* _Script_ControlRig::RigUnit_TwoBoneIKSimplePerItem::get_PrimaryAxis() {
    return (void*)((uintptr_t)this + 0xc0);
}
void* _Script_ControlRig::RigUnit_TwoBoneIKSimplePerItem::get_SecondaryAxis() {
    return (void*)((uintptr_t)this + 0xcc);
}
void* _Script_ControlRig::RigUnit_TwoBoneIKSimplePerItem::get_DebugSettings() {
    return (void*)((uintptr_t)this + 0x120);
}
void* _Script_ControlRig::RigUnit_TwoBoneIKSimplePerItem::get_PoleVector() {
    return (void*)((uintptr_t)this + 0xdc);
}
void* _Script_ControlRig::RigUnit_TwoBoneIKSimplePerItem::get_PoleVectorKind() {
    return (void*)((uintptr_t)this + 0xe8);
}
void* _Script_ControlRig::RigUnit_TwoBoneIKSimplePerItem::get_PoleVectorSpace() {
    return (void*)((uintptr_t)this + 0xec);
}
void _Script_ControlRig::RigUnit_TwoBoneIKSimplePerItem::set_bEnableStretch(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xf8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xf8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_ControlRig::RigUnit_TwoBoneIKSimplePerItem::get_StretchStartRatio() {
    return *(float*)((uintptr_t)this + 0xfc);
}
float& _Script_ControlRig::RigUnit_TwoBoneIKSimplePerItem::get_StretchMaximumRatio() {
    return *(float*)((uintptr_t)this + 0x100);
}
float& _Script_ControlRig::RigUnit_TwoBoneIKSimplePerItem::get_Weight() {
    return *(float*)((uintptr_t)this + 0x104);
}
float& _Script_ControlRig::RigUnit_TwoBoneIKSimplePerItem::get_ItemBLength() {
    return *(float*)((uintptr_t)this + 0x10c);
}
bool _Script_ControlRig::RigUnit_TwoBoneIKSimplePerItem::get_bPropagateToChildren() {
    return (*(uint8_t*)((uintptr_t)this + 0x110 + 0)) & 1 != 0;
}
void _Script_ControlRig::RigUnit_TwoBoneIKSimplePerItem::set_bPropagateToChildren(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x110 + 0);
    *(uint8_t*)((uintptr_t)this + 0x110 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ControlRig::RigUnit_TwoBoneIKSimplePerItem::get_CachedItemAIndex() {
    return (void*)((uintptr_t)this + 0x160);
}
void* _Script_ControlRig::RigUnit_TwoBoneIKSimplePerItem::get_CachedItemBIndex() {
    return (void*)((uintptr_t)this + 0x174);
}
void* _Script_ControlRig::RigUnit_TwoBoneIKSimplePerItem::get_CachedEffectorItemIndex() {
    return (void*)((uintptr_t)this + 0x188);
}
void* _Script_ControlRig::RigUnit_TwoBoneIKSimplePerItem::get_CachedPoleVectorSpaceIndex() {
    return (void*)((uintptr_t)this + 0x19c);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_TwoBoneIKSimplePerItem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_TwoBoneIKSimplePerItem");
    return result;
}
