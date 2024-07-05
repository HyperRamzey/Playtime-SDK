#include "..\FUObjectArray.hpp"
#include "RigUnit_HighlevelBase.hpp"
#include "RigUnit_TwoBoneIKSimpleVectors.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_TwoBoneIKSimpleVectors::get_Root() {
    return (void*)((uintptr_t)this + 0x8);
}
bool _Script_ControlRig::RigUnit_TwoBoneIKSimpleVectors::get_bEnableStretch() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c + 0)) & 1 != 0;
}
void* _Script_ControlRig::RigUnit_TwoBoneIKSimpleVectors::get_PoleVector() {
    return (void*)((uintptr_t)this + 0x14);
}
void* _Script_ControlRig::RigUnit_TwoBoneIKSimpleVectors::get_Effector() {
    return (void*)((uintptr_t)this + 0x20);
}
float& _Script_ControlRig::RigUnit_TwoBoneIKSimpleVectors::get_StretchMaximumRatio() {
    return *(float*)((uintptr_t)this + 0x34);
}
void _Script_ControlRig::RigUnit_TwoBoneIKSimpleVectors::set_bEnableStretch(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_ControlRig::RigUnit_TwoBoneIKSimpleVectors::get_StretchStartRatio() {
    return *(float*)((uintptr_t)this + 0x30);
}
float& _Script_ControlRig::RigUnit_TwoBoneIKSimpleVectors::get_BoneALength() {
    return *(float*)((uintptr_t)this + 0x38);
}
float& _Script_ControlRig::RigUnit_TwoBoneIKSimpleVectors::get_BoneBLength() {
    return *(float*)((uintptr_t)this + 0x3c);
}
void* _Script_ControlRig::RigUnit_TwoBoneIKSimpleVectors::get_Elbow() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_TwoBoneIKSimpleVectors::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_TwoBoneIKSimpleVectors");
    return result;
}
