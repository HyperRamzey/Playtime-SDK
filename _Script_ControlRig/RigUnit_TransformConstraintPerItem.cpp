#include "..\FUObjectArray.hpp"
#include "RigUnit_HighlevelBaseMutable.hpp"
#include "RigUnit_TransformConstraintPerItem.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_TransformConstraintPerItem::get_Item() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_ControlRig::RigUnit_TransformConstraintPerItem::get_Targets() {
    return (void*)((uintptr_t)this + 0xc0);
}
void* _Script_ControlRig::RigUnit_TransformConstraintPerItem::get_BaseTransformSpace() {
    return (void*)((uintptr_t)this + 0x74);
}
void* _Script_ControlRig::RigUnit_TransformConstraintPerItem::get_BaseTransform() {
    return (void*)((uintptr_t)this + 0x80);
}
bool _Script_ControlRig::RigUnit_TransformConstraintPerItem::get_bUseInitialTransforms() {
    return (*(uint8_t*)((uintptr_t)this + 0xd0 + 0)) & 1 != 0;
}
void* _Script_ControlRig::RigUnit_TransformConstraintPerItem::get_BaseItem() {
    return (void*)((uintptr_t)this + 0xb0);
}
void _Script_ControlRig::RigUnit_TransformConstraintPerItem::set_bUseInitialTransforms(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ControlRig::RigUnit_TransformConstraintPerItem::get_WorkData() {
    return (void*)((uintptr_t)this + 0xd8);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_TransformConstraintPerItem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_TransformConstraintPerItem");
    return result;
}
