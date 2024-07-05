#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "BrushStampIndicator.hpp"
#include "InteractiveGizmo.hpp"
bool _Script_InteractiveToolsFramework::BrushStampIndicator::get_bDrawIndicatorLines() {
    return (*(uint8_t*)((uintptr_t)this + 0x58 + 0)) & 1 != 0;
}
void* _Script_InteractiveToolsFramework::BrushStampIndicator::get_SecondaryLineColor() {
    return (void*)((uintptr_t)this + 0x7c);
}
float& _Script_InteractiveToolsFramework::BrushStampIndicator::get_BrushRadius() {
    return *(float*)((uintptr_t)this + 0x38);
}
float& _Script_InteractiveToolsFramework::BrushStampIndicator::get_BrushFalloff() {
    return *(float*)((uintptr_t)this + 0x3c);
}
void* _Script_InteractiveToolsFramework::BrushStampIndicator::get_BrushPosition() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_InteractiveToolsFramework::BrushStampIndicator::get_BrushNormal() {
    return (void*)((uintptr_t)this + 0x4c);
}
void _Script_InteractiveToolsFramework::BrushStampIndicator::set_bDrawRadiusCircle(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x59 + 0);
    *(uint8_t*)((uintptr_t)this + 0x59 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_InteractiveToolsFramework::BrushStampIndicator::set_bDrawIndicatorLines(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x58 + 0);
    *(uint8_t*)((uintptr_t)this + 0x58 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::PrimitiveComponent*& _Script_InteractiveToolsFramework::BrushStampIndicator::get_AttachedComponent() {
    return *(_Script_Engine::PrimitiveComponent**)((uintptr_t)this + 0x90);
}
bool _Script_InteractiveToolsFramework::BrushStampIndicator::get_bDrawRadiusCircle() {
    return (*(uint8_t*)((uintptr_t)this + 0x59 + 0)) & 1 != 0;
}
int32_t& _Script_InteractiveToolsFramework::BrushStampIndicator::get_SampleStepCount() {
    return *(int32_t*)((uintptr_t)this + 0x5c);
}
void* _Script_InteractiveToolsFramework::BrushStampIndicator::get_LineColor() {
    return (void*)((uintptr_t)this + 0x60);
}
float& _Script_InteractiveToolsFramework::BrushStampIndicator::get_LineThickness() {
    return *(float*)((uintptr_t)this + 0x70);
}
bool _Script_InteractiveToolsFramework::BrushStampIndicator::get_bDepthTested() {
    return (*(uint8_t*)((uintptr_t)this + 0x74 + 0)) & 1 != 0;
}
void _Script_InteractiveToolsFramework::BrushStampIndicator::set_bDepthTested(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x74 + 0);
    *(uint8_t*)((uintptr_t)this + 0x74 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_InteractiveToolsFramework::BrushStampIndicator::get_bDrawSecondaryLines() {
    return (*(uint8_t*)((uintptr_t)this + 0x75 + 0)) & 1 != 0;
}
void _Script_InteractiveToolsFramework::BrushStampIndicator::set_bDrawSecondaryLines(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x75 + 0);
    *(uint8_t*)((uintptr_t)this + 0x75 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_InteractiveToolsFramework::BrushStampIndicator::get_SecondaryLineThickness() {
    return *(float*)((uintptr_t)this + 0x78);
}
_Script_CoreUObject::Class* _Script_InteractiveToolsFramework::BrushStampIndicator::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/InteractiveToolsFramework.BrushStampIndicator");
    return result;
}
