#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\MaterialInterface.hpp"
#include "..\_Script_Engine\SplineComponent.hpp"
#include "..\_Script_Engine\Texture.hpp"
#include "..\_Script_Engine\TextureRenderTarget2D.hpp"
#include "LandscapeLayerInfoObject.hpp"
#include "LandscapeProxy.hpp"
#include "LandscapeSplinesComponent.hpp"
#include "..\_Script_PhysicsCore\PhysicalMaterial.hpp"
void _Script_Landscape::LandscapeProxy::EditorApplySpline(_Script_Engine::SplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32_t NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, _Script_Landscape::LandscapeLayerInfoObject* PaintLayer, void* EditLayerName) {
    return;
}
_Script_Landscape::LandscapeSplinesComponent*& _Script_Landscape::LandscapeProxy::get_SplineComponent() {
    return *(_Script_Landscape::LandscapeSplinesComponent**)((uintptr_t)this + 0x220);
}
void _Script_Landscape::LandscapeProxy::set_bAffectDistanceFieldLighting(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x39c + 0);
    *(uint8_t*)((uintptr_t)this + 0x39c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Landscape::LandscapeProxy::get_LandscapeGuid() {
    return (void*)((uintptr_t)this + 0x228);
}
float& _Script_Landscape::LandscapeProxy::get_NegativeZBoundsExtension() {
    return *(float*)((uintptr_t)this + 0x2e4);
}
void* _Script_Landscape::LandscapeProxy::get_LandscapeSectionOffset() {
    return (void*)((uintptr_t)this + 0x238);
}
int32_t& _Script_Landscape::LandscapeProxy::get_MaxLODLevel() {
    return *(int32_t*)((uintptr_t)this + 0x240);
}
void* _Script_Landscape::LandscapeProxy::get_LODFalloff() {
    return (void*)((uintptr_t)this + 0x248);
}
float& _Script_Landscape::LandscapeProxy::get_LODDistanceFactor() {
    return *(float*)((uintptr_t)this + 0x244);
}
float& _Script_Landscape::LandscapeProxy::get_StreamingDistanceMultiplier() {
    return *(float*)((uintptr_t)this + 0x278);
}
float& _Script_Landscape::LandscapeProxy::get_ComponentScreenSizeToUseSubSections() {
    return *(float*)((uintptr_t)this + 0x24c);
}
int32_t& _Script_Landscape::LandscapeProxy::get_NumSubsections() {
    return *(int32_t*)((uintptr_t)this + 0x53c);
}
float& _Script_Landscape::LandscapeProxy::get_LOD0ScreenSize() {
    return *(float*)((uintptr_t)this + 0x250);
}
float& _Script_Landscape::LandscapeProxy::get_LOD0DistributionSetting() {
    return *(float*)((uintptr_t)this + 0x254);
}
void* _Script_Landscape::LandscapeProxy::get_LandscapeComponents() {
    return (void*)((uintptr_t)this + 0x2f0);
}
float& _Script_Landscape::LandscapeProxy::get_LODDistributionSetting() {
    return *(float*)((uintptr_t)this + 0x258);
}
void _Script_Landscape::LandscapeProxy::set_bBakeMaterialPositionOffsetIntoCollision(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x530 + 0);
    *(uint8_t*)((uintptr_t)this + 0x530 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
float& _Script_Landscape::LandscapeProxy::get_TessellationComponentScreenSize() {
    return *(float*)((uintptr_t)this + 0x25c);
}
bool _Script_Landscape::LandscapeProxy::get_UseTessellationComponentScreenSizeFalloff() {
    return (*(uint8_t*)((uintptr_t)this + 0x260 + 0)) & 1 != 0;
}
void* _Script_Landscape::LandscapeProxy::get_FoliageComponents() {
    return (void*)((uintptr_t)this + 0x310);
}
void _Script_Landscape::LandscapeProxy::set_UseTessellationComponentScreenSizeFalloff(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x260 + 0);
    *(uint8_t*)((uintptr_t)this + 0x260 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Landscape::LandscapeProxy::get_TessellationComponentScreenSizeFalloff() {
    return *(float*)((uintptr_t)this + 0x264);
}
int32_t& _Script_Landscape::LandscapeProxy::get_OccluderGeometryLOD() {
    return *(int32_t*)((uintptr_t)this + 0x268);
}
int32_t& _Script_Landscape::LandscapeProxy::get_StaticLightingLOD() {
    return *(int32_t*)((uintptr_t)this + 0x26c);
}
_Script_PhysicsCore::PhysicalMaterial*& _Script_Landscape::LandscapeProxy::get_DefaultPhysMaterial() {
    return *(_Script_PhysicsCore::PhysicalMaterial**)((uintptr_t)this + 0x270);
}
_Script_Engine::MaterialInterface*& _Script_Landscape::LandscapeProxy::get_LandscapeMaterial() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x280);
}
_Script_Engine::MaterialInterface*& _Script_Landscape::LandscapeProxy::get_LandscapeHoleMaterial() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x2a8);
}
void* _Script_Landscape::LandscapeProxy::get_LandscapeMaterialsOverride() {
    return (void*)((uintptr_t)this + 0x2b0);
}
_Script_CoreUObject::Class* _Script_Landscape::LandscapeProxy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Landscape.LandscapeProxy");
    return result;
}
bool _Script_Landscape::LandscapeProxy::get_bMeshHoles() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c0 + 0)) & 1 != 0;
}
void _Script_Landscape::LandscapeProxy::set_bMeshHoles(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Landscape::LandscapeProxy::get_bFillCollisionUnderLandscapeForNavmesh() {
    return (*(uint8_t*)((uintptr_t)this + 0x540 + 0)) & 2 != 0;
}
void* _Script_Landscape::LandscapeProxy::get_MeshHolesMaxLod() {
    return (void*)((uintptr_t)this + 0x2c1);
}
void* _Script_Landscape::LandscapeProxy::get_RuntimeVirtualTextures() {
    return (void*)((uintptr_t)this + 0x2c8);
}
int32_t& _Script_Landscape::LandscapeProxy::get_VirtualTextureNumLods() {
    return *(int32_t*)((uintptr_t)this + 0x2d8);
}
void _Script_Landscape::LandscapeProxy::set_CastShadow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38c + 0);
    *(uint8_t*)((uintptr_t)this + 0x38c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Landscape::LandscapeProxy::get_VirtualTextureLodBias() {
    return *(int32_t*)((uintptr_t)this + 0x2dc);
}
void _Script_Landscape::LandscapeProxy::set_bUseMaterialPositionOffsetInStaticLighting(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3a0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3a0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Landscape::LandscapeProxy::get_VirtualTextureRenderPassType() {
    return (void*)((uintptr_t)this + 0x2e0);
}
int32_t& _Script_Landscape::LandscapeProxy::get_SimpleCollisionMipLevel() {
    return *(int32_t*)((uintptr_t)this + 0x3cc);
}
float& _Script_Landscape::LandscapeProxy::get_PositiveZBoundsExtension() {
    return *(float*)((uintptr_t)this + 0x2e8);
}
bool _Script_Landscape::LandscapeProxy::get_bHasLayersContent() {
    return (*(uint8_t*)((uintptr_t)this + 0x547 + 0)) & 1 != 0;
}
void* _Script_Landscape::LandscapeProxy::get_CollisionComponents() {
    return (void*)((uintptr_t)this + 0x300);
}
void* _Script_Landscape::LandscapeProxy::get_CustomDepthStencilWriteMask() {
    return (void*)((uintptr_t)this + 0x3a4);
}
bool _Script_Landscape::LandscapeProxy::get_bHasLandscapeGrass() {
    return (*(uint8_t*)((uintptr_t)this + 0x384 + 0)) & 1 != 0;
}
void _Script_Landscape::LandscapeProxy::set_bHasLandscapeGrass(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x384 + 0);
    *(uint8_t*)((uintptr_t)this + 0x384 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Landscape::LandscapeProxy::get_StaticLightingResolution() {
    return *(float*)((uintptr_t)this + 0x388);
}
void* _Script_Landscape::LandscapeProxy::get_BodyInstance() {
    return (void*)((uintptr_t)this + 0x3d8);
}
bool _Script_Landscape::LandscapeProxy::get_CastShadow() {
    return (*(uint8_t*)((uintptr_t)this + 0x38c + 0)) & 1 != 0;
}
bool _Script_Landscape::LandscapeProxy::get_bCastDynamicShadow() {
    return (*(uint8_t*)((uintptr_t)this + 0x38c + 0)) & 2 != 0;
}
void _Script_Landscape::LandscapeProxy::ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections) {
    return;
}
void _Script_Landscape::LandscapeProxy::set_bCastDynamicShadow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38c + 0);
    *(uint8_t*)((uintptr_t)this + 0x38c + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Landscape::LandscapeProxy::get_bCastStaticShadow() {
    return (*(uint8_t*)((uintptr_t)this + 0x38c + 0)) & 4 != 0;
}
void _Script_Landscape::LandscapeProxy::set_bCastStaticShadow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38c + 0);
    *(uint8_t*)((uintptr_t)this + 0x38c + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Landscape::LandscapeProxy::get_bCastFarShadow() {
    return (*(uint8_t*)((uintptr_t)this + 0x390 + 0)) & 1 != 0;
}
void _Script_Landscape::LandscapeProxy::set_bCastFarShadow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x390 + 0);
    *(uint8_t*)((uintptr_t)this + 0x390 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Landscape::LandscapeProxy::get_bUseDynamicMaterialInstance() {
    return (*(uint8_t*)((uintptr_t)this + 0x544 + 0)) & 1 != 0;
}
bool _Script_Landscape::LandscapeProxy::get_bCastHiddenShadow() {
    return (*(uint8_t*)((uintptr_t)this + 0x394 + 0)) & 1 != 0;
}
bool _Script_Landscape::LandscapeProxy::get_bGenerateOverlapEvents() {
    return (*(uint8_t*)((uintptr_t)this + 0x530 + 0)) & 1 != 0;
}
void _Script_Landscape::LandscapeProxy::set_bCastHiddenShadow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x394 + 0);
    *(uint8_t*)((uintptr_t)this + 0x394 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Landscape::LandscapeProxy::LandscapeExportHeightmapToRenderTarget(_Script_Engine::TextureRenderTarget2D* InRenderTarget, bool InExportHeightIntoRGChannel, bool InExportLandscapeProxies) {
    return;
}
bool _Script_Landscape::LandscapeProxy::get_bCastShadowAsTwoSided() {
    return (*(uint8_t*)((uintptr_t)this + 0x398 + 0)) & 1 != 0;
}
void _Script_Landscape::LandscapeProxy::set_bCastShadowAsTwoSided(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x398 + 0);
    *(uint8_t*)((uintptr_t)this + 0x398 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Landscape::LandscapeProxy::get_CollisionThickness() {
    return *(float*)((uintptr_t)this + 0x3d0);
}
bool _Script_Landscape::LandscapeProxy::get_bAffectDistanceFieldLighting() {
    return (*(uint8_t*)((uintptr_t)this + 0x39c + 0)) & 1 != 0;
}
int32_t& _Script_Landscape::LandscapeProxy::get_CollisionMipLevel() {
    return *(int32_t*)((uintptr_t)this + 0x3c8);
}
void* _Script_Landscape::LandscapeProxy::get_LightingChannels() {
    return (void*)((uintptr_t)this + 0x39d);
}
bool _Script_Landscape::LandscapeProxy::get_bUseMaterialPositionOffsetInStaticLighting() {
    return (*(uint8_t*)((uintptr_t)this + 0x3a0 + 0)) & 1 != 0;
}
bool _Script_Landscape::LandscapeProxy::get_bRenderCustomDepth() {
    return (*(uint8_t*)((uintptr_t)this + 0x3a0 + 0)) & 2 != 0;
}
void _Script_Landscape::LandscapeProxy::set_bRenderCustomDepth(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3a0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3a0 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
int32_t& _Script_Landscape::LandscapeProxy::get_CustomDepthStencilValue() {
    return *(int32_t*)((uintptr_t)this + 0x3a8);
}
float& _Script_Landscape::LandscapeProxy::get_LDMaxDrawDistance() {
    return *(float*)((uintptr_t)this + 0x3ac);
}
void* _Script_Landscape::LandscapeProxy::get_LightmassSettings() {
    return (void*)((uintptr_t)this + 0x3b0);
}
void _Script_Landscape::LandscapeProxy::set_bGenerateOverlapEvents(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x530 + 0);
    *(uint8_t*)((uintptr_t)this + 0x530 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Landscape::LandscapeProxy::get_bBakeMaterialPositionOffsetIntoCollision() {
    return (*(uint8_t*)((uintptr_t)this + 0x530 + 0)) & 2 != 0;
}
int32_t& _Script_Landscape::LandscapeProxy::get_ComponentSizeQuads() {
    return *(int32_t*)((uintptr_t)this + 0x534);
}
int32_t& _Script_Landscape::LandscapeProxy::get_SubsectionSizeQuads() {
    return *(int32_t*)((uintptr_t)this + 0x538);
}
bool _Script_Landscape::LandscapeProxy::get_bUsedForNavigation() {
    return (*(uint8_t*)((uintptr_t)this + 0x540 + 0)) & 1 != 0;
}
void _Script_Landscape::LandscapeProxy::set_bUsedForNavigation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x540 + 0);
    *(uint8_t*)((uintptr_t)this + 0x540 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Landscape::LandscapeProxy::set_bFillCollisionUnderLandscapeForNavmesh(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x540 + 0);
    *(uint8_t*)((uintptr_t)this + 0x540 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Landscape::LandscapeProxy::set_bUseDynamicMaterialInstance(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x544 + 0);
    *(uint8_t*)((uintptr_t)this + 0x544 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Landscape::LandscapeProxy::get_NavigationGeometryGatheringMode() {
    return (void*)((uintptr_t)this + 0x545);
}
bool _Script_Landscape::LandscapeProxy::get_bUseLandscapeForCullingInvisibleHLODVertices() {
    return (*(uint8_t*)((uintptr_t)this + 0x546 + 0)) & 1 != 0;
}
void _Script_Landscape::LandscapeProxy::set_bUseLandscapeForCullingInvisibleHLODVertices(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x546 + 0);
    *(uint8_t*)((uintptr_t)this + 0x546 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Landscape::LandscapeProxy::set_bHasLayersContent(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x547 + 0);
    *(uint8_t*)((uintptr_t)this + 0x547 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Landscape::LandscapeProxy::get_WeightmapUsageMap() {
    return (void*)((uintptr_t)this + 0x548);
}
void _Script_Landscape::LandscapeProxy::SetLandscapeMaterialVectorParameterValue(void* ParameterName, _Script_CoreUObject::LinearColor Value) {
    return;
}
void _Script_Landscape::LandscapeProxy::SetLandscapeMaterialTextureParameterValue(void* ParameterName, _Script_Engine::Texture* Value) {
    return;
}
void _Script_Landscape::LandscapeProxy::SetLandscapeMaterialScalarParameterValue(void* ParameterName, float Value) {
    return;
}
void _Script_Landscape::LandscapeProxy::EditorSetLandscapeMaterial(_Script_Engine::MaterialInterface* NewLandscapeMaterial) {
    return;
}
void _Script_Landscape::LandscapeProxy::ChangeUseTessellationComponentScreenSizeFalloff(bool InComponentScreenSizeToUseSubSections) {
    return;
}
void _Script_Landscape::LandscapeProxy::ChangeTessellationComponentScreenSizeFalloff(float InUseTessellationComponentScreenSizeFalloff) {
    return;
}
void _Script_Landscape::LandscapeProxy::ChangeTessellationComponentScreenSize(float InTessellationComponentScreenSize) {
    return;
}
void _Script_Landscape::LandscapeProxy::ChangeLODDistanceFactor(float InLODDistanceFactor) {
    return;
}
