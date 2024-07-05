#include "..\FUObjectArray.hpp"
#include "RigUnit_PointSimulation.hpp"
#include "RigUnit_SimBaseMutable.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_PointSimulation::get_Points() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_ControlRig::RigUnit_PointSimulation::get_BoneTargets() {
    return (void*)((uintptr_t)this + 0xb8);
}
void* _Script_ControlRig::RigUnit_PointSimulation::get_IntegratorType() {
    return (void*)((uintptr_t)this + 0xac);
}
void* _Script_ControlRig::RigUnit_PointSimulation::get_Links() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_ControlRig::RigUnit_PointSimulation::get_Forces() {
    return (void*)((uintptr_t)this + 0x88);
}
void* _Script_ControlRig::RigUnit_PointSimulation::get_CollisionVolumes() {
    return (void*)((uintptr_t)this + 0x98);
}
float& _Script_ControlRig::RigUnit_PointSimulation::get_SimulatedStepsPerSecond() {
    return *(float*)((uintptr_t)this + 0xa8);
}
float& _Script_ControlRig::RigUnit_PointSimulation::get_VerletBlend() {
    return *(float*)((uintptr_t)this + 0xb0);
}
bool _Script_ControlRig::RigUnit_PointSimulation::get_bLimitLocalPosition() {
    return (*(uint8_t*)((uintptr_t)this + 0xc8 + 0)) & 1 != 0;
}
void _Script_ControlRig::RigUnit_PointSimulation::set_bLimitLocalPosition(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_ControlRig::RigUnit_PointSimulation::get_bPropagateToChildren() {
    return (*(uint8_t*)((uintptr_t)this + 0xc9 + 0)) & 1 != 0;
}
void _Script_ControlRig::RigUnit_PointSimulation::set_bPropagateToChildren(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc9 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ControlRig::RigUnit_PointSimulation::get_PrimaryAimAxis() {
    return (void*)((uintptr_t)this + 0xcc);
}
void* _Script_ControlRig::RigUnit_PointSimulation::get_SecondaryAimAxis() {
    return (void*)((uintptr_t)this + 0xd8);
}
void* _Script_ControlRig::RigUnit_PointSimulation::get_DebugSettings() {
    return (void*)((uintptr_t)this + 0xf0);
}
void* _Script_ControlRig::RigUnit_PointSimulation::get_Bezier() {
    return (void*)((uintptr_t)this + 0x140);
}
void* _Script_ControlRig::RigUnit_PointSimulation::get_WorkData() {
    return (void*)((uintptr_t)this + 0x170);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_PointSimulation::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_PointSimulation");
    return result;
}
