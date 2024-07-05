#include "..\FUObjectArray.hpp"
#include "..\_Script_AnimGraphRuntime\AnimNode_SkeletalControlBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\CurveFloat.hpp"
#include "AnimNode_PowerIK_Walk.hpp"
float& _Script_PowerIKRuntime::AnimNode_PowerIK_Walk::get_DebugDrawSize() {
    return *(float*)((uintptr_t)this + 0x16c);
}
void* _Script_PowerIKRuntime::AnimNode_PowerIK_Walk::get_CharacterRoot() {
    return (void*)((uintptr_t)this + 0xc8);
}
float& _Script_PowerIKRuntime::AnimNode_PowerIK_Walk::get_RootRotationMultiplier() {
    return *(float*)((uintptr_t)this + 0xd0);
}
float& _Script_PowerIKRuntime::AnimNode_PowerIK_Walk::get_StepHeightMultiplier() {
    return *(float*)((uintptr_t)this + 0x10c);
}
void* _Script_PowerIKRuntime::AnimNode_PowerIK_Walk::get_Limbs() {
    return (void*)((uintptr_t)this + 0xe8);
}
void* _Script_PowerIKRuntime::AnimNode_PowerIK_Walk::get_BodyInertia() {
    return (void*)((uintptr_t)this + 0xd4);
}
float& _Script_PowerIKRuntime::AnimNode_PowerIK_Walk::get_StepDurationMultiplier() {
    return *(float*)((uintptr_t)this + 0x108);
}
float& _Script_PowerIKRuntime::AnimNode_PowerIK_Walk::get_StepMaxReachDistance() {
    return *(float*)((uintptr_t)this + 0x104);
}
_Script_Engine::CurveFloat*& _Script_PowerIKRuntime::AnimNode_PowerIK_Walk::get_StepHeightCurve() {
    return *(_Script_Engine::CurveFloat**)((uintptr_t)this + 0x110);
}
_Script_Engine::CurveFloat*& _Script_PowerIKRuntime::AnimNode_PowerIK_Walk::get_StepSpeedCurve() {
    return *(_Script_Engine::CurveFloat**)((uintptr_t)this + 0x118);
}
float& _Script_PowerIKRuntime::AnimNode_PowerIK_Walk::get_TeleportDistance() {
    return *(float*)((uintptr_t)this + 0x120);
}
bool _Script_PowerIKRuntime::AnimNode_PowerIK_Walk::get_PrintTeleportWarning() {
    return (*(uint8_t*)((uintptr_t)this + 0x124 + 0)) & 1 != 0;
}
void _Script_PowerIKRuntime::AnimNode_PowerIK_Walk::set_PrintTeleportWarning(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x124 + 0);
    *(uint8_t*)((uintptr_t)this + 0x124 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_PowerIKRuntime::AnimNode_PowerIK_Walk::get_CollisionChannel() {
    return (void*)((uintptr_t)this + 0x125);
}
bool _Script_PowerIKRuntime::AnimNode_PowerIK_Walk::get_TraceComplex() {
    return (*(uint8_t*)((uintptr_t)this + 0x126 + 0)) & 1 != 0;
}
void _Script_PowerIKRuntime::AnimNode_PowerIK_Walk::set_TraceComplex(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x126 + 0);
    *(uint8_t*)((uintptr_t)this + 0x126 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_PowerIKRuntime::AnimNode_PowerIK_Walk::get_BendDirections() {
    return (void*)((uintptr_t)this + 0x128);
}
void* _Script_PowerIKRuntime::AnimNode_PowerIK_Walk::get_ExcludedBones() {
    return (void*)((uintptr_t)this + 0x138);
}
bool _Script_PowerIKRuntime::AnimNode_PowerIK_Walk::get_AllowBoneTranslation() {
    return (*(uint8_t*)((uintptr_t)this + 0x164 + 0)) & 1 != 0;
}
void* _Script_PowerIKRuntime::AnimNode_PowerIK_Walk::get_JointLimits() {
    return (void*)((uintptr_t)this + 0x148);
}
int32_t& _Script_PowerIKRuntime::AnimNode_PowerIK_Walk::get_MaxSquashIterations() {
    return *(int32_t*)((uintptr_t)this + 0x158);
}
int32_t& _Script_PowerIKRuntime::AnimNode_PowerIK_Walk::get_MaxStretchIterations() {
    return *(int32_t*)((uintptr_t)this + 0x15c);
}
int32_t& _Script_PowerIKRuntime::AnimNode_PowerIK_Walk::get_MaxFinalIterations() {
    return *(int32_t*)((uintptr_t)this + 0x160);
}
void _Script_PowerIKRuntime::AnimNode_PowerIK_Walk::set_AllowBoneTranslation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x164 + 0);
    *(uint8_t*)((uintptr_t)this + 0x164 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_PowerIKRuntime::AnimNode_PowerIK_Walk::get_SolverAlpha() {
    return *(float*)((uintptr_t)this + 0x168);
}
_Script_CoreUObject::Class* _Script_PowerIKRuntime::AnimNode_PowerIK_Walk::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/PowerIKRuntime.AnimNode_PowerIK_Walk");
    return result;
}
