#include "..\FUObjectArray.hpp"
#include "RigUnit_SimBase.hpp"
#include "RigUnit_VerletIntegrateVector.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_VerletIntegrateVector::get_Velocity() {
    return (void*)((uintptr_t)this + 0x2c);
}
void* _Script_ControlRig::RigUnit_VerletIntegrateVector::get_Target() {
    return (void*)((uintptr_t)this + 0x8);
}
float& _Script_ControlRig::RigUnit_VerletIntegrateVector::get_Strength() {
    return *(float*)((uintptr_t)this + 0x14);
}
float& _Script_ControlRig::RigUnit_VerletIntegrateVector::get_Damp() {
    return *(float*)((uintptr_t)this + 0x18);
}
float& _Script_ControlRig::RigUnit_VerletIntegrateVector::get_Blend() {
    return *(float*)((uintptr_t)this + 0x1c);
}
void* _Script_ControlRig::RigUnit_VerletIntegrateVector::get_Acceleration() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_ControlRig::RigUnit_VerletIntegrateVector::get_Position() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_ControlRig::RigUnit_VerletIntegrateVector::get_Point() {
    return (void*)((uintptr_t)this + 0x44);
}
bool _Script_ControlRig::RigUnit_VerletIntegrateVector::get_bInitialized() {
    return (*(uint8_t*)((uintptr_t)this + 0x6c + 0)) & 1 != 0;
}
void _Script_ControlRig::RigUnit_VerletIntegrateVector::set_bInitialized(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6c + 0);
    *(uint8_t*)((uintptr_t)this + 0x6c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_VerletIntegrateVector::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_VerletIntegrateVector");
    return result;
}
