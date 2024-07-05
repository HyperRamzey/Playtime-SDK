#include "..\FUObjectArray.hpp"
#include "..\_Script_AnimGraphRuntime\AnimNode_SkeletalControlBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimNode_PowerIK.hpp"
void* _Script_PowerIKRuntime::AnimNode_PowerIK::get_CharacterRoot() {
    return (void*)((uintptr_t)this + 0xc8);
}
void* _Script_PowerIKRuntime::AnimNode_PowerIK::get_JointLimits() {
    return (void*)((uintptr_t)this + 0x108);
}
float& _Script_PowerIKRuntime::AnimNode_PowerIK::get_RootRotationMultiplier() {
    return *(float*)((uintptr_t)this + 0xd0);
}
void* _Script_PowerIKRuntime::AnimNode_PowerIK::get_Effectors() {
    return (void*)((uintptr_t)this + 0x118);
}
void* _Script_PowerIKRuntime::AnimNode_PowerIK::get_BodyInertia() {
    return (void*)((uintptr_t)this + 0xd4);
}
void* _Script_PowerIKRuntime::AnimNode_PowerIK::get_BendDirections() {
    return (void*)((uintptr_t)this + 0xe8);
}
void* _Script_PowerIKRuntime::AnimNode_PowerIK::get_ExcludedBones() {
    return (void*)((uintptr_t)this + 0xf8);
}
float& _Script_PowerIKRuntime::AnimNode_PowerIK::get_SmoothingMaxSpeedMultiplier() {
    return *(float*)((uintptr_t)this + 0x128);
}
float& _Script_PowerIKRuntime::AnimNode_PowerIK::get_SmoothingMaxDistanceMultiplier() {
    return *(float*)((uintptr_t)this + 0x12c);
}
void* _Script_PowerIKRuntime::AnimNode_PowerIK::get_CenterOfGravityConstraint() {
    return (void*)((uintptr_t)this + 0x130);
}
int32_t& _Script_PowerIKRuntime::AnimNode_PowerIK::get_MaxSquashIterations() {
    return *(int32_t*)((uintptr_t)this + 0x140);
}
int32_t& _Script_PowerIKRuntime::AnimNode_PowerIK::get_MaxStretchIterations() {
    return *(int32_t*)((uintptr_t)this + 0x144);
}
int32_t& _Script_PowerIKRuntime::AnimNode_PowerIK::get_MaxFinalIterations() {
    return *(int32_t*)((uintptr_t)this + 0x148);
}
bool _Script_PowerIKRuntime::AnimNode_PowerIK::get_AllowBoneTranslation() {
    return (*(uint8_t*)((uintptr_t)this + 0x14c + 0)) & 1 != 0;
}
void _Script_PowerIKRuntime::AnimNode_PowerIK::set_AllowBoneTranslation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14c + 0);
    *(uint8_t*)((uintptr_t)this + 0x14c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_PowerIKRuntime::AnimNode_PowerIK::get_SolverAlpha() {
    return *(float*)((uintptr_t)this + 0x150);
}
float& _Script_PowerIKRuntime::AnimNode_PowerIK::get_DebugDrawSize() {
    return *(float*)((uintptr_t)this + 0x154);
}
_Script_CoreUObject::Class* _Script_PowerIKRuntime::AnimNode_PowerIK::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/PowerIKRuntime.AnimNode_PowerIK");
    return result;
}
