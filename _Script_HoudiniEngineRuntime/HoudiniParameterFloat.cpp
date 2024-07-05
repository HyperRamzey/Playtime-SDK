#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HoudiniParameter.hpp"
#include "HoudiniParameterFloat.hpp"
void* _Script_HoudiniEngineRuntime::HoudiniParameterFloat::get_Values() {
    return (void*)((uintptr_t)this + 0x108);
}
bool _Script_HoudiniEngineRuntime::HoudiniParameterFloat::get_bHasMin() {
    return (*(uint8_t*)((uintptr_t)this + 0x139 + 0)) & 1 != 0;
}
void* _Script_HoudiniEngineRuntime::HoudiniParameterFloat::get_DefaultValues() {
    return (void*)((uintptr_t)this + 0x118);
}
bool _Script_HoudiniEngineRuntime::HoudiniParameterFloat::get_bHasMax() {
    return (*(uint8_t*)((uintptr_t)this + 0x13a + 0)) & 1 != 0;
}
bool _Script_HoudiniEngineRuntime::HoudiniParameterFloat::get_bNoSwap() {
    return (*(uint8_t*)((uintptr_t)this + 0x138 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniParameterFloat::set_bIsChildOfRamp(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x150 + 0);
    *(uint8_t*)((uintptr_t)this + 0x150 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_HoudiniEngineRuntime::HoudiniParameterFloat::get_Unit() {
    return (void*)((uintptr_t)this + 0x128);
}
void _Script_HoudiniEngineRuntime::HoudiniParameterFloat::set_bNoSwap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x138 + 0);
    *(uint8_t*)((uintptr_t)this + 0x138 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_HoudiniEngineRuntime::HoudiniParameterFloat::set_bHasMin(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x139 + 0);
    *(uint8_t*)((uintptr_t)this + 0x139 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_HoudiniEngineRuntime::HoudiniParameterFloat::set_bHasMax(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x13a + 0);
    *(uint8_t*)((uintptr_t)this + 0x13a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniParameterFloat::get_bHasUIMin() {
    return (*(uint8_t*)((uintptr_t)this + 0x13b + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniParameterFloat::set_bHasUIMin(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x13b + 0);
    *(uint8_t*)((uintptr_t)this + 0x13b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniParameterFloat::get_bHasUIMax() {
    return (*(uint8_t*)((uintptr_t)this + 0x13c + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniParameterFloat::set_bHasUIMax(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x13c + 0);
    *(uint8_t*)((uintptr_t)this + 0x13c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniParameterFloat::get_bIsLogarithmic() {
    return (*(uint8_t*)((uintptr_t)this + 0x13d + 0)) & 1 != 0;
}
float& _Script_HoudiniEngineRuntime::HoudiniParameterFloat::get_UIMin() {
    return *(float*)((uintptr_t)this + 0x148);
}
void _Script_HoudiniEngineRuntime::HoudiniParameterFloat::set_bIsLogarithmic(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x13d + 0);
    *(uint8_t*)((uintptr_t)this + 0x13d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_HoudiniEngineRuntime::HoudiniParameterFloat::get_Min() {
    return *(float*)((uintptr_t)this + 0x140);
}
float& _Script_HoudiniEngineRuntime::HoudiniParameterFloat::get_Max() {
    return *(float*)((uintptr_t)this + 0x144);
}
float& _Script_HoudiniEngineRuntime::HoudiniParameterFloat::get_UIMax() {
    return *(float*)((uintptr_t)this + 0x14c);
}
bool _Script_HoudiniEngineRuntime::HoudiniParameterFloat::get_bIsChildOfRamp() {
    return (*(uint8_t*)((uintptr_t)this + 0x150 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniParameterFloat::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HoudiniEngineRuntime.HoudiniParameterFloat");
    return result;
}
