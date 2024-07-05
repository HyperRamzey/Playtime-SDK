#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "HoudiniInput.hpp"
void* _Script_HoudiniEngineRuntime::HoudiniInput::get_Name() {
    return (void*)((uintptr_t)this + 0x28);
}
int32_t& _Script_HoudiniEngineRuntime::HoudiniInput::get_ParmId() {
    return *(int32_t*)((uintptr_t)this + 0x58);
}
void _Script_HoudiniEngineRuntime::HoudiniInput::set_bUpdateInputLandscape(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1f8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1f8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_HoudiniEngineRuntime::HoudiniInput::get_Label() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_HoudiniEngineRuntime::HoudiniInput::get_Type() {
    return (void*)((uintptr_t)this + 0x48);
}
void _Script_HoudiniEngineRuntime::HoudiniInput::set_bHasChanged(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x70 + 0);
    *(uint8_t*)((uintptr_t)this + 0x70 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_HoudiniEngineRuntime::HoudiniInput::get_InputIndex() {
    return *(int32_t*)((uintptr_t)this + 0x54);
}
void _Script_HoudiniEngineRuntime::HoudiniInput::set_bWorldInputBoundSelectorAutoUpdate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x111 + 0);
    *(uint8_t*)((uintptr_t)this + 0x111 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_HoudiniEngineRuntime::HoudiniInput::get_PreviousType() {
    return (void*)((uintptr_t)this + 0x49);
}
int32_t& _Script_HoudiniEngineRuntime::HoudiniInput::get_InputNodeId() {
    return *(int32_t*)((uintptr_t)this + 0x50);
}
int32_t& _Script_HoudiniEngineRuntime::HoudiniInput::get_AssetNodeId() {
    return *(int32_t*)((uintptr_t)this + 0x4c);
}
void* _Script_HoudiniEngineRuntime::HoudiniInput::get_WorldInputObjects() {
    return (void*)((uintptr_t)this + 0xf0);
}
bool _Script_HoudiniEngineRuntime::HoudiniInput::get_bUpdateInputLandscape() {
    return (*(uint8_t*)((uintptr_t)this + 0x1f8 + 0)) & 1 != 0;
}
bool _Script_HoudiniEngineRuntime::HoudiniInput::get_bIsObjectPathParameter() {
    return (*(uint8_t*)((uintptr_t)this + 0x5c + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniInput::set_bIsObjectPathParameter(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5c + 0);
    *(uint8_t*)((uintptr_t)this + 0x5c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_HoudiniEngineRuntime::HoudiniInput::get_CreatedDataNodeIds() {
    return (void*)((uintptr_t)this + 0x60);
}
bool _Script_HoudiniEngineRuntime::HoudiniInput::get_bHasChanged() {
    return (*(uint8_t*)((uintptr_t)this + 0x70 + 0)) & 1 != 0;
}
bool _Script_HoudiniEngineRuntime::HoudiniInput::get_bNeedsToTriggerUpdate() {
    return (*(uint8_t*)((uintptr_t)this + 0x71 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniInput::set_bNeedsToTriggerUpdate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x71 + 0);
    *(uint8_t*)((uintptr_t)this + 0x71 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_HoudiniEngineRuntime::HoudiniInput::get_Help() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_HoudiniEngineRuntime::HoudiniInput::get_KeepWorldTransform() {
    return (void*)((uintptr_t)this + 0x88);
}
void* _Script_HoudiniEngineRuntime::HoudiniInput::get_LandscapeExportType() {
    return (void*)((uintptr_t)this + 0x1f9);
}
bool _Script_HoudiniEngineRuntime::HoudiniInput::get_bPackBeforeMerge() {
    return (*(uint8_t*)((uintptr_t)this + 0x89 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniInput::set_bPackBeforeMerge(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x89 + 0);
    *(uint8_t*)((uintptr_t)this + 0x89 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniInput::get_bImportAsReference() {
    return (*(uint8_t*)((uintptr_t)this + 0x8a + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniInput::set_bImportAsReference(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8a + 0);
    *(uint8_t*)((uintptr_t)this + 0x8a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniInput::get_bImportAsReferenceRotScaleEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x8b + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniInput::set_bImportAsReferenceRotScaleEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8b + 0);
    *(uint8_t*)((uintptr_t)this + 0x8b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniInput::get_bExportLODs() {
    return (*(uint8_t*)((uintptr_t)this + 0x8c + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniInput::set_bExportLODs(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8c + 0);
    *(uint8_t*)((uintptr_t)this + 0x8c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniInput::get_bExportSockets() {
    return (*(uint8_t*)((uintptr_t)this + 0x8d + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniInput::set_bLandscapeExportNormalizedUVs(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1fe + 0);
    *(uint8_t*)((uintptr_t)this + 0x1fe + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_HoudiniEngineRuntime::HoudiniInput::set_bExportSockets(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8d + 0);
    *(uint8_t*)((uintptr_t)this + 0x8d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniInput::get_bExportColliders() {
    return (*(uint8_t*)((uintptr_t)this + 0x8e + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniInput::set_bExportColliders(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8e + 0);
    *(uint8_t*)((uintptr_t)this + 0x8e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniInput::get_bCookOnCurveChanged() {
    return (*(uint8_t*)((uintptr_t)this + 0x8f + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniInput::set_bCookOnCurveChanged(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8f + 0);
    *(uint8_t*)((uintptr_t)this + 0x8f + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_HoudiniEngineRuntime::HoudiniInput::get_GeometryInputObjects() {
    return (void*)((uintptr_t)this + 0x90);
}
bool _Script_HoudiniEngineRuntime::HoudiniInput::get_bStaticMeshChanged() {
    return (*(uint8_t*)((uintptr_t)this + 0xa0 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniInput::set_bStaticMeshChanged(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_HoudiniEngineRuntime::HoudiniInput::get_AssetInputObjects() {
    return (void*)((uintptr_t)this + 0xa8);
}
bool _Script_HoudiniEngineRuntime::HoudiniInput::get_bInputAssetConnectedInHoudini() {
    return (*(uint8_t*)((uintptr_t)this + 0xb8 + 0)) & 1 != 0;
}
bool _Script_HoudiniEngineRuntime::HoudiniInput::get_bLandscapeExportSelectionOnly() {
    return (*(uint8_t*)((uintptr_t)this + 0x1fa + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniInput::set_bInputAssetConnectedInHoudini(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_HoudiniEngineRuntime::HoudiniInput::get_CurveInputObjects() {
    return (void*)((uintptr_t)this + 0xc0);
}
float& _Script_HoudiniEngineRuntime::HoudiniInput::get_DefaultCurveOffset() {
    return *(float*)((uintptr_t)this + 0xd0);
}
bool _Script_HoudiniEngineRuntime::HoudiniInput::get_bAddRotAndScaleAttributesOnCurves() {
    return (*(uint8_t*)((uintptr_t)this + 0xd4 + 0)) & 1 != 0;
}
bool _Script_HoudiniEngineRuntime::HoudiniInput::get_bLandscapeHasExportTypeChanged() {
    return (*(uint8_t*)((uintptr_t)this + 0xe8 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniInput::set_bAddRotAndScaleAttributesOnCurves(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniInput::get_bUseLegacyInputCurves() {
    return (*(uint8_t*)((uintptr_t)this + 0xd5 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniInput::set_bUseLegacyInputCurves(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd5 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd5 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_HoudiniEngineRuntime::HoudiniInput::get_LandscapeInputObjects() {
    return (void*)((uintptr_t)this + 0xd8);
}
void _Script_HoudiniEngineRuntime::HoudiniInput::set_bLandscapeHasExportTypeChanged(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xe8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_HoudiniEngineRuntime::HoudiniInput::get_WorldInputBoundSelectorObjects() {
    return (void*)((uintptr_t)this + 0x100);
}
void* _Script_HoudiniEngineRuntime::HoudiniInput::get_LandscapeSelectedComponents() {
    return (void*)((uintptr_t)this + 0x138);
}
bool _Script_HoudiniEngineRuntime::HoudiniInput::get_bIsWorldInputBoundSelector() {
    return (*(uint8_t*)((uintptr_t)this + 0x110 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniInput::set_bIsWorldInputBoundSelector(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x110 + 0);
    *(uint8_t*)((uintptr_t)this + 0x110 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniInput::get_bWorldInputBoundSelectorAutoUpdate() {
    return (*(uint8_t*)((uintptr_t)this + 0x111 + 0)) & 1 != 0;
}
void* _Script_HoudiniEngineRuntime::HoudiniInput::get_LastInsertedInputs() {
    return (void*)((uintptr_t)this + 0x1d8);
}
float& _Script_HoudiniEngineRuntime::HoudiniInput::get_UnrealSplineResolution() {
    return *(float*)((uintptr_t)this + 0x114);
}
void _Script_HoudiniEngineRuntime::HoudiniInput::set_bLandscapeExportSelectionOnly(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1fa + 0);
    *(uint8_t*)((uintptr_t)this + 0x1fa + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_HoudiniEngineRuntime::HoudiniInput::get_SkeletalInputObjects() {
    return (void*)((uintptr_t)this + 0x118);
}
void* _Script_HoudiniEngineRuntime::HoudiniInput::get_GeometryCollectionInputObjects() {
    return (void*)((uintptr_t)this + 0x128);
}
void* _Script_HoudiniEngineRuntime::HoudiniInput::get_InputNodesPendingDelete() {
    return (void*)((uintptr_t)this + 0x188);
}
void* _Script_HoudiniEngineRuntime::HoudiniInput::get_LastUndoDeletedInputs() {
    return (void*)((uintptr_t)this + 0x1e8);
}
bool _Script_HoudiniEngineRuntime::HoudiniInput::get_bLandscapeAutoSelectComponent() {
    return (*(uint8_t*)((uintptr_t)this + 0x1fb + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniInput::set_bLandscapeAutoSelectComponent(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1fb + 0);
    *(uint8_t*)((uintptr_t)this + 0x1fb + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniInput::get_bLandscapeExportMaterials() {
    return (*(uint8_t*)((uintptr_t)this + 0x1fc + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniInput::set_bLandscapeExportMaterials(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1fc + 0);
    *(uint8_t*)((uintptr_t)this + 0x1fc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniInput::get_bLandscapeExportLighting() {
    return (*(uint8_t*)((uintptr_t)this + 0x1fd + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniInput::set_bLandscapeExportLighting(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1fd + 0);
    *(uint8_t*)((uintptr_t)this + 0x1fd + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniInput::get_bLandscapeExportNormalizedUVs() {
    return (*(uint8_t*)((uintptr_t)this + 0x1fe + 0)) & 1 != 0;
}
bool _Script_HoudiniEngineRuntime::HoudiniInput::get_bLandscapeExportTileUVs() {
    return (*(uint8_t*)((uintptr_t)this + 0x1ff + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniInput::set_bLandscapeExportTileUVs(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1ff + 0);
    *(uint8_t*)((uintptr_t)this + 0x1ff + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniInput::get_bCanDeleteHoudiniNodes() {
    return (*(uint8_t*)((uintptr_t)this + 0x200 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniInput::set_bCanDeleteHoudiniNodes(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x200 + 0);
    *(uint8_t*)((uintptr_t)this + 0x200 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniInput::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HoudiniEngineRuntime.HoudiniInput");
    return result;
}
