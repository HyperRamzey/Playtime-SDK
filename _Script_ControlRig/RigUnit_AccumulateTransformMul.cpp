#include "..\FUObjectArray.hpp"
#include "RigUnit_AccumulateTransformMul.hpp"
#include "RigUnit_SimBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_AccumulateTransformMul::get_Multiplier() {
    return (void*)((uintptr_t)this + 0x10);
}
bool _Script_ControlRig::RigUnit_AccumulateTransformMul::get_bIntegrateDeltaTime() {
    return (*(uint8_t*)((uintptr_t)this + 0x71 + 0)) & 1 != 0;
}
void* _Script_ControlRig::RigUnit_AccumulateTransformMul::get_InitialValue() {
    return (void*)((uintptr_t)this + 0x40);
}
void _Script_ControlRig::RigUnit_AccumulateTransformMul::set_bIntegrateDeltaTime(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x71 + 0);
    *(uint8_t*)((uintptr_t)this + 0x71 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_ControlRig::RigUnit_AccumulateTransformMul::get_bFlipOrder() {
    return (*(uint8_t*)((uintptr_t)this + 0x70 + 0)) & 1 != 0;
}
void _Script_ControlRig::RigUnit_AccumulateTransformMul::set_bFlipOrder(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x70 + 0);
    *(uint8_t*)((uintptr_t)this + 0x70 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ControlRig::RigUnit_AccumulateTransformMul::get_Result() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_ControlRig::RigUnit_AccumulateTransformMul::get_AccumulatedValue() {
    return (void*)((uintptr_t)this + 0xb0);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_AccumulateTransformMul::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_AccumulateTransformMul");
    return result;
}
