#include "..\FUObjectArray.hpp"
#include "RigUnit_AlphaInterp.hpp"
#include "RigUnit_SimBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_ControlRig::RigUnit_AlphaInterp::get_Bias() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_ControlRig::RigUnit_AlphaInterp::get_Scale() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_ControlRig::RigUnit_AlphaInterp::get_Value() {
    return *(float*)((uintptr_t)this + 0x8);
}
void* _Script_ControlRig::RigUnit_AlphaInterp::get_OutRange() {
    return (void*)((uintptr_t)this + 0x20);
}
void _Script_ControlRig::RigUnit_AlphaInterp::set_bMapRange(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14 + 0);
    *(uint8_t*)((uintptr_t)this + 0x14 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_ControlRig::RigUnit_AlphaInterp::get_bMapRange() {
    return (*(uint8_t*)((uintptr_t)this + 0x14 + 0)) & 1 != 0;
}
bool _Script_ControlRig::RigUnit_AlphaInterp::get_bClampResult() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
void* _Script_ControlRig::RigUnit_AlphaInterp::get_InRange() {
    return (void*)((uintptr_t)this + 0x18);
}
void _Script_ControlRig::RigUnit_AlphaInterp::set_bClampResult(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_ControlRig::RigUnit_AlphaInterp::get_ClampMin() {
    return *(float*)((uintptr_t)this + 0x2c);
}
float& _Script_ControlRig::RigUnit_AlphaInterp::get_ClampMax() {
    return *(float*)((uintptr_t)this + 0x30);
}
bool _Script_ControlRig::RigUnit_AlphaInterp::get_bInterpResult() {
    return (*(uint8_t*)((uintptr_t)this + 0x34 + 0)) & 1 != 0;
}
void _Script_ControlRig::RigUnit_AlphaInterp::set_bInterpResult(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x34 + 0);
    *(uint8_t*)((uintptr_t)this + 0x34 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_ControlRig::RigUnit_AlphaInterp::get_InterpSpeedIncreasing() {
    return *(float*)((uintptr_t)this + 0x38);
}
float& _Script_ControlRig::RigUnit_AlphaInterp::get_InterpSpeedDecreasing() {
    return *(float*)((uintptr_t)this + 0x3c);
}
void* _Script_ControlRig::RigUnit_AlphaInterp::get_ScaleBiasClamp() {
    return (void*)((uintptr_t)this + 0x44);
}
float& _Script_ControlRig::RigUnit_AlphaInterp::get_Result() {
    return *(float*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_AlphaInterp::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_AlphaInterp");
    return result;
}
