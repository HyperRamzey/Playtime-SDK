#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "HoudiniAsset.hpp"
#include "HoudiniAssetComponent.hpp"
#include "HoudiniPDGAssetLink.hpp"
void _Script_HoudiniEngineRuntime::HoudiniAssetComponent::set_bRebuildRequested(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x79c + 0);
    *(uint8_t*)((uintptr_t)this + 0x79c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniAssetComponent::get_bCookOnParameterChange() {
    return (*(uint8_t*)((uintptr_t)this + 0x460 + 0)) & 1 != 0;
}
bool _Script_HoudiniEngineRuntime::HoudiniAssetComponent::get_bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride() {
    return (*(uint8_t*)((uintptr_t)this + 0x670 + 0)) & 1 != 0;
}
_Script_HoudiniEngineRuntime::HoudiniAsset*& _Script_HoudiniEngineRuntime::HoudiniAssetComponent::get_HoudiniAsset() {
    return *(_Script_HoudiniEngineRuntime::HoudiniAsset**)((uintptr_t)this + 0x458);
}
void _Script_HoudiniEngineRuntime::HoudiniAssetComponent::set_bCookOnParameterChange(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x460 + 0);
    *(uint8_t*)((uintptr_t)this + 0x460 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_HoudiniEngineRuntime::HoudiniAssetComponent::set_bUseOutputNodes(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x466 + 0);
    *(uint8_t*)((uintptr_t)this + 0x466 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_HoudiniEngineRuntime::HoudiniAssetComponent::set_bCookOnTransformChange(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x462 + 0);
    *(uint8_t*)((uintptr_t)this + 0x462 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniAssetComponent::get_bUploadTransformsToHoudiniEngine() {
    return (*(uint8_t*)((uintptr_t)this + 0x461 + 0)) & 1 != 0;
}
void* _Script_HoudiniEngineRuntime::HoudiniAssetComponent::get_StaticMeshGenerationProperties() {
    return (void*)((uintptr_t)this + 0x490);
}
void _Script_HoudiniEngineRuntime::HoudiniAssetComponent::set_bCachedIsPreview(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8f0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8f0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_HoudiniEngineRuntime::HoudiniAssetComponent::set_bUploadTransformsToHoudiniEngine(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x461 + 0);
    *(uint8_t*)((uintptr_t)this + 0x461 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniAssetComponent::get_bCookOnTransformChange() {
    return (*(uint8_t*)((uintptr_t)this + 0x462 + 0)) & 1 != 0;
}
void* _Script_HoudiniEngineRuntime::HoudiniAssetComponent::get_AssetStateResult() {
    return (void*)((uintptr_t)this + 0x75a);
}
bool _Script_HoudiniEngineRuntime::HoudiniAssetComponent::get_bCookOnAssetInputCook() {
    return (*(uint8_t*)((uintptr_t)this + 0x463 + 0)) & 1 != 0;
}
bool _Script_HoudiniEngineRuntime::HoudiniAssetComponent::get_bUseOutputNodes() {
    return (*(uint8_t*)((uintptr_t)this + 0x466 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniAssetComponent::set_bCookOnAssetInputCook(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x463 + 0);
    *(uint8_t*)((uintptr_t)this + 0x463 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_HoudiniEngineRuntime::HoudiniAssetComponent::set_bForceNeedUpdate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x79e + 0);
    *(uint8_t*)((uintptr_t)this + 0x79e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniAssetComponent::get_bOutputless() {
    return (*(uint8_t*)((uintptr_t)this + 0x464 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniAssetComponent::set_bOutputless(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x464 + 0);
    *(uint8_t*)((uintptr_t)this + 0x464 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniAssetComponent::get_bParameterDefinitionUpdateNeeded() {
    return (*(uint8_t*)((uintptr_t)this + 0x7a0 + 0)) & 1 != 0;
}
bool _Script_HoudiniEngineRuntime::HoudiniAssetComponent::get_bOutputTemplateGeos() {
    return (*(uint8_t*)((uintptr_t)this + 0x465 + 0)) & 1 != 0;
}
void* _Script_HoudiniEngineRuntime::HoudiniAssetComponent::get_DownstreamHoudiniAssets() {
    return (void*)((uintptr_t)this + 0x6d8);
}
void _Script_HoudiniEngineRuntime::HoudiniAssetComponent::set_bOutputTemplateGeos(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x465 + 0);
    *(uint8_t*)((uintptr_t)this + 0x465 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_HoudiniEngineRuntime::HoudiniAssetComponent::get_TemporaryCookFolder() {
    return (void*)((uintptr_t)this + 0x468);
}
void* _Script_HoudiniEngineRuntime::HoudiniAssetComponent::get_BakeFolder() {
    return (void*)((uintptr_t)this + 0x478);
}
void* _Script_HoudiniEngineRuntime::HoudiniAssetComponent::get_StaticMeshMethod() {
    return (void*)((uintptr_t)this + 0x488);
}
void* _Script_HoudiniEngineRuntime::HoudiniAssetComponent::get_StaticMeshBuildSettings() {
    return (void*)((uintptr_t)this + 0x638);
}
void _Script_HoudiniEngineRuntime::HoudiniAssetComponent::set_bHasComponentTransformChanged(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x808 + 0);
    *(uint8_t*)((uintptr_t)this + 0x808 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniAssetComponent::get_bOverrideGlobalProxyStaticMeshSettings() {
    return (*(uint8_t*)((uintptr_t)this + 0x668 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniAssetComponent::set_bOverrideGlobalProxyStaticMeshSettings(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x668 + 0);
    *(uint8_t*)((uintptr_t)this + 0x668 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_HoudiniEngineRuntime::HoudiniAssetComponent::get_AssetCookCount() {
    return *(int32_t*)((uintptr_t)this + 0x794);
}
bool _Script_HoudiniEngineRuntime::HoudiniAssetComponent::get_bEnableProxyStaticMeshOverride() {
    return (*(uint8_t*)((uintptr_t)this + 0x669 + 0)) & 1 != 0;
}
void* _Script_HoudiniEngineRuntime::HoudiniAssetComponent::get_BakedOutputs() {
    return (void*)((uintptr_t)this + 0x7d8);
}
void _Script_HoudiniEngineRuntime::HoudiniAssetComponent::set_bEnableProxyStaticMeshOverride(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x669 + 0);
    *(uint8_t*)((uintptr_t)this + 0x669 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniAssetComponent::get_bEnableProxyStaticMeshRefinementByTimerOverride() {
    return (*(uint8_t*)((uintptr_t)this + 0x66a + 0)) & 1 != 0;
}
_Script_HoudiniEngineRuntime::HoudiniPDGAssetLink*& _Script_HoudiniEngineRuntime::HoudiniAssetComponent::get_PDGAssetLink() {
    return *(_Script_HoudiniEngineRuntime::HoudiniPDGAssetLink**)((uintptr_t)this + 0x810);
}
void _Script_HoudiniEngineRuntime::HoudiniAssetComponent::set_bEnableProxyStaticMeshRefinementByTimerOverride(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x66a + 0);
    *(uint8_t*)((uintptr_t)this + 0x66a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_HoudiniEngineRuntime::HoudiniAssetComponent::get_ProxyMeshAutoRefineTimeoutSecondsOverride() {
    return *(float*)((uintptr_t)this + 0x66c);
}
void _Script_HoudiniEngineRuntime::HoudiniAssetComponent::set_bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x670 + 0);
    *(uint8_t*)((uintptr_t)this + 0x670 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniAssetComponent::get_bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride() {
    return (*(uint8_t*)((uintptr_t)this + 0x671 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniAssetComponent::set_bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x671 + 0);
    *(uint8_t*)((uintptr_t)this + 0x671 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_HoudiniEngineRuntime::HoudiniAssetComponent::set_bParameterDefinitionUpdateNeeded(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7a0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x7a0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_HoudiniEngineRuntime::HoudiniAssetComponent::get_AssetId() {
    return *(int32_t*)((uintptr_t)this + 0x674);
}
void* _Script_HoudiniEngineRuntime::HoudiniAssetComponent::get_NodeIdsToCook() {
    return (void*)((uintptr_t)this + 0x678);
}
void _Script_HoudiniEngineRuntime::HoudiniAssetComponent::set_bLastCookSuccess(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x79f + 0);
    *(uint8_t*)((uintptr_t)this + 0x79f + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_HoudiniEngineRuntime::HoudiniAssetComponent::get_OutputNodeCookCounts() {
    return (void*)((uintptr_t)this + 0x688);
}
void* _Script_HoudiniEngineRuntime::HoudiniAssetComponent::get_ComponentGUID() {
    return (void*)((uintptr_t)this + 0x728);
}
void _Script_HoudiniEngineRuntime::HoudiniAssetComponent::set_bEnableCooking(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x79d + 0);
    *(uint8_t*)((uintptr_t)this + 0x79d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_HoudiniEngineRuntime::HoudiniAssetComponent::get_HapiGUID() {
    return (void*)((uintptr_t)this + 0x738);
}
bool _Script_HoudiniEngineRuntime::HoudiniAssetComponent::get_bRecookRequested() {
    return (*(uint8_t*)((uintptr_t)this + 0x79b + 0)) & 1 != 0;
}
void* _Script_HoudiniEngineRuntime::HoudiniAssetComponent::get_HapiAssetName() {
    return (void*)((uintptr_t)this + 0x748);
}
void* _Script_HoudiniEngineRuntime::HoudiniAssetComponent::get_AssetState() {
    return (void*)((uintptr_t)this + 0x758);
}
void* _Script_HoudiniEngineRuntime::HoudiniAssetComponent::get_DebugLastAssetState() {
    return (void*)((uintptr_t)this + 0x759);
}
void* _Script_HoudiniEngineRuntime::HoudiniAssetComponent::get_LastComponentTransform() {
    return (void*)((uintptr_t)this + 0x760);
}
void* _Script_HoudiniEngineRuntime::HoudiniAssetComponent::get_SubAssetIndex() {
    return (void*)((uintptr_t)this + 0x790);
}
bool _Script_HoudiniEngineRuntime::HoudiniAssetComponent::get_bHasBeenLoaded() {
    return (*(uint8_t*)((uintptr_t)this + 0x798 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniAssetComponent::set_bHasBeenLoaded(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x798 + 0);
    *(uint8_t*)((uintptr_t)this + 0x798 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniAssetComponent::get_bHasBeenDuplicated() {
    return (*(uint8_t*)((uintptr_t)this + 0x799 + 0)) & 1 != 0;
}
bool _Script_HoudiniEngineRuntime::HoudiniAssetComponent::get_bEnableCooking() {
    return (*(uint8_t*)((uintptr_t)this + 0x79d + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniAssetComponent::set_bHasBeenDuplicated(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x799 + 0);
    *(uint8_t*)((uintptr_t)this + 0x799 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniAssetComponent::get_bPendingDelete() {
    return (*(uint8_t*)((uintptr_t)this + 0x79a + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniAssetComponent::set_bPendingDelete(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x79a + 0);
    *(uint8_t*)((uintptr_t)this + 0x79a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_HoudiniEngineRuntime::HoudiniAssetComponent::set_bRecookRequested(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x79b + 0);
    *(uint8_t*)((uintptr_t)this + 0x79b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniAssetComponent::get_bRebuildRequested() {
    return (*(uint8_t*)((uintptr_t)this + 0x79c + 0)) & 1 != 0;
}
bool _Script_HoudiniEngineRuntime::HoudiniAssetComponent::get_bForceNeedUpdate() {
    return (*(uint8_t*)((uintptr_t)this + 0x79e + 0)) & 1 != 0;
}
bool _Script_HoudiniEngineRuntime::HoudiniAssetComponent::get_bLastCookSuccess() {
    return (*(uint8_t*)((uintptr_t)this + 0x79f + 0)) & 1 != 0;
}
bool _Script_HoudiniEngineRuntime::HoudiniAssetComponent::get_bBlueprintStructureModified() {
    return (*(uint8_t*)((uintptr_t)this + 0x7a1 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniAssetComponent::set_bBlueprintStructureModified(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7a1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x7a1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniAssetComponent::get_bBlueprintModified() {
    return (*(uint8_t*)((uintptr_t)this + 0x7a2 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniAssetComponent::set_bBlueprintModified(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7a2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x7a2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_HoudiniEngineRuntime::HoudiniAssetComponent::get_Parameters() {
    return (void*)((uintptr_t)this + 0x7a8);
}
void* _Script_HoudiniEngineRuntime::HoudiniAssetComponent::get_Inputs() {
    return (void*)((uintptr_t)this + 0x7b8);
}
void* _Script_HoudiniEngineRuntime::HoudiniAssetComponent::get_Outputs() {
    return (void*)((uintptr_t)this + 0x7c8);
}
void* _Script_HoudiniEngineRuntime::HoudiniAssetComponent::get_UntrackedOutputs() {
    return (void*)((uintptr_t)this + 0x7e8);
}
void* _Script_HoudiniEngineRuntime::HoudiniAssetComponent::get_HandleComponents() {
    return (void*)((uintptr_t)this + 0x7f8);
}
bool _Script_HoudiniEngineRuntime::HoudiniAssetComponent::get_bHasComponentTransformChanged() {
    return (*(uint8_t*)((uintptr_t)this + 0x808 + 0)) & 1 != 0;
}
bool _Script_HoudiniEngineRuntime::HoudiniAssetComponent::get_bFullyLoaded() {
    return (*(uint8_t*)((uintptr_t)this + 0x809 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniAssetComponent::set_bFullyLoaded(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x809 + 0);
    *(uint8_t*)((uintptr_t)this + 0x809 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_HoudiniEngineRuntime::HoudiniAssetComponent::get_RefineMeshesTimer() {
    return (void*)((uintptr_t)this + 0x818);
}
bool _Script_HoudiniEngineRuntime::HoudiniAssetComponent::get_bNoProxyMeshNextCookRequested() {
    return (*(uint8_t*)((uintptr_t)this + 0x838 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniAssetComponent::set_bNoProxyMeshNextCookRequested(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x838 + 0);
    *(uint8_t*)((uintptr_t)this + 0x838 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_HoudiniEngineRuntime::HoudiniAssetComponent::get_InputPresets() {
    return (void*)((uintptr_t)this + 0x840);
}
bool _Script_HoudiniEngineRuntime::HoudiniAssetComponent::get_bBakeAfterNextCook() {
    return (*(uint8_t*)((uintptr_t)this + 0x890 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniAssetComponent::set_bBakeAfterNextCook(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x890 + 0);
    *(uint8_t*)((uintptr_t)this + 0x890 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniAssetComponent::get_bCachedIsPreview() {
    return (*(uint8_t*)((uintptr_t)this + 0x8f0 + 0)) & 1 != 0;
}
double& _Script_HoudiniEngineRuntime::HoudiniAssetComponent::get_LastTickTime() {
    return *(double*)((uintptr_t)this + 0x900);
}
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniAssetComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HoudiniEngineRuntime.HoudiniAssetComponent");
    return result;
}
