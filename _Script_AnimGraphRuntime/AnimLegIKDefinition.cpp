#include "..\FUObjectArray.hpp"
#include "AnimLegIKDefinition.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AnimGraphRuntime::AnimLegIKDefinition::get_FKFootBone() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_AnimGraphRuntime::AnimLegIKDefinition::get_IKFootBone() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_AnimGraphRuntime::AnimLegIKDefinition::get_NumBonesInLimb() {
    return *(int32_t*)((uintptr_t)this + 0x20);
}
void _Script_AnimGraphRuntime::AnimLegIKDefinition::set_bEnableRotationLimit(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2a + 0);
    *(uint8_t*)((uintptr_t)this + 0x2a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_AnimGraphRuntime::AnimLegIKDefinition::get_MinRotationAngle() {
    return *(float*)((uintptr_t)this + 0x24);
}
void* _Script_AnimGraphRuntime::AnimLegIKDefinition::get_HingeRotationAxis() {
    return (void*)((uintptr_t)this + 0x29);
}
void* _Script_AnimGraphRuntime::AnimLegIKDefinition::get_FootBoneForwardAxis() {
    return (void*)((uintptr_t)this + 0x28);
}
bool _Script_AnimGraphRuntime::AnimLegIKDefinition::get_bEnableRotationLimit() {
    return (*(uint8_t*)((uintptr_t)this + 0x2a + 0)) & 1 != 0;
}
bool _Script_AnimGraphRuntime::AnimLegIKDefinition::get_bEnableKneeTwistCorrection() {
    return (*(uint8_t*)((uintptr_t)this + 0x2b + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimLegIKDefinition::set_bEnableKneeTwistCorrection(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2b + 0);
    *(uint8_t*)((uintptr_t)this + 0x2b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimLegIKDefinition::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimLegIKDefinition");
    return result;
}
