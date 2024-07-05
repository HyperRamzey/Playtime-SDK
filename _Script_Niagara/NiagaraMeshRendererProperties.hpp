#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "NiagaraRendererProperties.hpp"
namespace _Script_Engine {
struct StaticMesh;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraMeshRendererProperties : public NiagaraRendererProperties {
    private: char pad_78[0x820]; public:
    void* get_Meshes();
    void* get_SourceMode();
    void* get_SortMode();
    bool get_bOverrideMaterials();
    void set_bOverrideMaterials(bool value);
    bool get_bSortOnlyWhenTranslucent();
    void set_bSortOnlyWhenTranslucent(bool value);
    bool get_bGpuLowLatencyTranslucency();
    void set_bGpuLowLatencyTranslucency(bool value);
    bool get_bSubImageBlend();
    void set_bSubImageBlend(bool value);
    bool get_bEnableFrustumCulling();
    void set_bEnableFrustumCulling(bool value);
    bool get_bEnableCameraDistanceCulling();
    void set_bEnableCameraDistanceCulling(bool value);
    bool get_bEnableMeshFlipbook();
    void set_bEnableMeshFlipbook(bool value);
    void* get_OverrideMaterials();
    void* get_SubImageSize();
    void* get_FacingMode();
    bool get_bLockedAxisEnable();
    void set_bLockedAxisEnable(bool value);
    void* get_LockedAxis();
    void* get_LockedAxisSpace();
    float& get_MinCameraDistance();
    float& get_MaxCameraDistance();
    void* get_RendererVisibility();
    void* get_PositionBinding();
    void* get_ColorBinding();
    void* get_VelocityBinding();
    void* get_MeshOrientationBinding();
    void* get_ScaleBinding();
    void* get_SubImageIndexBinding();
    void* get_DynamicMaterialBinding();
    void* get_DynamicMaterial1Binding();
    void* get_DynamicMaterial2Binding();
    void* get_DynamicMaterial3Binding();
    void* get_MaterialRandomBinding();
    void* get_CustomSortingBinding();
    void* get_NormalizedAgeBinding();
    void* get_CameraOffsetBinding();
    void* get_RendererVisibilityTagBinding();
    void* get_MeshIndexBinding();
    void* get_MaterialParameterBindings();
    void* get_PrevPositionBinding();
    void* get_PrevScaleBinding();
    void* get_PrevMeshOrientationBinding();
    void* get_PrevCameraOffsetBinding();
    void* get_PrevVelocityBinding();
    _Script_Engine::StaticMesh*& get_ParticleMesh();
    void* get_PivotOffset();
    void* get_PivotOffsetSpace();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x898
#pragma pack(pop)
}
