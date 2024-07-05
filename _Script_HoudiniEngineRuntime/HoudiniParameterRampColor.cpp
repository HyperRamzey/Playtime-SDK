#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HoudiniParameterMultiParm.hpp"
#include "HoudiniParameterRampColor.hpp"
void* _Script_HoudiniEngineRuntime::HoudiniParameterRampColor::get_DefaultPositions() {
    return (void*)((uintptr_t)this + 0x178);
}
void* _Script_HoudiniEngineRuntime::HoudiniParameterRampColor::get_Points() {
    return (void*)((uintptr_t)this + 0x150);
}
bool _Script_HoudiniEngineRuntime::HoudiniParameterRampColor::get_bCaching() {
    return (*(uint8_t*)((uintptr_t)this + 0x160 + 0)) & 1 != 0;
}
void* _Script_HoudiniEngineRuntime::HoudiniParameterRampColor::get_DefaultValues() {
    return (void*)((uintptr_t)this + 0x188);
}
void* _Script_HoudiniEngineRuntime::HoudiniParameterRampColor::get_CachedPoints() {
    return (void*)((uintptr_t)this + 0x168);
}
void _Script_HoudiniEngineRuntime::HoudiniParameterRampColor::set_bCaching(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x160 + 0);
    *(uint8_t*)((uintptr_t)this + 0x160 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_HoudiniEngineRuntime::HoudiniParameterRampColor::get_DefaultChoices() {
    return (void*)((uintptr_t)this + 0x198);
}
int32_t& _Script_HoudiniEngineRuntime::HoudiniParameterRampColor::get_NumDefaultPoints() {
    return *(int32_t*)((uintptr_t)this + 0x1a8);
}
void* _Script_HoudiniEngineRuntime::HoudiniParameterRampColor::get_ModificationEvents() {
    return (void*)((uintptr_t)this + 0x1b0);
}
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniParameterRampColor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HoudiniEngineRuntime.HoudiniParameterRampColor");
    return result;
}
