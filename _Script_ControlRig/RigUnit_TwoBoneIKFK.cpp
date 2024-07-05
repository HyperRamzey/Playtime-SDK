#include "..\FUObjectArray.hpp"
#include "RigUnitMutable.hpp"
#include "RigUnit_TwoBoneIKFK.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_TwoBoneIKFK::get_PoleTarget() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_ControlRig::RigUnit_TwoBoneIKFK::get_StartJoint() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_ControlRig::RigUnit_TwoBoneIKFK::get_MidJointFKTransform() {
    return (void*)((uintptr_t)this + 0x100);
}
void* _Script_ControlRig::RigUnit_TwoBoneIKFK::get_EndJoint() {
    return (void*)((uintptr_t)this + 0x70);
}
float& _Script_ControlRig::RigUnit_TwoBoneIKFK::get_Spin() {
    return *(float*)((uintptr_t)this + 0x84);
}
void* _Script_ControlRig::RigUnit_TwoBoneIKFK::get_EndEffector() {
    return (void*)((uintptr_t)this + 0x90);
}
float& _Script_ControlRig::RigUnit_TwoBoneIKFK::get_IKBlend() {
    return *(float*)((uintptr_t)this + 0xc0);
}
void* _Script_ControlRig::RigUnit_TwoBoneIKFK::get_StartJointFKTransform() {
    return (void*)((uintptr_t)this + 0xd0);
}
void* _Script_ControlRig::RigUnit_TwoBoneIKFK::get_EndJointFKTransform() {
    return (void*)((uintptr_t)this + 0x130);
}
float& _Script_ControlRig::RigUnit_TwoBoneIKFK::get_PreviousFKIKBlend() {
    return *(float*)((uintptr_t)this + 0x160);
}
void* _Script_ControlRig::RigUnit_TwoBoneIKFK::get_StartJointIKTransform() {
    return (void*)((uintptr_t)this + 0x170);
}
void* _Script_ControlRig::RigUnit_TwoBoneIKFK::get_MidJointIKTransform() {
    return (void*)((uintptr_t)this + 0x1a0);
}
void* _Script_ControlRig::RigUnit_TwoBoneIKFK::get_EndJointIKTransform() {
    return (void*)((uintptr_t)this + 0x1d0);
}
int32_t& _Script_ControlRig::RigUnit_TwoBoneIKFK::get_StartJointIndex() {
    return *(int32_t*)((uintptr_t)this + 0x200);
}
int32_t& _Script_ControlRig::RigUnit_TwoBoneIKFK::get_MidJointIndex() {
    return *(int32_t*)((uintptr_t)this + 0x204);
}
int32_t& _Script_ControlRig::RigUnit_TwoBoneIKFK::get_EndJointIndex() {
    return *(int32_t*)((uintptr_t)this + 0x208);
}
float& _Script_ControlRig::RigUnit_TwoBoneIKFK::get_UpperLimbLength() {
    return *(float*)((uintptr_t)this + 0x20c);
}
float& _Script_ControlRig::RigUnit_TwoBoneIKFK::get_LowerLimbLength() {
    return *(float*)((uintptr_t)this + 0x210);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_TwoBoneIKFK::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_TwoBoneIKFK");
    return result;
}
