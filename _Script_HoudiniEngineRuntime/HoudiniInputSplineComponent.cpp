#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HoudiniInputSceneComponent.hpp"
#include "HoudiniInputSplineComponent.hpp"
int32_t& _Script_HoudiniEngineRuntime::HoudiniInputSplineComponent::get_NumberOfSplineControlPoints() {
    return *(int32_t*)((uintptr_t)this + 0xe0);
}
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniInputSplineComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HoudiniEngineRuntime.HoudiniInputSplineComponent");
    return result;
}
float& _Script_HoudiniEngineRuntime::HoudiniInputSplineComponent::get_SplineLength() {
    return *(float*)((uintptr_t)this + 0xe4);
}
void _Script_HoudiniEngineRuntime::HoudiniInputSplineComponent::set_SplineClosed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xec + 0);
    *(uint8_t*)((uintptr_t)this + 0xec + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_HoudiniEngineRuntime::HoudiniInputSplineComponent::get_SplineResolution() {
    return *(float*)((uintptr_t)this + 0xe8);
}
bool _Script_HoudiniEngineRuntime::HoudiniInputSplineComponent::get_SplineClosed() {
    return (*(uint8_t*)((uintptr_t)this + 0xec + 0)) & 1 != 0;
}
void* _Script_HoudiniEngineRuntime::HoudiniInputSplineComponent::get_SplineControlPoints() {
    return (void*)((uintptr_t)this + 0xf0);
}
