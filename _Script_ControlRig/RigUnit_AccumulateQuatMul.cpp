#include "..\FUObjectArray.hpp"
#include "RigUnit_AccumulateQuatMul.hpp"
#include "RigUnit_SimBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
bool _Script_ControlRig::RigUnit_AccumulateQuatMul::get_bFlipOrder() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
void* _Script_ControlRig::RigUnit_AccumulateQuatMul::get_Multiplier() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_ControlRig::RigUnit_AccumulateQuatMul::get_InitialValue() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_ControlRig::RigUnit_AccumulateQuatMul::get_Result() {
    return (void*)((uintptr_t)this + 0x40);
}
bool _Script_ControlRig::RigUnit_AccumulateQuatMul::get_bIntegrateDeltaTime() {
    return (*(uint8_t*)((uintptr_t)this + 0x31 + 0)) & 1 != 0;
}
void _Script_ControlRig::RigUnit_AccumulateQuatMul::set_bFlipOrder(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_ControlRig::RigUnit_AccumulateQuatMul::set_bIntegrateDeltaTime(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x31 + 0);
    *(uint8_t*)((uintptr_t)this + 0x31 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ControlRig::RigUnit_AccumulateQuatMul::get_AccumulatedValue() {
    return (void*)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_AccumulateQuatMul::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_AccumulateQuatMul");
    return result;
}
