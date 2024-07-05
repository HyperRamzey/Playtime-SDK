#include "..\FUObjectArray.hpp"
#include "..\_Script_ControlRig\RigUnitMutable.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RigUnit_PowerIK.hpp"
void* _Script_PowerIKRuntime::RigUnit_PowerIK::get_CharacterRoot() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_PowerIKRuntime::RigUnit_PowerIK::get_CenterOfGravityConstraint() {
    return (void*)((uintptr_t)this + 0xb8);
}
float& _Script_PowerIKRuntime::RigUnit_PowerIK::get_RootRotationMultiplier() {
    return *(float*)((uintptr_t)this + 0x70);
}
void* _Script_PowerIKRuntime::RigUnit_PowerIK::get_Effectors() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_PowerIKRuntime::RigUnit_PowerIK::get_BendDirections() {
    return (void*)((uintptr_t)this + 0x88);
}
void* _Script_PowerIKRuntime::RigUnit_PowerIK::get_ExcludedBones() {
    return (void*)((uintptr_t)this + 0x98);
}
void* _Script_PowerIKRuntime::RigUnit_PowerIK::get_JointLimits() {
    return (void*)((uintptr_t)this + 0xa8);
}
void* _Script_PowerIKRuntime::RigUnit_PowerIK::get_Inertia() {
    return (void*)((uintptr_t)this + 0xc8);
}
int32_t& _Script_PowerIKRuntime::RigUnit_PowerIK::get_MaxSquashIterations() {
    return *(int32_t*)((uintptr_t)this + 0xdc);
}
int32_t& _Script_PowerIKRuntime::RigUnit_PowerIK::get_MaxStretchIterations() {
    return *(int32_t*)((uintptr_t)this + 0xe0);
}
int32_t& _Script_PowerIKRuntime::RigUnit_PowerIK::get_MaxFinalIterations() {
    return *(int32_t*)((uintptr_t)this + 0xe4);
}
bool _Script_PowerIKRuntime::RigUnit_PowerIK::get_AllowBoneTranslation() {
    return (*(uint8_t*)((uintptr_t)this + 0xe8 + 0)) & 1 != 0;
}
void _Script_PowerIKRuntime::RigUnit_PowerIK::set_AllowBoneTranslation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xe8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_PowerIKRuntime::RigUnit_PowerIK::get_SolverAlpha() {
    return *(float*)((uintptr_t)this + 0xec);
}
void* _Script_PowerIKRuntime::RigUnit_PowerIK::get_Core() {
    return (void*)((uintptr_t)this + 0xf0);
}
_Script_CoreUObject::Class* _Script_PowerIKRuntime::RigUnit_PowerIK::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/PowerIKRuntime.RigUnit_PowerIK");
    return result;
}
