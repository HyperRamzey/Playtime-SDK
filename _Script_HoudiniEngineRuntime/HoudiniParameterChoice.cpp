#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HoudiniParameter.hpp"
#include "HoudiniParameterChoice.hpp"
bool _Script_HoudiniEngineRuntime::HoudiniParameterChoice::get_bIsChildOfRamp() {
    return (*(uint8_t*)((uintptr_t)this + 0x160 + 0)) & 1 != 0;
}
int32_t& _Script_HoudiniEngineRuntime::HoudiniParameterChoice::get_IntValue() {
    return *(int32_t*)((uintptr_t)this + 0x108);
}
void* _Script_HoudiniEngineRuntime::HoudiniParameterChoice::get_DefaultStringValue() {
    return (void*)((uintptr_t)this + 0x120);
}
void* _Script_HoudiniEngineRuntime::HoudiniParameterChoice::get_StringValue() {
    return (void*)((uintptr_t)this + 0x110);
}
int32_t& _Script_HoudiniEngineRuntime::HoudiniParameterChoice::get_DefaultIntValue() {
    return *(int32_t*)((uintptr_t)this + 0x10c);
}
void* _Script_HoudiniEngineRuntime::HoudiniParameterChoice::get_StringChoiceLabels() {
    return (void*)((uintptr_t)this + 0x140);
}
void* _Script_HoudiniEngineRuntime::HoudiniParameterChoice::get_StringChoiceValues() {
    return (void*)((uintptr_t)this + 0x130);
}
void _Script_HoudiniEngineRuntime::HoudiniParameterChoice::set_bIsChildOfRamp(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x160 + 0);
    *(uint8_t*)((uintptr_t)this + 0x160 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_HoudiniEngineRuntime::HoudiniParameterChoice::get_IntValuesArray() {
    return (void*)((uintptr_t)this + 0x168);
}
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniParameterChoice::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HoudiniEngineRuntime.HoudiniParameterChoice");
    return result;
}
