#include "..\FUObjectArray.hpp"
#include "RigUnitMutable.hpp"
#include "RigUnit_SetRelativeTransformForItem.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void _Script_ControlRig::RigUnit_SetRelativeTransformForItem::set_bPropagateToChildren(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ControlRig::RigUnit_SetRelativeTransformForItem::get_Child() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_ControlRig::RigUnit_SetRelativeTransformForItem::get_Parent() {
    return (void*)((uintptr_t)this + 0x74);
}
bool _Script_ControlRig::RigUnit_SetRelativeTransformForItem::get_bPropagateToChildren() {
    return (*(uint8_t*)((uintptr_t)this + 0xc4 + 0)) & 1 != 0;
}
bool _Script_ControlRig::RigUnit_SetRelativeTransformForItem::get_bParentInitial() {
    return (*(uint8_t*)((uintptr_t)this + 0x80 + 0)) & 1 != 0;
}
void _Script_ControlRig::RigUnit_SetRelativeTransformForItem::set_bParentInitial(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x80 + 0);
    *(uint8_t*)((uintptr_t)this + 0x80 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ControlRig::RigUnit_SetRelativeTransformForItem::get_RelativeTransform() {
    return (void*)((uintptr_t)this + 0x90);
}
float& _Script_ControlRig::RigUnit_SetRelativeTransformForItem::get_Weight() {
    return *(float*)((uintptr_t)this + 0xc0);
}
void* _Script_ControlRig::RigUnit_SetRelativeTransformForItem::get_CachedChild() {
    return (void*)((uintptr_t)this + 0xc8);
}
void* _Script_ControlRig::RigUnit_SetRelativeTransformForItem::get_CachedParent() {
    return (void*)((uintptr_t)this + 0xdc);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_SetRelativeTransformForItem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_SetRelativeTransformForItem");
    return result;
}
