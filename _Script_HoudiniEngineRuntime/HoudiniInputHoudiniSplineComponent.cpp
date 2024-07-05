#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HoudiniInputHoudiniSplineComponent.hpp"
#include "HoudiniInputObject.hpp"
#include "HoudiniSplineComponent.hpp"
void* _Script_HoudiniEngineRuntime::HoudiniInputHoudiniSplineComponent::get_CurveType() {
    return (void*)((uintptr_t)this + 0xa8);
}
void* _Script_HoudiniEngineRuntime::HoudiniInputHoudiniSplineComponent::get_CurveMethod() {
    return (void*)((uintptr_t)this + 0xa9);
}
bool _Script_HoudiniEngineRuntime::HoudiniInputHoudiniSplineComponent::get_Reversed() {
    return (*(uint8_t*)((uintptr_t)this + 0xaa + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniInputHoudiniSplineComponent::set_Reversed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xaa + 0);
    *(uint8_t*)((uintptr_t)this + 0xaa + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_HoudiniEngineRuntime::HoudiniSplineComponent*& _Script_HoudiniEngineRuntime::HoudiniInputHoudiniSplineComponent::get_CachedComponent() {
    return *(_Script_HoudiniEngineRuntime::HoudiniSplineComponent**)((uintptr_t)this + 0xb0);
}
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniInputHoudiniSplineComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HoudiniEngineRuntime.HoudiniInputHoudiniSplineComponent");
    return result;
}
