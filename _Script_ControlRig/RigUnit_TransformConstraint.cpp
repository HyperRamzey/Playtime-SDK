#include "..\FUObjectArray.hpp"
#include "RigUnit_HighlevelBaseMutable.hpp"
#include "RigUnit_TransformConstraint.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_TransformConstraint::get_Bone() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_ControlRig::RigUnit_TransformConstraint::get_BaseTransformSpace() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_ControlRig::RigUnit_TransformConstraint::get_BaseTransform() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_ControlRig::RigUnit_TransformConstraint::get_Targets() {
    return (void*)((uintptr_t)this + 0xb8);
}
void* _Script_ControlRig::RigUnit_TransformConstraint::get_BaseBone() {
    return (void*)((uintptr_t)this + 0xb0);
}
bool _Script_ControlRig::RigUnit_TransformConstraint::get_bUseInitialTransforms() {
    return (*(uint8_t*)((uintptr_t)this + 0xc8 + 0)) & 1 != 0;
}
void _Script_ControlRig::RigUnit_TransformConstraint::set_bUseInitialTransforms(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ControlRig::RigUnit_TransformConstraint::get_WorkData() {
    return (void*)((uintptr_t)this + 0xd0);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_TransformConstraint::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_TransformConstraint");
    return result;
}
