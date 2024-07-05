#include "..\FUObjectArray.hpp"
#include "..\_Script_AnimGraphRuntime\AnimNode_SkeletalControlBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimNode_PowerIK_Ground.hpp"
_Script_CoreUObject::Class* _Script_PowerIKRuntime::AnimNode_PowerIK_Ground::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/PowerIKRuntime.AnimNode_PowerIK_Ground");
    return result;
}
void* _Script_PowerIKRuntime::AnimNode_PowerIK_Ground::get_BendDirections() {
    return (void*)((uintptr_t)this + 0x1a8);
}
void* _Script_PowerIKRuntime::AnimNode_PowerIK_Ground::get_BodyInertia() {
    return (void*)((uintptr_t)this + 0xd0);
}
void* _Script_PowerIKRuntime::AnimNode_PowerIK_Ground::get_CharacterRoot() {
    return (void*)((uintptr_t)this + 0xc8);
}
void* _Script_PowerIKRuntime::AnimNode_PowerIK_Ground::get_Feet() {
    return (void*)((uintptr_t)this + 0xe8);
}
float& _Script_PowerIKRuntime::AnimNode_PowerIK_Ground::get_FeetDeltaSmoothSpeed() {
    return *(float*)((uintptr_t)this + 0xf8);
}
float& _Script_PowerIKRuntime::AnimNode_PowerIK_Ground::get_RootRotationMultiplier() {
    return *(float*)((uintptr_t)this + 0xfc);
}
void* _Script_PowerIKRuntime::AnimNode_PowerIK_Ground::get_GroundCollision() {
    return (void*)((uintptr_t)this + 0x100);
}
void* _Script_PowerIKRuntime::AnimNode_PowerIK_Ground::get_GroundSlope() {
    return (void*)((uintptr_t)this + 0x114);
}
void* _Script_PowerIKRuntime::AnimNode_PowerIK_Ground::get_ExcludedBones() {
    return (void*)((uintptr_t)this + 0x1b8);
}
void* _Script_PowerIKRuntime::AnimNode_PowerIK_Ground::get_JointLimits() {
    return (void*)((uintptr_t)this + 0x1c8);
}
int32_t& _Script_PowerIKRuntime::AnimNode_PowerIK_Ground::get_MaxSquashIterations() {
    return *(int32_t*)((uintptr_t)this + 0x1e8);
}
int32_t& _Script_PowerIKRuntime::AnimNode_PowerIK_Ground::get_MaxStretchIterations() {
    return *(int32_t*)((uintptr_t)this + 0x1ec);
}
int32_t& _Script_PowerIKRuntime::AnimNode_PowerIK_Ground::get_MaxFinalIterations() {
    return *(int32_t*)((uintptr_t)this + 0x1f0);
}
bool _Script_PowerIKRuntime::AnimNode_PowerIK_Ground::get_AllowBoneTranslation() {
    return (*(uint8_t*)((uintptr_t)this + 0x1f4 + 0)) & 1 != 0;
}
void _Script_PowerIKRuntime::AnimNode_PowerIK_Ground::set_AllowBoneTranslation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1f4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1f4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_PowerIKRuntime::AnimNode_PowerIK_Ground::get_SolverAlpha() {
    return *(float*)((uintptr_t)this + 0x1f8);
}
float& _Script_PowerIKRuntime::AnimNode_PowerIK_Ground::get_DebugDrawSize() {
    return *(float*)((uintptr_t)this + 0x1fc);
}
