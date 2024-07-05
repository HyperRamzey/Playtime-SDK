#include "..\FUObjectArray.hpp"
#include "RigUnitMutable.hpp"
#include "RigUnit_OffsetTransformForItem.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_OffsetTransformForItem::get_CachedIndex() {
    return (void*)((uintptr_t)this + 0xb8);
}
void* _Script_ControlRig::RigUnit_OffsetTransformForItem::get_Item() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_ControlRig::RigUnit_OffsetTransformForItem::get_OffsetTransform() {
    return (void*)((uintptr_t)this + 0x80);
}
float& _Script_ControlRig::RigUnit_OffsetTransformForItem::get_Weight() {
    return *(float*)((uintptr_t)this + 0xb0);
}
bool _Script_ControlRig::RigUnit_OffsetTransformForItem::get_bPropagateToChildren() {
    return (*(uint8_t*)((uintptr_t)this + 0xb4 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_OffsetTransformForItem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_OffsetTransformForItem");
    return result;
}
void _Script_ControlRig::RigUnit_OffsetTransformForItem::set_bPropagateToChildren(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
