#include "..\FUObjectArray.hpp"
#include "RigUnit_MathRBFInterpolateBase.hpp"
#include "RigUnit_MathRBFInterpolateVectorBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
bool _Script_ControlRig::RigUnit_MathRBFInterpolateVectorBase::get_bNormalizeOutput() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c + 0)) & 1 != 0;
}
void* _Script_ControlRig::RigUnit_MathRBFInterpolateVectorBase::get_DistanceFunction() {
    return (void*)((uintptr_t)this + 0x14);
}
void* _Script_ControlRig::RigUnit_MathRBFInterpolateVectorBase::get_Input() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathRBFInterpolateVectorBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathRBFInterpolateVectorBase");
    return result;
}
void* _Script_ControlRig::RigUnit_MathRBFInterpolateVectorBase::get_SmoothingFunction() {
    return (void*)((uintptr_t)this + 0x15);
}
float& _Script_ControlRig::RigUnit_MathRBFInterpolateVectorBase::get_SmoothingRadius() {
    return *(float*)((uintptr_t)this + 0x18);
}
void _Script_ControlRig::RigUnit_MathRBFInterpolateVectorBase::set_bNormalizeOutput(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ControlRig::RigUnit_MathRBFInterpolateVectorBase::get_WorkData() {
    return (void*)((uintptr_t)this + 0x20);
}
