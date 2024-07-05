#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Foliage\FoliageType_InstancedStaticMesh.hpp"
#include "HoudiniRuntimeSettings.hpp"
#include "..\_Script_PhysicsCore\PhysicalMaterial.hpp"
void* _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_SessionType() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_ServerHost() {
    return (void*)((uintptr_t)this + 0x30);
}
void _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::set_bStartAutomaticServer(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x58 + 0);
    *(uint8_t*)((uintptr_t)this + 0x58 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_ServerPort() {
    return *(int32_t*)((uintptr_t)this + 0x40);
}
bool _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_MarshallingLandscapesForceMinMaxValues() {
    return (*(uint8_t*)((uintptr_t)this + 0x92 + 0)) & 1 != 0;
}
bool _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_bStartAutomaticServer() {
    return (*(uint8_t*)((uintptr_t)this + 0x58 + 0)) & 1 != 0;
}
float& _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_ProxyMeshAutoRefineTimeoutSeconds() {
    return *(float*)((uintptr_t)this + 0xa8);
}
void* _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_ServerPipeName() {
    return (void*)((uintptr_t)this + 0x48);
}
bool _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_bSupportFaceRemap() {
    return (*(uint8_t*)((uintptr_t)this + 0x27c + 0)) & 2 != 0;
}
float& _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_AutomaticServerTimeout() {
    return *(float*)((uintptr_t)this + 0x5c);
}
bool _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_bSyncWithHoudiniCook() {
    return (*(uint8_t*)((uintptr_t)this + 0x60 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::set_bUseMaximumStreamingTexelRatio(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x23c + 0);
    *(uint8_t*)((uintptr_t)this + 0x23c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_LightMapResolution() {
    return *(int32_t*)((uintptr_t)this + 0x21c);
}
void _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::set_bSyncWithHoudiniCook(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x60 + 0);
    *(uint8_t*)((uintptr_t)this + 0x60 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_bCookUsingHoudiniTime() {
    return (*(uint8_t*)((uintptr_t)this + 0x61 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::set_bEnableBackwardCompatibility(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x27e + 0);
    *(uint8_t*)((uintptr_t)this + 0x27e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::set_bCookUsingHoudiniTime(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x61 + 0);
    *(uint8_t*)((uintptr_t)this + 0x61 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_StreamingDistanceMultiplier() {
    return *(float*)((uintptr_t)this + 0x240);
}
bool _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_bSyncViewport() {
    return (*(uint8_t*)((uintptr_t)this + 0x62 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::set_bSyncViewport(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x62 + 0);
    *(uint8_t*)((uintptr_t)this + 0x62 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::set_bEnableProxyStaticMeshRefinementOnPreSaveWorld(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xac + 0);
    *(uint8_t*)((uintptr_t)this + 0xac + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_bSyncHoudiniViewport() {
    return (*(uint8_t*)((uintptr_t)this + 0x63 + 0)) & 1 != 0;
}
void* _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_HoudiniExecutable() {
    return (void*)((uintptr_t)this + 0x298);
}
void _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::set_bSyncHoudiniViewport(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x63 + 0);
    *(uint8_t*)((uintptr_t)this + 0x63 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::set_bAutomaticLegacyHDARebuild(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x27f + 0);
    *(uint8_t*)((uintptr_t)this + 0x27f + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_bSyncUnrealViewport() {
    return (*(uint8_t*)((uintptr_t)this + 0x64 + 0)) & 1 != 0;
}
float& _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_GeneratedDistanceFieldResolutionScale() {
    return *(float*)((uintptr_t)this + 0x224);
}
void _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::set_bSyncUnrealViewport(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x64 + 0);
    *(uint8_t*)((uintptr_t)this + 0x64 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::set_bEnableProxyStaticMeshRefinementOnPreBeginPIE(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xad + 0);
    *(uint8_t*)((uintptr_t)this + 0xad + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_bPauseCookingOnStart() {
    return (*(uint8_t*)((uintptr_t)this + 0x67 + 0)) & 1 != 0;
}
bool _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_bShowMultiAssetDialog() {
    return (*(uint8_t*)((uintptr_t)this + 0x65 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::set_MarshallingLandscapesUseDefaultUnrealScaling(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x90 + 0);
    *(uint8_t*)((uintptr_t)this + 0x90 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::set_bShowMultiAssetDialog(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x65 + 0);
    *(uint8_t*)((uintptr_t)this + 0x65 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_bComputeWeightedNormals() {
    return (*(uint8_t*)((uintptr_t)this + 0x276 + 0)) & 1 != 0;
}
bool _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_bPreferHdaMemoryCopyOverHdaSourceFile() {
    return (*(uint8_t*)((uintptr_t)this + 0x66 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::set_bPreferHdaMemoryCopyOverHdaSourceFile(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x66 + 0);
    *(uint8_t*)((uintptr_t)this + 0x66 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_bDisplaySlateCookingNotifications() {
    return (*(uint8_t*)((uintptr_t)this + 0x68 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::set_bPauseCookingOnStart(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x67 + 0);
    *(uint8_t*)((uintptr_t)this + 0x67 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::set_bDisplaySlateCookingNotifications(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x68 + 0);
    *(uint8_t*)((uintptr_t)this + 0x68 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::set_bRemoveDegenerates(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x270 + 0);
    *(uint8_t*)((uintptr_t)this + 0x270 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_DefaultTemporaryCookFolder() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_DefaultBakeFolder() {
    return (void*)((uintptr_t)this + 0x80);
}
bool _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_MarshallingLandscapesUseDefaultUnrealScaling() {
    return (*(uint8_t*)((uintptr_t)this + 0x90 + 0)) & 1 != 0;
}
bool _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_bShowDefaultMesh() {
    return (*(uint8_t*)((uintptr_t)this + 0xa5 + 0)) & 1 != 0;
}
bool _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_MarshallingLandscapesUseFullResolution() {
    return (*(uint8_t*)((uintptr_t)this + 0x91 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::set_MarshallingLandscapesUseFullResolution(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x91 + 0);
    *(uint8_t*)((uintptr_t)this + 0x91 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::set_MarshallingLandscapesForceMinMaxValues(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x92 + 0);
    *(uint8_t*)((uintptr_t)this + 0x92 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::set_bEnableProxyStaticMeshRefinementByTimer(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa6 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa6 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_MarshallingLandscapesForcedMinValue() {
    return *(float*)((uintptr_t)this + 0x94);
}
float& _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_MarshallingLandscapesForcedMaxValue() {
    return *(float*)((uintptr_t)this + 0x98);
}
void _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::set_bSupportFaceRemap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x27c + 0);
    *(uint8_t*)((uintptr_t)this + 0x27c + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_bAddRotAndScaleAttributesOnCurves() {
    return (*(uint8_t*)((uintptr_t)this + 0x9c + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::set_bAddRotAndScaleAttributesOnCurves(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9c + 0);
    *(uint8_t*)((uintptr_t)this + 0x9c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_bUseLegacyInputCurves() {
    return (*(uint8_t*)((uintptr_t)this + 0x9d + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::set_bUseLegacyInputCurves(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9d + 0);
    *(uint8_t*)((uintptr_t)this + 0x9d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_LpvBiasMultiplier() {
    return *(float*)((uintptr_t)this + 0x220);
}
float& _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_MarshallingSplineResolution() {
    return *(float*)((uintptr_t)this + 0xa0);
}
void* _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_WalkableSlopeOverride() {
    return (void*)((uintptr_t)this + 0x228);
}
_Script_PhysicsCore::PhysicalMaterial*& _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_PhysMaterial() {
    return *(_Script_PhysicsCore::PhysicalMaterial**)((uintptr_t)this + 0xb8);
}
bool _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_bEnableProxyStaticMesh() {
    return (*(uint8_t*)((uintptr_t)this + 0xa4 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::set_bEnableProxyStaticMesh(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::set_bShowDefaultMesh(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa5 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa5 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_bEnableProxyStaticMeshRefinementByTimer() {
    return (*(uint8_t*)((uintptr_t)this + 0xa6 + 0)) & 1 != 0;
}
bool _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_bEnableProxyStaticMeshRefinementOnPreSaveWorld() {
    return (*(uint8_t*)((uintptr_t)this + 0xac + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::set_bDoubleSidedGeometry(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_bEnableProxyStaticMeshRefinementOnPreBeginPIE() {
    return (*(uint8_t*)((uintptr_t)this + 0xad + 0)) & 1 != 0;
}
bool _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_bDoubleSidedGeometry() {
    return (*(uint8_t*)((uintptr_t)this + 0xb0 + 0)) & 1 != 0;
}
void* _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_DefaultBodyInstance() {
    return (void*)((uintptr_t)this + 0xc0);
}
void* _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_CollisionTraceFlag() {
    return (void*)((uintptr_t)this + 0x218);
}
bool _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_bUseMaximumStreamingTexelRatio() {
    return (*(uint8_t*)((uintptr_t)this + 0x23c + 0)) & 1 != 0;
}
int32_t& _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_LightMapCoordinateIndex() {
    return *(int32_t*)((uintptr_t)this + 0x238);
}
_Script_Foliage::FoliageType_InstancedStaticMesh*& _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_FoliageDefaultSettings() {
    return *(_Script_Foliage::FoliageType_InstancedStaticMesh**)((uintptr_t)this + 0x248);
}
void* _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_AssetUserData() {
    return (void*)((uintptr_t)this + 0x250);
}
bool _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_bUseFullPrecisionUVs() {
    return (*(uint8_t*)((uintptr_t)this + 0x260 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::set_bUseFullPrecisionUVs(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x260 + 0);
    *(uint8_t*)((uintptr_t)this + 0x260 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_SrcLightmapIndex() {
    return *(int32_t*)((uintptr_t)this + 0x264);
}
int32_t& _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_DstLightmapIndex() {
    return *(int32_t*)((uintptr_t)this + 0x268);
}
int32_t& _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_MinLightmapResolution() {
    return *(int32_t*)((uintptr_t)this + 0x26c);
}
bool _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_bRemoveDegenerates() {
    return (*(uint8_t*)((uintptr_t)this + 0x270 + 0)) & 1 != 0;
}
void* _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_GenerateLightmapUVsFlag() {
    return (void*)((uintptr_t)this + 0x271);
}
void* _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_RecomputeNormalsFlag() {
    return (void*)((uintptr_t)this + 0x272);
}
void* _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_RecomputeTangentsFlag() {
    return (void*)((uintptr_t)this + 0x273);
}
bool _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_bUseMikkTSpace() {
    return (*(uint8_t*)((uintptr_t)this + 0x274 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::set_bUseMikkTSpace(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x274 + 0);
    *(uint8_t*)((uintptr_t)this + 0x274 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_bBuildAdjacencyBuffer() {
    return (*(uint8_t*)((uintptr_t)this + 0x275 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::set_bBuildAdjacencyBuffer(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x275 + 0);
    *(uint8_t*)((uintptr_t)this + 0x275 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::set_bComputeWeightedNormals(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x276 + 0);
    *(uint8_t*)((uintptr_t)this + 0x276 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_bBuildReversedIndexBuffer() {
    return (*(uint8_t*)((uintptr_t)this + 0x276 + 0)) & 2 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::set_bBuildReversedIndexBuffer(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x276 + 0);
    *(uint8_t*)((uintptr_t)this + 0x276 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_bUseHighPrecisionTangentBasis() {
    return (*(uint8_t*)((uintptr_t)this + 0x276 + 0)) & 4 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::set_bUseHighPrecisionTangentBasis(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x276 + 0);
    *(uint8_t*)((uintptr_t)this + 0x276 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
float& _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_DistanceFieldResolutionScale() {
    return *(float*)((uintptr_t)this + 0x278);
}
bool _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_bGenerateDistanceFieldAsIfTwoSided() {
    return (*(uint8_t*)((uintptr_t)this + 0x27c + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::set_bGenerateDistanceFieldAsIfTwoSided(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x27c + 0);
    *(uint8_t*)((uintptr_t)this + 0x27c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_bPDGAsyncCommandletImportEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x27d + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::set_bPDGAsyncCommandletImportEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x27d + 0);
    *(uint8_t*)((uintptr_t)this + 0x27d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_bEnableBackwardCompatibility() {
    return (*(uint8_t*)((uintptr_t)this + 0x27e + 0)) & 1 != 0;
}
bool _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_bAutomaticLegacyHDARebuild() {
    return (*(uint8_t*)((uintptr_t)this + 0x27f + 0)) & 1 != 0;
}
bool _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_bUseCustomHoudiniLocation() {
    return (*(uint8_t*)((uintptr_t)this + 0x280 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::set_bUseCustomHoudiniLocation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x280 + 0);
    *(uint8_t*)((uintptr_t)this + 0x280 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_CustomHoudiniLocation() {
    return (void*)((uintptr_t)this + 0x288);
}
int32_t& _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_CookingThreadStackSize() {
    return *(int32_t*)((uintptr_t)this + 0x29c);
}
void* _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_HoudiniEnvironmentFiles() {
    return (void*)((uintptr_t)this + 0x2a0);
}
void* _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_OtlSearchPath() {
    return (void*)((uintptr_t)this + 0x2b0);
}
void* _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_DsoSearchPath() {
    return (void*)((uintptr_t)this + 0x2c0);
}
void* _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_ImageDsoSearchPath() {
    return (void*)((uintptr_t)this + 0x2d0);
}
void* _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::get_AudioDsoSearchPath() {
    return (void*)((uintptr_t)this + 0x2e0);
}
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniRuntimeSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HoudiniEngineRuntime.HoudiniRuntimeSettings");
    return result;
}
