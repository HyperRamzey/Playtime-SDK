#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HoudiniAssetBlueprintComponent.hpp"
#include "HoudiniAssetComponent.hpp"
bool _Script_HoudiniEngineRuntime::HoudiniAssetBlueprintComponent::get_bHoudiniAssetChanged() {
    return (*(uint8_t*)((uintptr_t)this + 0x969 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniAssetBlueprintComponent::set_FauxBPProperty(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x968 + 0);
    *(uint8_t*)((uintptr_t)this + 0x968 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniAssetBlueprintComponent::get_FauxBPProperty() {
    return (*(uint8_t*)((uintptr_t)this + 0x968 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniAssetBlueprintComponent::set_bHoudiniAssetChanged(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x969 + 0);
    *(uint8_t*)((uintptr_t)this + 0x969 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniAssetBlueprintComponent::get_bUpdatedFromTemplate() {
    return (*(uint8_t*)((uintptr_t)this + 0x96a + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniAssetBlueprintComponent::set_bUpdatedFromTemplate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x96a + 0);
    *(uint8_t*)((uintptr_t)this + 0x96a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniAssetBlueprintComponent::get_bIsInBlueprintEditor() {
    return (*(uint8_t*)((uintptr_t)this + 0x96b + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniAssetBlueprintComponent::set_bIsInBlueprintEditor(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x96b + 0);
    *(uint8_t*)((uintptr_t)this + 0x96b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniAssetBlueprintComponent::get_bCanDeleteHoudiniNodes() {
    return (*(uint8_t*)((uintptr_t)this + 0x96c + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniAssetBlueprintComponent::set_bCanDeleteHoudiniNodes(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x96c + 0);
    *(uint8_t*)((uintptr_t)this + 0x96c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_HoudiniEngineRuntime::HoudiniAssetBlueprintComponent::get_CachedInputNodes() {
    return (void*)((uintptr_t)this + 0x9c8);
}
bool _Script_HoudiniEngineRuntime::HoudiniAssetBlueprintComponent::get_bHasRegisteredComponentTemplate() {
    return (*(uint8_t*)((uintptr_t)this + 0x96d + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniAssetBlueprintComponent::set_bHasRegisteredComponentTemplate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x96d + 0);
    *(uint8_t*)((uintptr_t)this + 0x96d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_HoudiniEngineRuntime::HoudiniAssetBlueprintComponent::get_CachedOutputNodes() {
    return (void*)((uintptr_t)this + 0x978);
}
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniAssetBlueprintComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HoudiniEngineRuntime.HoudiniAssetBlueprintComponent");
    return result;
}
void _Script_HoudiniEngineRuntime::HoudiniAssetBlueprintComponent::SetToggleValueAt(void* Name, bool Value, int32_t Index) {
    return;
}
void _Script_HoudiniEngineRuntime::HoudiniAssetBlueprintComponent::SetFloatParameter(void* Name, float Value, int32_t Index) {
    return;
}
bool _Script_HoudiniEngineRuntime::HoudiniAssetBlueprintComponent::HasParameter(void* Name) {
    return;
}
