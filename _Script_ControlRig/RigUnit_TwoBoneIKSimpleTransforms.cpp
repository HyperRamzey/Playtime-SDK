#include "..\FUObjectArray.hpp"
#include "RigUnit_HighlevelBase.hpp"
#include "RigUnit_TwoBoneIKSimpleTransforms.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_TwoBoneIKSimpleTransforms::get_PrimaryAxis() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_ControlRig::RigUnit_TwoBoneIKSimpleTransforms::get_Root() {
    return (void*)((uintptr_t)this + 0x10);
}
bool _Script_ControlRig::RigUnit_TwoBoneIKSimpleTransforms::get_bEnableStretch() {
    return (*(uint8_t*)((uintptr_t)this + 0x9c + 0)) & 1 != 0;
}
void* _Script_ControlRig::RigUnit_TwoBoneIKSimpleTransforms::get_PoleVector() {
    return (void*)((uintptr_t)this + 0x40);
}
float& _Script_ControlRig::RigUnit_TwoBoneIKSimpleTransforms::get_StretchMaximumRatio() {
    return *(float*)((uintptr_t)this + 0xa4);
}
float& _Script_ControlRig::RigUnit_TwoBoneIKSimpleTransforms::get_SecondaryAxisWeight() {
    return *(float*)((uintptr_t)this + 0x98);
}
void* _Script_ControlRig::RigUnit_TwoBoneIKSimpleTransforms::get_Effector() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_ControlRig::RigUnit_TwoBoneIKSimpleTransforms::get_SecondaryAxis() {
    return (void*)((uintptr_t)this + 0x8c);
}
void _Script_ControlRig::RigUnit_TwoBoneIKSimpleTransforms::set_bEnableStretch(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9c + 0);
    *(uint8_t*)((uintptr_t)this + 0x9c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_ControlRig::RigUnit_TwoBoneIKSimpleTransforms::get_StretchStartRatio() {
    return *(float*)((uintptr_t)this + 0xa0);
}
float& _Script_ControlRig::RigUnit_TwoBoneIKSimpleTransforms::get_BoneALength() {
    return *(float*)((uintptr_t)this + 0xa8);
}
float& _Script_ControlRig::RigUnit_TwoBoneIKSimpleTransforms::get_BoneBLength() {
    return *(float*)((uintptr_t)this + 0xac);
}
void* _Script_ControlRig::RigUnit_TwoBoneIKSimpleTransforms::get_Elbow() {
    return (void*)((uintptr_t)this + 0xb0);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_TwoBoneIKSimpleTransforms::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_TwoBoneIKSimpleTransforms");
    return result;
}
