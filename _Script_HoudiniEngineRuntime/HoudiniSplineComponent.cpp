#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "HoudiniSplineComponent.hpp"
bool _Script_HoudiniEngineRuntime::HoudiniSplineComponent::get_bIsOutputCurve() {
    return (*(uint8_t*)((uintptr_t)this + 0x24c + 0)) & 1 != 0;
}
void* _Script_HoudiniEngineRuntime::HoudiniSplineComponent::get_CurvePoints() {
    return (void*)((uintptr_t)this + 0x200);
}
bool _Script_HoudiniEngineRuntime::HoudiniSplineComponent::get_bClosed() {
    return (*(uint8_t*)((uintptr_t)this + 0x240 + 0)) & 1 != 0;
}
void* _Script_HoudiniEngineRuntime::HoudiniSplineComponent::get_DisplayPoints() {
    return (void*)((uintptr_t)this + 0x210);
}
void* _Script_HoudiniEngineRuntime::HoudiniSplineComponent::get_DisplayPointIndexDivider() {
    return (void*)((uintptr_t)this + 0x220);
}
void* _Script_HoudiniEngineRuntime::HoudiniSplineComponent::get_HoudiniSplineName() {
    return (void*)((uintptr_t)this + 0x230);
}
bool _Script_HoudiniEngineRuntime::HoudiniSplineComponent::get_bReversed() {
    return (*(uint8_t*)((uintptr_t)this + 0x241 + 0)) & 1 != 0;
}
int32_t& _Script_HoudiniEngineRuntime::HoudiniSplineComponent::get_CurveOrder() {
    return *(int32_t*)((uintptr_t)this + 0x244);
}
void _Script_HoudiniEngineRuntime::HoudiniSplineComponent::set_bClosed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x240 + 0);
    *(uint8_t*)((uintptr_t)this + 0x240 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_HoudiniEngineRuntime::HoudiniSplineComponent::set_bReversed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x241 + 0);
    *(uint8_t*)((uintptr_t)this + 0x241 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniSplineComponent::get_bIsHoudiniSplineVisible() {
    return (*(uint8_t*)((uintptr_t)this + 0x248 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniSplineComponent::set_bIsHoudiniSplineVisible(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x248 + 0);
    *(uint8_t*)((uintptr_t)this + 0x248 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_HoudiniEngineRuntime::HoudiniSplineComponent::get_CurveType() {
    return (void*)((uintptr_t)this + 0x249);
}
void* _Script_HoudiniEngineRuntime::HoudiniSplineComponent::get_CurveMethod() {
    return (void*)((uintptr_t)this + 0x24a);
}
void* _Script_HoudiniEngineRuntime::HoudiniSplineComponent::get_CurveBreakpointParameterization() {
    return (void*)((uintptr_t)this + 0x24b);
}
void _Script_HoudiniEngineRuntime::HoudiniSplineComponent::set_bIsOutputCurve(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x24c + 0);
    *(uint8_t*)((uintptr_t)this + 0x24c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniSplineComponent::get_bCookOnCurveChanged() {
    return (*(uint8_t*)((uintptr_t)this + 0x24d + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniSplineComponent::set_bCookOnCurveChanged(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x24d + 0);
    *(uint8_t*)((uintptr_t)this + 0x24d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniSplineComponent::get_bIsLegacyInputCurve() {
    return (*(uint8_t*)((uintptr_t)this + 0x24e + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniSplineComponent::set_bIsLegacyInputCurve(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x24e + 0);
    *(uint8_t*)((uintptr_t)this + 0x24e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniSplineComponent::get_bHasChanged() {
    return (*(uint8_t*)((uintptr_t)this + 0x480 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniSplineComponent::set_bHasChanged(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x480 + 0);
    *(uint8_t*)((uintptr_t)this + 0x480 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniSplineComponent::get_bNeedsToTriggerUpdate() {
    return (*(uint8_t*)((uintptr_t)this + 0x481 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniSplineComponent::set_bNeedsToTriggerUpdate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x481 + 0);
    *(uint8_t*)((uintptr_t)this + 0x481 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniSplineComponent::get_bIsInputCurve() {
    return (*(uint8_t*)((uintptr_t)this + 0x482 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniSplineComponent::set_bIsInputCurve(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x482 + 0);
    *(uint8_t*)((uintptr_t)this + 0x482 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniSplineComponent::get_bIsEditableOutputCurve() {
    return (*(uint8_t*)((uintptr_t)this + 0x483 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniSplineComponent::set_bIsEditableOutputCurve(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x483 + 0);
    *(uint8_t*)((uintptr_t)this + 0x483 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_HoudiniEngineRuntime::HoudiniSplineComponent::get_NodeId() {
    return *(int32_t*)((uintptr_t)this + 0x484);
}
void* _Script_HoudiniEngineRuntime::HoudiniSplineComponent::get_PartName() {
    return (void*)((uintptr_t)this + 0x488);
}
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniSplineComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HoudiniEngineRuntime.HoudiniSplineComponent");
    return result;
}
