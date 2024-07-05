#include "..\FUObjectArray.hpp"
#include "RigUnit_AccumulateFloatAdd.hpp"
#include "RigUnit_SimBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_ControlRig::RigUnit_AccumulateFloatAdd::get_Increment() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_ControlRig::RigUnit_AccumulateFloatAdd::get_AccumulatedValue() {
    return *(float*)((uintptr_t)this + 0x18);
}
float& _Script_ControlRig::RigUnit_AccumulateFloatAdd::get_InitialValue() {
    return *(float*)((uintptr_t)this + 0xc);
}
void _Script_ControlRig::RigUnit_AccumulateFloatAdd::set_bIntegrateDeltaTime(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_ControlRig::RigUnit_AccumulateFloatAdd::get_bIntegrateDeltaTime() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 1 != 0;
}
float& _Script_ControlRig::RigUnit_AccumulateFloatAdd::get_Result() {
    return *(float*)((uintptr_t)this + 0x14);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_AccumulateFloatAdd::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_AccumulateFloatAdd");
    return result;
}
