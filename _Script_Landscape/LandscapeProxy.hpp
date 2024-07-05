#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Landscape {
struct LandscapeSplinesComponent;
}
namespace _Script_PhysicsCore {
struct PhysicalMaterial;
}
namespace _Script_Engine {
struct SplineComponent;
}
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_Engine {
struct Texture;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct TextureRenderTarget2D;
}
namespace _Script_Landscape {
struct LandscapeLayerInfoObject;
}
namespace _Script_Landscape {
#pragma pack(push, 1)
struct LandscapeProxy : public _Script_Engine::Actor {
    private: char pad_220[0x378]; public:
    _Script_Landscape::LandscapeSplinesComponent*& get_SplineComponent();
    void* get_LandscapeGuid();
    void* get_LandscapeSectionOffset();
    int32_t& get_MaxLODLevel();
    float& get_LODDistanceFactor();
    void* get_LODFalloff();
    float& get_ComponentScreenSizeToUseSubSections();
    float& get_LOD0ScreenSize();
    float& get_LOD0DistributionSetting();
    float& get_LODDistributionSetting();
    float& get_TessellationComponentScreenSize();
    bool get_UseTessellationComponentScreenSizeFalloff();
    void set_UseTessellationComponentScreenSizeFalloff(bool value);
    float& get_TessellationComponentScreenSizeFalloff();
    int32_t& get_OccluderGeometryLOD();
    int32_t& get_StaticLightingLOD();
    _Script_PhysicsCore::PhysicalMaterial*& get_DefaultPhysMaterial();
    float& get_StreamingDistanceMultiplier();
    _Script_Engine::MaterialInterface*& get_LandscapeMaterial();
    _Script_Engine::MaterialInterface*& get_LandscapeHoleMaterial();
    void* get_LandscapeMaterialsOverride();
    bool get_bMeshHoles();
    void set_bMeshHoles(bool value);
    void* get_MeshHolesMaxLod();
    void* get_RuntimeVirtualTextures();
    int32_t& get_VirtualTextureNumLods();
    int32_t& get_VirtualTextureLodBias();
    void* get_VirtualTextureRenderPassType();
    float& get_NegativeZBoundsExtension();
    float& get_PositiveZBoundsExtension();
    void* get_LandscapeComponents();
    void* get_CollisionComponents();
    void* get_FoliageComponents();
    bool get_bHasLandscapeGrass();
    void set_bHasLandscapeGrass(bool value);
    float& get_StaticLightingResolution();
    bool get_CastShadow();
    void set_CastShadow(bool value);
    bool get_bCastDynamicShadow();
    void set_bCastDynamicShadow(bool value);
    bool get_bCastStaticShadow();
    void set_bCastStaticShadow(bool value);
    bool get_bCastFarShadow();
    void set_bCastFarShadow(bool value);
    bool get_bCastHiddenShadow();
    void set_bCastHiddenShadow(bool value);
    bool get_bCastShadowAsTwoSided();
    void set_bCastShadowAsTwoSided(bool value);
    bool get_bAffectDistanceFieldLighting();
    void set_bAffectDistanceFieldLighting(bool value);
    void* get_LightingChannels();
    bool get_bUseMaterialPositionOffsetInStaticLighting();
    void set_bUseMaterialPositionOffsetInStaticLighting(bool value);
    bool get_bRenderCustomDepth();
    void set_bRenderCustomDepth(bool value);
    void* get_CustomDepthStencilWriteMask();
    int32_t& get_CustomDepthStencilValue();
    float& get_LDMaxDrawDistance();
    void* get_LightmassSettings();
    int32_t& get_CollisionMipLevel();
    int32_t& get_SimpleCollisionMipLevel();
    float& get_CollisionThickness();
    void* get_BodyInstance();
    bool get_bGenerateOverlapEvents();
    void set_bGenerateOverlapEvents(bool value);
    bool get_bBakeMaterialPositionOffsetIntoCollision();
    void set_bBakeMaterialPositionOffsetIntoCollision(bool value);
    int32_t& get_ComponentSizeQuads();
    int32_t& get_SubsectionSizeQuads();
    int32_t& get_NumSubsections();
    bool get_bUsedForNavigation();
    void set_bUsedForNavigation(bool value);
    bool get_bFillCollisionUnderLandscapeForNavmesh();
    void set_bFillCollisionUnderLandscapeForNavmesh(bool value);
    bool get_bUseDynamicMaterialInstance();
    void set_bUseDynamicMaterialInstance(bool value);
    void* get_NavigationGeometryGatheringMode();
    bool get_bUseLandscapeForCullingInvisibleHLODVertices();
    void set_bUseLandscapeForCullingInvisibleHLODVertices(bool value);
    bool get_bHasLayersContent();
    void set_bHasLayersContent(bool value);
    void* get_WeightmapUsageMap();
    static _Script_CoreUObject::Class* static_class();
    void SetLandscapeMaterialVectorParameterValue(void* ParameterName, _Script_CoreUObject::LinearColor Value);
    void SetLandscapeMaterialTextureParameterValue(void* ParameterName, _Script_Engine::Texture* Value);
    void SetLandscapeMaterialScalarParameterValue(void* ParameterName, float Value);
    bool LandscapeExportHeightmapToRenderTarget(_Script_Engine::TextureRenderTarget2D* InRenderTarget, bool InExportHeightIntoRGChannel, bool InExportLandscapeProxies);
    void EditorSetLandscapeMaterial(_Script_Engine::MaterialInterface* NewLandscapeMaterial);
    void EditorApplySpline(_Script_Engine::SplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32_t NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, _Script_Landscape::LandscapeLayerInfoObject* PaintLayer, void* EditLayerName);
    void ChangeUseTessellationComponentScreenSizeFalloff(bool InComponentScreenSizeToUseSubSections);
    void ChangeTessellationComponentScreenSizeFalloff(float InUseTessellationComponentScreenSizeFalloff);
    void ChangeTessellationComponentScreenSize(float InTessellationComponentScreenSize);
    void ChangeLODDistanceFactor(float InLODDistanceFactor);
    void ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections);
}; // Size: 0x598
#pragma pack(pop)
}
