#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HoudiniParameterMultiParm.hpp"
#include "HoudiniParameterRampFloat.hpp"
void* _Script_HoudiniEngineRuntime::HoudiniParameterRampFloat::get_Points() {
    return (void*)((uintptr_t)this + 0x150);
}
void* _Script_HoudiniEngineRuntime::HoudiniParameterRampFloat::get_CachedPoints() {
    return (void*)((uintptr_t)this + 0x160);
}
void* _Script_HoudiniEngineRuntime::HoudiniParameterRampFloat::get_DefaultPositions() {
    return (void*)((uintptr_t)this + 0x170);
}
void* _Script_HoudiniEngineRuntime::HoudiniParameterRampFloat::get_DefaultValues() {
    return (void*)((uintptr_t)this + 0x180);
}
int32_t& _Script_HoudiniEngineRuntime::HoudiniParameterRampFloat::get_NumDefaultPoints() {
    return *(int32_t*)((uintptr_t)this + 0x1a0);
}
void* _Script_HoudiniEngineRuntime::HoudiniParameterRampFloat::get_DefaultChoices() {
    return (void*)((uintptr_t)this + 0x190);
}
bool _Script_HoudiniEngineRuntime::HoudiniParameterRampFloat::get_bCaching() {
    return (*(uint8_t*)((uintptr_t)this + 0x1a4 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniParameterRampFloat::set_bCaching(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1a4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1a4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_HoudiniEngineRuntime::HoudiniParameterRampFloat::get_ModificationEvents() {
    return (void*)((uintptr_t)this + 0x1a8);
}
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniParameterRampFloat::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HoudiniEngineRuntime.HoudiniParameterRampFloat");
    return result;
}
