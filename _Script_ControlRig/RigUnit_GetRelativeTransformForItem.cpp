#include "..\FUObjectArray.hpp"
#include "RigUnit.hpp"
#include "RigUnit_GetRelativeTransformForItem.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_GetRelativeTransformForItem::get_Parent() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_ControlRig::RigUnit_GetRelativeTransformForItem::get_Child() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_ControlRig::RigUnit_GetRelativeTransformForItem::get_RelativeTransform() {
    return (void*)((uintptr_t)this + 0x30);
}
bool _Script_ControlRig::RigUnit_GetRelativeTransformForItem::get_bParentInitial() {
    return (*(uint8_t*)((uintptr_t)this + 0x24 + 0)) & 1 != 0;
}
bool _Script_ControlRig::RigUnit_GetRelativeTransformForItem::get_bChildInitial() {
    return (*(uint8_t*)((uintptr_t)this + 0x14 + 0)) & 1 != 0;
}
void _Script_ControlRig::RigUnit_GetRelativeTransformForItem::set_bChildInitial(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14 + 0);
    *(uint8_t*)((uintptr_t)this + 0x14 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ControlRig::RigUnit_GetRelativeTransformForItem::get_CachedChild() {
    return (void*)((uintptr_t)this + 0x60);
}
void _Script_ControlRig::RigUnit_GetRelativeTransformForItem::set_bParentInitial(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x24 + 0);
    *(uint8_t*)((uintptr_t)this + 0x24 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ControlRig::RigUnit_GetRelativeTransformForItem::get_CachedParent() {
    return (void*)((uintptr_t)this + 0x74);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_GetRelativeTransformForItem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_GetRelativeTransformForItem");
    return result;
}
