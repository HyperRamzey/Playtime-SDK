#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HoudiniParameter.hpp"
#include "HoudiniParameterInt.hpp"
void* _Script_HoudiniEngineRuntime::HoudiniParameterInt::get_Values() {
    return (void*)((uintptr_t)this + 0x108);
}
bool _Script_HoudiniEngineRuntime::HoudiniParameterInt::get_bHasMax() {
    return (*(uint8_t*)((uintptr_t)this + 0x139 + 0)) & 1 != 0;
}
void* _Script_HoudiniEngineRuntime::HoudiniParameterInt::get_DefaultValues() {
    return (void*)((uintptr_t)this + 0x118);
}
void* _Script_HoudiniEngineRuntime::HoudiniParameterInt::get_Unit() {
    return (void*)((uintptr_t)this + 0x128);
}
bool _Script_HoudiniEngineRuntime::HoudiniParameterInt::get_bHasUIMax() {
    return (*(uint8_t*)((uintptr_t)this + 0x13b + 0)) & 1 != 0;
}
bool _Script_HoudiniEngineRuntime::HoudiniParameterInt::get_bHasMin() {
    return (*(uint8_t*)((uintptr_t)this + 0x138 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniParameterInt::set_bHasMin(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x138 + 0);
    *(uint8_t*)((uintptr_t)this + 0x138 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_HoudiniEngineRuntime::HoudiniParameterInt::set_bHasMax(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x139 + 0);
    *(uint8_t*)((uintptr_t)this + 0x139 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniParameterInt::get_bHasUIMin() {
    return (*(uint8_t*)((uintptr_t)this + 0x13a + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniParameterInt::set_bHasUIMin(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x13a + 0);
    *(uint8_t*)((uintptr_t)this + 0x13a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_HoudiniEngineRuntime::HoudiniParameterInt::set_bHasUIMax(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x13b + 0);
    *(uint8_t*)((uintptr_t)this + 0x13b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniParameterInt::get_bIsLogarithmic() {
    return (*(uint8_t*)((uintptr_t)this + 0x13c + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniParameterInt::set_bIsLogarithmic(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x13c + 0);
    *(uint8_t*)((uintptr_t)this + 0x13c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_HoudiniEngineRuntime::HoudiniParameterInt::get_Min() {
    return *(int32_t*)((uintptr_t)this + 0x140);
}
int32_t& _Script_HoudiniEngineRuntime::HoudiniParameterInt::get_Max() {
    return *(int32_t*)((uintptr_t)this + 0x144);
}
int32_t& _Script_HoudiniEngineRuntime::HoudiniParameterInt::get_UIMin() {
    return *(int32_t*)((uintptr_t)this + 0x148);
}
int32_t& _Script_HoudiniEngineRuntime::HoudiniParameterInt::get_UIMax() {
    return *(int32_t*)((uintptr_t)this + 0x14c);
}
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniParameterInt::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HoudiniEngineRuntime.HoudiniParameterInt");
    return result;
}
