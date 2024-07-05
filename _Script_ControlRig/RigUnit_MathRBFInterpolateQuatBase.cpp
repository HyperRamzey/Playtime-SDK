#include "..\FUObjectArray.hpp"
#include "RigUnit_MathRBFInterpolateBase.hpp"
#include "RigUnit_MathRBFInterpolateQuatBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_ControlRig::RigUnit_MathRBFInterpolateQuatBase::get_SmoothingAngle() {
    return *(float*)((uintptr_t)this + 0x24);
}
void* _Script_ControlRig::RigUnit_MathRBFInterpolateQuatBase::get_Input() {
    return (void*)((uintptr_t)this + 0x10);
}
void _Script_ControlRig::RigUnit_MathRBFInterpolateQuatBase::set_bNormalizeOutput(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ControlRig::RigUnit_MathRBFInterpolateQuatBase::get_DistanceFunction() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_ControlRig::RigUnit_MathRBFInterpolateQuatBase::get_SmoothingFunction() {
    return (void*)((uintptr_t)this + 0x21);
}
bool _Script_ControlRig::RigUnit_MathRBFInterpolateQuatBase::get_bNormalizeOutput() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
void* _Script_ControlRig::RigUnit_MathRBFInterpolateQuatBase::get_WorkData() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_ControlRig::RigUnit_MathRBFInterpolateQuatBase::get_TwistAxis() {
    return (void*)((uintptr_t)this + 0x2c);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathRBFInterpolateQuatBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathRBFInterpolateQuatBase");
    return result;
}
