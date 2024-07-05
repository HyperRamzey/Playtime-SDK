#include "..\FUObjectArray.hpp"
#include "ControlRigNumericalValidationPass.hpp"
#include "ControlRigValidationPass.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_ControlRig::ControlRigNumericalValidationPass::get_TranslationPrecision() {
    return *(float*)((uintptr_t)this + 0x2c);
}
bool _Script_ControlRig::ControlRigNumericalValidationPass::get_bCheckBones() {
    return (*(uint8_t*)((uintptr_t)this + 0x29 + 0)) & 1 != 0;
}
bool _Script_ControlRig::ControlRigNumericalValidationPass::get_bCheckControls() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
bool _Script_ControlRig::ControlRigNumericalValidationPass::get_bCheckCurves() {
    return (*(uint8_t*)((uintptr_t)this + 0x2a + 0)) & 1 != 0;
}
void _Script_ControlRig::ControlRigNumericalValidationPass::set_bCheckBones(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x29 + 0);
    *(uint8_t*)((uintptr_t)this + 0x29 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_ControlRig::ControlRigNumericalValidationPass::set_bCheckControls(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_ControlRig::ControlRigNumericalValidationPass::set_bCheckCurves(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2a + 0);
    *(uint8_t*)((uintptr_t)this + 0x2a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_ControlRig::ControlRigNumericalValidationPass::get_RotationPrecision() {
    return *(float*)((uintptr_t)this + 0x30);
}
float& _Script_ControlRig::ControlRigNumericalValidationPass::get_ScalePrecision() {
    return *(float*)((uintptr_t)this + 0x34);
}
float& _Script_ControlRig::ControlRigNumericalValidationPass::get_CurvePrecision() {
    return *(float*)((uintptr_t)this + 0x38);
}
void* _Script_ControlRig::ControlRigNumericalValidationPass::get_EventNameA() {
    return (void*)((uintptr_t)this + 0x3c);
}
void* _Script_ControlRig::ControlRigNumericalValidationPass::get_EventNameB() {
    return (void*)((uintptr_t)this + 0x44);
}
void* _Script_ControlRig::ControlRigNumericalValidationPass::get_Pose() {
    return (void*)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Class* _Script_ControlRig::ControlRigNumericalValidationPass::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ControlRig.ControlRigNumericalValidationPass");
    return result;
}
