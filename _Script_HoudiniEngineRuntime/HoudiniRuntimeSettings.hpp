#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_PhysicsCore {
struct PhysicalMaterial;
}
namespace _Script_Foliage {
struct FoliageType_InstancedStaticMesh;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_HoudiniEngineRuntime {
#pragma pack(push, 1)
struct HoudiniRuntimeSettings : public _Script_CoreUObject::Object {
    private: char pad_28[0x2c8]; public:
    void* get_SessionType();
    void* get_ServerHost();
    int32_t& get_ServerPort();
    void* get_ServerPipeName();
    bool get_bStartAutomaticServer();
    void set_bStartAutomaticServer(bool value);
    float& get_AutomaticServerTimeout();
    bool get_bSyncWithHoudiniCook();
    void set_bSyncWithHoudiniCook(bool value);
    bool get_bCookUsingHoudiniTime();
    void set_bCookUsingHoudiniTime(bool value);
    bool get_bSyncViewport();
    void set_bSyncViewport(bool value);
    bool get_bSyncHoudiniViewport();
    void set_bSyncHoudiniViewport(bool value);
    bool get_bSyncUnrealViewport();
    void set_bSyncUnrealViewport(bool value);
    bool get_bShowMultiAssetDialog();
    void set_bShowMultiAssetDialog(bool value);
    bool get_bPreferHdaMemoryCopyOverHdaSourceFile();
    void set_bPreferHdaMemoryCopyOverHdaSourceFile(bool value);
    bool get_bPauseCookingOnStart();
    void set_bPauseCookingOnStart(bool value);
    bool get_bDisplaySlateCookingNotifications();
    void set_bDisplaySlateCookingNotifications(bool value);
    void* get_DefaultTemporaryCookFolder();
    void* get_DefaultBakeFolder();
    bool get_MarshallingLandscapesUseDefaultUnrealScaling();
    void set_MarshallingLandscapesUseDefaultUnrealScaling(bool value);
    bool get_MarshallingLandscapesUseFullResolution();
    void set_MarshallingLandscapesUseFullResolution(bool value);
    bool get_MarshallingLandscapesForceMinMaxValues();
    void set_MarshallingLandscapesForceMinMaxValues(bool value);
    float& get_MarshallingLandscapesForcedMinValue();
    float& get_MarshallingLandscapesForcedMaxValue();
    bool get_bAddRotAndScaleAttributesOnCurves();
    void set_bAddRotAndScaleAttributesOnCurves(bool value);
    bool get_bUseLegacyInputCurves();
    void set_bUseLegacyInputCurves(bool value);
    float& get_MarshallingSplineResolution();
    bool get_bEnableProxyStaticMesh();
    void set_bEnableProxyStaticMesh(bool value);
    bool get_bShowDefaultMesh();
    void set_bShowDefaultMesh(bool value);
    bool get_bEnableProxyStaticMeshRefinementByTimer();
    void set_bEnableProxyStaticMeshRefinementByTimer(bool value);
    float& get_ProxyMeshAutoRefineTimeoutSeconds();
    bool get_bEnableProxyStaticMeshRefinementOnPreSaveWorld();
    void set_bEnableProxyStaticMeshRefinementOnPreSaveWorld(bool value);
    bool get_bEnableProxyStaticMeshRefinementOnPreBeginPIE();
    void set_bEnableProxyStaticMeshRefinementOnPreBeginPIE(bool value);
    bool get_bDoubleSidedGeometry();
    void set_bDoubleSidedGeometry(bool value);
    _Script_PhysicsCore::PhysicalMaterial*& get_PhysMaterial();
    void* get_DefaultBodyInstance();
    void* get_CollisionTraceFlag();
    int32_t& get_LightMapResolution();
    float& get_LpvBiasMultiplier();
    float& get_GeneratedDistanceFieldResolutionScale();
    void* get_WalkableSlopeOverride();
    int32_t& get_LightMapCoordinateIndex();
    bool get_bUseMaximumStreamingTexelRatio();
    void set_bUseMaximumStreamingTexelRatio(bool value);
    float& get_StreamingDistanceMultiplier();
    _Script_Foliage::FoliageType_InstancedStaticMesh*& get_FoliageDefaultSettings();
    void* get_AssetUserData();
    bool get_bUseFullPrecisionUVs();
    void set_bUseFullPrecisionUVs(bool value);
    int32_t& get_SrcLightmapIndex();
    int32_t& get_DstLightmapIndex();
    int32_t& get_MinLightmapResolution();
    bool get_bRemoveDegenerates();
    void set_bRemoveDegenerates(bool value);
    void* get_GenerateLightmapUVsFlag();
    void* get_RecomputeNormalsFlag();
    void* get_RecomputeTangentsFlag();
    bool get_bUseMikkTSpace();
    void set_bUseMikkTSpace(bool value);
    bool get_bBuildAdjacencyBuffer();
    void set_bBuildAdjacencyBuffer(bool value);
    bool get_bComputeWeightedNormals();
    void set_bComputeWeightedNormals(bool value);
    bool get_bBuildReversedIndexBuffer();
    void set_bBuildReversedIndexBuffer(bool value);
    bool get_bUseHighPrecisionTangentBasis();
    void set_bUseHighPrecisionTangentBasis(bool value);
    float& get_DistanceFieldResolutionScale();
    bool get_bGenerateDistanceFieldAsIfTwoSided();
    void set_bGenerateDistanceFieldAsIfTwoSided(bool value);
    bool get_bSupportFaceRemap();
    void set_bSupportFaceRemap(bool value);
    bool get_bPDGAsyncCommandletImportEnabled();
    void set_bPDGAsyncCommandletImportEnabled(bool value);
    bool get_bEnableBackwardCompatibility();
    void set_bEnableBackwardCompatibility(bool value);
    bool get_bAutomaticLegacyHDARebuild();
    void set_bAutomaticLegacyHDARebuild(bool value);
    bool get_bUseCustomHoudiniLocation();
    void set_bUseCustomHoudiniLocation(bool value);
    void* get_CustomHoudiniLocation();
    void* get_HoudiniExecutable();
    int32_t& get_CookingThreadStackSize();
    void* get_HoudiniEnvironmentFiles();
    void* get_OtlSearchPath();
    void* get_DsoSearchPath();
    void* get_ImageDsoSearchPath();
    void* get_AudioDsoSearchPath();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2f0
#pragma pack(pop)
}
