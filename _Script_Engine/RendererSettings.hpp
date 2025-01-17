#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_DeveloperSettings\DeveloperSettings.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct RendererSettings : public _Script_DeveloperSettings::DeveloperSettings {
    private: char pad_38[0x110]; public:
    bool get_bMobileDisableVertexFog();
    void set_bMobileDisableVertexFog(bool value);
    int32_t& get_MaxMobileCascades();
    void* get_MobileMSAASampleCount();
    bool get_bMobileAllowDitheredLODTransition();
    void set_bMobileAllowDitheredLODTransition(bool value);
    bool get_bMobileAllowSoftwareOcclusionCulling();
    void set_bMobileAllowSoftwareOcclusionCulling(bool value);
    bool get_bMobileVirtualTextures();
    void set_bMobileVirtualTextures(bool value);
    bool get_bDiscardUnusedQualityLevels();
    void set_bDiscardUnusedQualityLevels(bool value);
    bool get_bOcclusionCulling();
    void set_bOcclusionCulling(bool value);
    float& get_MinScreenRadiusForLights();
    float& get_MinScreenRadiusForEarlyZPass();
    float& get_MinScreenRadiusForCSMdepth();
    bool get_bPrecomputedVisibilityWarning();
    void set_bPrecomputedVisibilityWarning(bool value);
    bool get_bTextureStreaming();
    void set_bTextureStreaming(bool value);
    bool get_bUseDXT5NormalMaps();
    void set_bUseDXT5NormalMaps(bool value);
    bool get_bVirtualTextures();
    void set_bVirtualTextures(bool value);
    bool get_bVirtualTextureEnableAutoImport();
    void set_bVirtualTextureEnableAutoImport(bool value);
    bool get_bVirtualTexturedLightmaps();
    void set_bVirtualTexturedLightmaps(bool value);
    void* get_VirtualTextureTileSize();
    void* get_VirtualTextureTileBorderSize();
    void* get_VirtualTextureFeedbackFactor();
    bool get_bVirtualTextureEnableCompressZlib();
    void set_bVirtualTextureEnableCompressZlib(bool value);
    bool get_bVirtualTextureEnableCompressCrunch();
    void set_bVirtualTextureEnableCompressCrunch(bool value);
    bool get_bClearCoatEnableSecondNormal();
    void set_bClearCoatEnableSecondNormal(bool value);
    int32_t& get_ReflectionCaptureResolution();
    bool get_bReflectionCaptureCompression();
    void set_bReflectionCaptureCompression(bool value);
    bool get_ReflectionEnvironmentLightmapMixBasedOnRoughness();
    void set_ReflectionEnvironmentLightmapMixBasedOnRoughness(bool value);
    bool get_bForwardShading();
    void set_bForwardShading(bool value);
    bool get_bVertexFoggingForOpaque();
    void set_bVertexFoggingForOpaque(bool value);
    bool get_bAllowStaticLighting();
    void set_bAllowStaticLighting(bool value);
    bool get_bUseNormalMapsForStaticLighting();
    void set_bUseNormalMapsForStaticLighting(bool value);
    bool get_bGenerateMeshDistanceFields();
    void set_bGenerateMeshDistanceFields(bool value);
    bool get_bEightBitMeshDistanceFields();
    void set_bEightBitMeshDistanceFields(bool value);
    bool get_bGenerateLandscapeGIData();
    void set_bGenerateLandscapeGIData(bool value);
    bool get_bCompressMeshDistanceFields();
    void set_bCompressMeshDistanceFields(bool value);
    float& get_TessellationAdaptivePixelsPerTriangle();
    bool get_bSeparateTranslucency();
    void set_bSeparateTranslucency(bool value);
    void* get_TranslucentSortPolicy();
    void* get_TranslucentSortAxis();
    void* get_HMDFixedFoveationLevel();
    void* get_CustomDepthStencil();
    bool get_bCustomDepthTaaJitter();
    void set_bCustomDepthTaaJitter(bool value);
    void* get_bEnableAlphaChannelInPostProcessing();
    bool get_bDefaultFeatureBloom();
    void set_bDefaultFeatureBloom(bool value);
    bool get_bDefaultFeatureAmbientOcclusion();
    void set_bDefaultFeatureAmbientOcclusion(bool value);
    bool get_bDefaultFeatureAmbientOcclusionStaticFraction();
    void set_bDefaultFeatureAmbientOcclusionStaticFraction(bool value);
    bool get_bDefaultFeatureAutoExposure();
    void set_bDefaultFeatureAutoExposure(bool value);
    void* get_DefaultFeatureAutoExposure();
    float& get_DefaultFeatureAutoExposureBias();
    bool get_bExtendDefaultLuminanceRangeInAutoExposureSettings();
    void set_bExtendDefaultLuminanceRangeInAutoExposureSettings(bool value);
    bool get_bUsePreExposure();
    void set_bUsePreExposure(bool value);
    bool get_bEnablePreExposureOnlyInTheEditor();
    void set_bEnablePreExposureOnlyInTheEditor(bool value);
    bool get_bDefaultFeatureMotionBlur();
    void set_bDefaultFeatureMotionBlur(bool value);
    bool get_bDefaultFeatureLensFlare();
    void set_bDefaultFeatureLensFlare(bool value);
    bool get_bTemporalUpsampling();
    void set_bTemporalUpsampling(bool value);
    bool get_bSSGI();
    void set_bSSGI(bool value);
    void* get_DefaultFeatureAntiAliasing();
    void* get_DefaultLightUnits();
    void* get_DefaultBackBufferPixelFormat();
    bool get_bRenderUnbuiltPreviewShadowsInGame();
    void set_bRenderUnbuiltPreviewShadowsInGame(bool value);
    bool get_bStencilForLODDither();
    void set_bStencilForLODDither(bool value);
    void* get_EarlyZPass();
    bool get_bEarlyZPassOnlyMaterialMasking();
    void set_bEarlyZPassOnlyMaterialMasking(bool value);
    bool get_bDBuffer();
    void set_bDBuffer(bool value);
    void* get_ClearSceneMethod();
    bool get_bBasePassOutputsVelocity();
    void set_bBasePassOutputsVelocity(bool value);
    bool get_bVertexDeformationOutputsVelocity();
    void set_bVertexDeformationOutputsVelocity(bool value);
    bool get_bSelectiveBasePassOutputs();
    void set_bSelectiveBasePassOutputs(bool value);
    bool get_bDefaultParticleCutouts();
    void set_bDefaultParticleCutouts(bool value);
    int32_t& get_GPUSimulationTextureSizeX();
    int32_t& get_GPUSimulationTextureSizeY();
    bool get_bGlobalClipPlane();
    void set_bGlobalClipPlane(bool value);
    void* get_GBufferFormat();
    bool get_bUseGPUMorphTargets();
    void set_bUseGPUMorphTargets(bool value);
    bool get_bNvidiaAftermathEnabled();
    void set_bNvidiaAftermathEnabled(bool value);
    bool get_bMultiView();
    void set_bMultiView(bool value);
    bool get_bMobilePostProcessing();
    void set_bMobilePostProcessing(bool value);
    bool get_bMobileMultiView();
    void set_bMobileMultiView(bool value);
    bool get_bMobileUseHWsRGBEncoding();
    void set_bMobileUseHWsRGBEncoding(bool value);
    bool get_bRoundRobinOcclusion();
    void set_bRoundRobinOcclusion(bool value);
    bool get_bODSCapture();
    void set_bODSCapture(bool value);
    bool get_bMeshStreaming();
    void set_bMeshStreaming(bool value);
    float& get_WireframeCullThreshold();
    bool get_bEnableRayTracing();
    void set_bEnableRayTracing(bool value);
    bool get_bEnableRayTracingTextureLOD();
    void set_bEnableRayTracingTextureLOD(bool value);
    bool get_bSupportStationarySkylight();
    void set_bSupportStationarySkylight(bool value);
    bool get_bSupportLowQualityLightmaps();
    void set_bSupportLowQualityLightmaps(bool value);
    bool get_bSupportPointLightWholeSceneShadows();
    void set_bSupportPointLightWholeSceneShadows(bool value);
    bool get_bSupportAtmosphericFog();
    void set_bSupportAtmosphericFog(bool value);
    bool get_bSupportSkyAtmosphere();
    void set_bSupportSkyAtmosphere(bool value);
    bool get_bSupportSkyAtmosphereAffectsHeightFog();
    void set_bSupportSkyAtmosphereAffectsHeightFog(bool value);
    bool get_bSupportSkinCacheShaders();
    void set_bSupportSkinCacheShaders(bool value);
    void* get_DefaultSkinCacheBehavior();
    float& get_SkinCacheSceneMemoryLimitInMB();
    bool get_bMobileEnableStaticAndCSMShadowReceivers();
    void set_bMobileEnableStaticAndCSMShadowReceivers(bool value);
    bool get_bMobileEnableMovableLightCSMShaderCulling();
    void set_bMobileEnableMovableLightCSMShaderCulling(bool value);
    bool get_bMobileAllowDistanceFieldShadows();
    void set_bMobileAllowDistanceFieldShadows(bool value);
    bool get_bMobileAllowMovableDirectionalLights();
    void set_bMobileAllowMovableDirectionalLights(bool value);
    void* get_MobileNumDynamicPointLights();
    bool get_bMobileDynamicPointLightsUseStaticBranch();
    void set_bMobileDynamicPointLightsUseStaticBranch(bool value);
    bool get_bMobileAllowMovableSpotlights();
    void set_bMobileAllowMovableSpotlights(bool value);
    bool get_bMobileAllowMovableSpotlightShadows();
    void set_bMobileAllowMovableSpotlightShadows(bool value);
    bool get_bSupport16BitBoneIndex();
    void set_bSupport16BitBoneIndex(bool value);
    bool get_bGPUSkinLimit2BoneInfluences();
    void set_bGPUSkinLimit2BoneInfluences(bool value);
    bool get_bSupportDepthOnlyIndexBuffers();
    void set_bSupportDepthOnlyIndexBuffers(bool value);
    bool get_bSupportReversedIndexBuffers();
    void set_bSupportReversedIndexBuffers(bool value);
    bool get_bLPV();
    void set_bLPV(bool value);
    bool get_bMobileAmbientOcclusion();
    void set_bMobileAmbientOcclusion(bool value);
    bool get_bUseUnlimitedBoneInfluences();
    void set_bUseUnlimitedBoneInfluences(bool value);
    int32_t& get_UnlimitedBonInfluencesThreshold();
    void* get_MaxSkinBones();
    void* get_MobilePlanarReflectionMode();
    bool get_bMobileSupportsGen4TAA();
    void set_bMobileSupportsGen4TAA(bool value);
    void* get_bStreamSkeletalMeshLODs();
    void* get_bDiscardSkeletalMeshOptionalLODs();
    void* get_VisualizeCalibrationColorMaterialPath();
    void* get_VisualizeCalibrationCustomMaterialPath();
    void* get_VisualizeCalibrationGrayscaleMaterialPath();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x148
#pragma pack(pop)
}
