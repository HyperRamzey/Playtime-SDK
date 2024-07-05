#include "..\FUObjectArray.hpp"
#include "RigUnit_AccumulateFloatMul.hpp"
#include "RigUnit_SimBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_ControlRig::RigUnit_AccumulateFloatMul::get_Result() {
    return *(float*)((uintptr_t)this + 0x14);
}
bool _Script_ControlRig::RigUnit_AccumulateFloatMul::get_bIntegrateDeltaTime() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 1 != 0;
}
float& _Script_ControlRig::RigUnit_AccumulateFloatMul::get_Multiplier() {
    return *(float*)((uintptr_t)this + 0x8);
}
void _Script_ControlRig::RigUnit_AccumulateFloatMul::set_bIntegrateDeltaTime(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_ControlRig::RigUnit_AccumulateFloatMul::get_InitialValue() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_ControlRig::RigUnit_AccumulateFloatMul::get_AccumulatedValue() {
    return *(float*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_AccumulateFloatMul::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_AccumulateFloatMul");
    return result;
}
