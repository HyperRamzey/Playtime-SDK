#include "..\FUObjectArray.hpp"
#include "RigUnit_HighlevelBaseMutable.hpp"
#include "RigUnit_TwoBoneIKSimple.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_ControlRig::RigUnit_TwoBoneIKSimple::get_SecondaryAxisWeight() {
    return *(float*)((uintptr_t)this + 0xc8);
}
void* _Script_ControlRig::RigUnit_TwoBoneIKSimple::get_BoneA() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_ControlRig::RigUnit_TwoBoneIKSimple::get_PrimaryAxis() {
    return (void*)((uintptr_t)this + 0xb0);
}
void* _Script_ControlRig::RigUnit_TwoBoneIKSimple::get_BoneB() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_ControlRig::RigUnit_TwoBoneIKSimple::get_EffectorBone() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_ControlRig::RigUnit_TwoBoneIKSimple::get_Effector() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_ControlRig::RigUnit_TwoBoneIKSimple::get_SecondaryAxis() {
    return (void*)((uintptr_t)this + 0xbc);
}
void* _Script_ControlRig::RigUnit_TwoBoneIKSimple::get_CachedEffectorBoneIndex() {
    return (void*)((uintptr_t)this + 0x168);
}
void* _Script_ControlRig::RigUnit_TwoBoneIKSimple::get_PoleVector() {
    return (void*)((uintptr_t)this + 0xcc);
}
void* _Script_ControlRig::RigUnit_TwoBoneIKSimple::get_PoleVectorKind() {
    return (void*)((uintptr_t)this + 0xd8);
}
void* _Script_ControlRig::RigUnit_TwoBoneIKSimple::get_PoleVectorSpace() {
    return (void*)((uintptr_t)this + 0xdc);
}
void* _Script_ControlRig::RigUnit_TwoBoneIKSimple::get_DebugSettings() {
    return (void*)((uintptr_t)this + 0x100);
}
bool _Script_ControlRig::RigUnit_TwoBoneIKSimple::get_bEnableStretch() {
    return (*(uint8_t*)((uintptr_t)this + 0xe4 + 0)) & 1 != 0;
}
void _Script_ControlRig::RigUnit_TwoBoneIKSimple::set_bEnableStretch(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xe4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_ControlRig::RigUnit_TwoBoneIKSimple::get_StretchStartRatio() {
    return *(float*)((uintptr_t)this + 0xe8);
}
float& _Script_ControlRig::RigUnit_TwoBoneIKSimple::get_StretchMaximumRatio() {
    return *(float*)((uintptr_t)this + 0xec);
}
float& _Script_ControlRig::RigUnit_TwoBoneIKSimple::get_Weight() {
    return *(float*)((uintptr_t)this + 0xf0);
}
float& _Script_ControlRig::RigUnit_TwoBoneIKSimple::get_BoneALength() {
    return *(float*)((uintptr_t)this + 0xf4);
}
float& _Script_ControlRig::RigUnit_TwoBoneIKSimple::get_BoneBLength() {
    return *(float*)((uintptr_t)this + 0xf8);
}
bool _Script_ControlRig::RigUnit_TwoBoneIKSimple::get_bPropagateToChildren() {
    return (*(uint8_t*)((uintptr_t)this + 0xfc + 0)) & 1 != 0;
}
void _Script_ControlRig::RigUnit_TwoBoneIKSimple::set_bPropagateToChildren(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xfc + 0);
    *(uint8_t*)((uintptr_t)this + 0xfc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ControlRig::RigUnit_TwoBoneIKSimple::get_CachedBoneAIndex() {
    return (void*)((uintptr_t)this + 0x140);
}
void* _Script_ControlRig::RigUnit_TwoBoneIKSimple::get_CachedBoneBIndex() {
    return (void*)((uintptr_t)this + 0x154);
}
void* _Script_ControlRig::RigUnit_TwoBoneIKSimple::get_CachedPoleVectorSpaceIndex() {
    return (void*)((uintptr_t)this + 0x17c);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_TwoBoneIKSimple::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_TwoBoneIKSimple");
    return result;
}
