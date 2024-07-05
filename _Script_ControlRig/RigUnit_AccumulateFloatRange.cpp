#include "..\FUObjectArray.hpp"
#include "RigUnit_AccumulateFloatRange.hpp"
#include "RigUnit_SimBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_AccumulateFloatRange::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_AccumulateFloatRange");
    return result;
}
float& _Script_ControlRig::RigUnit_AccumulateFloatRange::get_AccumulatedMaximum() {
    return *(float*)((uintptr_t)this + 0x18);
}
float& _Script_ControlRig::RigUnit_AccumulateFloatRange::get_Maximum() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_ControlRig::RigUnit_AccumulateFloatRange::get_Value() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_ControlRig::RigUnit_AccumulateFloatRange::get_Minimum() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_ControlRig::RigUnit_AccumulateFloatRange::get_AccumulatedMinimum() {
    return *(float*)((uintptr_t)this + 0x14);
}
