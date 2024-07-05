#include "..\FUObjectArray.hpp"
#include "RigUnit_AccumulateVectorRange.hpp"
#include "RigUnit_SimBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_AccumulateVectorRange::get_AccumulatedMaximum() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_ControlRig::RigUnit_AccumulateVectorRange::get_Value() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_ControlRig::RigUnit_AccumulateVectorRange::get_Minimum() {
    return (void*)((uintptr_t)this + 0x14);
}
void* _Script_ControlRig::RigUnit_AccumulateVectorRange::get_Maximum() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_ControlRig::RigUnit_AccumulateVectorRange::get_AccumulatedMinimum() {
    return (void*)((uintptr_t)this + 0x2c);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_AccumulateVectorRange::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_AccumulateVectorRange");
    return result;
}
