#include "..\FUObjectArray.hpp"
#include "RigUnit_AlphaInterpVector.hpp"
#include "RigUnit_SimBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
bool _Script_ControlRig::RigUnit_AlphaInterpVector::get_bClampResult() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
void* _Script_ControlRig::RigUnit_AlphaInterpVector::get_Value() {
    return (void*)((uintptr_t)this + 0x8);
}
float& _Script_ControlRig::RigUnit_AlphaInterpVector::get_Scale() {
    return *(float*)((uintptr_t)this + 0x14);
}
float& _Script_ControlRig::RigUnit_AlphaInterpVector::get_Bias() {
    return *(float*)((uintptr_t)this + 0x18);
}
bool _Script_ControlRig::RigUnit_AlphaInterpVector::get_bMapRange() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c + 0)) & 1 != 0;
}
void _Script_ControlRig::RigUnit_AlphaInterpVector::set_bMapRange(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ControlRig::RigUnit_AlphaInterpVector::get_InRange() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_ControlRig::RigUnit_AlphaInterpVector::get_OutRange() {
    return (void*)((uintptr_t)this + 0x28);
}
void _Script_ControlRig::RigUnit_AlphaInterpVector::set_bClampResult(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_ControlRig::RigUnit_AlphaInterpVector::get_ClampMin() {
    return *(float*)((uintptr_t)this + 0x34);
}
float& _Script_ControlRig::RigUnit_AlphaInterpVector::get_ClampMax() {
    return *(float*)((uintptr_t)this + 0x38);
}
bool _Script_ControlRig::RigUnit_AlphaInterpVector::get_bInterpResult() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c + 0)) & 1 != 0;
}
void _Script_ControlRig::RigUnit_AlphaInterpVector::set_bInterpResult(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_ControlRig::RigUnit_AlphaInterpVector::get_InterpSpeedIncreasing() {
    return *(float*)((uintptr_t)this + 0x40);
}
float& _Script_ControlRig::RigUnit_AlphaInterpVector::get_InterpSpeedDecreasing() {
    return *(float*)((uintptr_t)this + 0x44);
}
void* _Script_ControlRig::RigUnit_AlphaInterpVector::get_Result() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_ControlRig::RigUnit_AlphaInterpVector::get_ScaleBiasClamp() {
    return (void*)((uintptr_t)this + 0x54);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_AlphaInterpVector::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_AlphaInterpVector");
    return result;
}
