#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\PrimitiveComponent.hpp"
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
struct HoudiniAssetComponent_V1 : public _Script_Engine::PrimitiveComponent {
    private: char pad_450[0x520]; public:
    bool get_bGeneratedDoubleSidedGeometry();
    void set_bGeneratedDoubleSidedGeometry(bool value);
    _Script_PhysicsCore::PhysicalMaterial*& get_GeneratedPhysMaterial();
    void* get_DefaultBodyInstance();
    void* get_GeneratedCollisionTraceFlag();
    int32_t& get_GeneratedLightMapResolution();
    float& get_GeneratedDistanceFieldResolutionScale();
    void* get_GeneratedWalkableSlopeOverride();
    int32_t& get_GeneratedLightMapCoordinateIndex();
    bool get_bGeneratedUseMaximumStreamingTexelRatio();
    void set_bGeneratedUseMaximumStreamingTexelRatio(bool value);
    float& get_GeneratedStreamingDistanceMultiplier();
    _Script_Foliage::FoliageType_InstancedStaticMesh*& get_GeneratedFoliageDefaultSettings();
    void* get_GeneratedAssetUserData();
    void* get_BakeFolder();
    void* get_TempCookFolder();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x970
#pragma pack(pop)
}
