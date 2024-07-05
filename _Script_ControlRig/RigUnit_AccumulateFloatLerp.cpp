#include "..\FUObjectArray.hpp"
#include "RigUnit_AccumulateFloatLerp.hpp"
#include "RigUnit_SimBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_ControlRig::RigUnit_AccumulateFloatLerp::get_InitialValue() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_ControlRig::RigUnit_AccumulateFloatLerp::get_TargetValue() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_ControlRig::RigUnit_AccumulateFloatLerp::get_Result() {
    return *(float*)((uintptr_t)this + 0x18);
}
float& _Script_ControlRig::RigUnit_AccumulateFloatLerp::get_Blend() {
    return *(float*)((uintptr_t)this + 0x10);
}
bool _Script_ControlRig::RigUnit_AccumulateFloatLerp::get_bIntegrateDeltaTime() {
    return (*(uint8_t*)((uintptr_t)this + 0x14 + 0)) & 1 != 0;
}
void _Script_ControlRig::RigUnit_AccumulateFloatLerp::set_bIntegrateDeltaTime(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14 + 0);
    *(uint8_t*)((uintptr_t)this + 0x14 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_ControlRig::RigUnit_AccumulateFloatLerp::get_AccumulatedValue() {
    return *(float*)((uintptr_t)this + 0x1c);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_AccumulateFloatLerp::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_AccumulateFloatLerp");
    return result;
}
