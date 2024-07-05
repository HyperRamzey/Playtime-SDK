#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HoudiniParameter.hpp"
#include "HoudiniParameterMultiParm.hpp"
bool _Script_HoudiniEngineRuntime::HoudiniParameterMultiParm::get_bIsShown() {
    return (*(uint8_t*)((uintptr_t)this + 0x108 + 0)) & 1 != 0;
}
void* _Script_HoudiniEngineRuntime::HoudiniParameterMultiParm::get_MultiParmInstanceLength() {
    return (void*)((uintptr_t)this + 0x128);
}
void* _Script_HoudiniEngineRuntime::HoudiniParameterMultiParm::get_TemplateName() {
    return (void*)((uintptr_t)this + 0x110);
}
void _Script_HoudiniEngineRuntime::HoudiniParameterMultiParm::set_bIsShown(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x108 + 0);
    *(uint8_t*)((uintptr_t)this + 0x108 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_HoudiniEngineRuntime::HoudiniParameterMultiParm::get_MultiParmInstanceCount() {
    return (void*)((uintptr_t)this + 0x12c);
}
int32_t& _Script_HoudiniEngineRuntime::HoudiniParameterMultiParm::get_Value() {
    return *(int32_t*)((uintptr_t)this + 0x10c);
}
int32_t& _Script_HoudiniEngineRuntime::HoudiniParameterMultiParm::get_MultiparmValue() {
    return *(int32_t*)((uintptr_t)this + 0x120);
}
void* _Script_HoudiniEngineRuntime::HoudiniParameterMultiParm::get_MultiParmInstanceNum() {
    return (void*)((uintptr_t)this + 0x124);
}
void* _Script_HoudiniEngineRuntime::HoudiniParameterMultiParm::get_InstanceStartOffset() {
    return (void*)((uintptr_t)this + 0x130);
}
void* _Script_HoudiniEngineRuntime::HoudiniParameterMultiParm::get_MultiParmInstanceLastModifyArray() {
    return (void*)((uintptr_t)this + 0x138);
}
int32_t& _Script_HoudiniEngineRuntime::HoudiniParameterMultiParm::get_DefaultInstanceCount() {
    return *(int32_t*)((uintptr_t)this + 0x148);
}
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniParameterMultiParm::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HoudiniEngineRuntime.HoudiniParameterMultiParm");
    return result;
}
