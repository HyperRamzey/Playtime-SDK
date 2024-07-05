#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
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
struct HoudiniStaticMeshGenerationProperties {
    private: char pad_0[0x1a8]; public:
    bool get_bGeneratedDoubleSidedGeometry();
    void set_bGeneratedDoubleSidedGeometry(bool value);
    _Script_PhysicsCore::PhysicalMaterial*& get_GeneratedPhysMaterial();
    void* get_DefaultBodyInstance();
    void* get_GeneratedCollisionTraceFlag();
    int32_t& get_GeneratedLightMapResolution();
    void* get_GeneratedWalkableSlopeOverride();
    int32_t& get_GeneratedLightMapCoordinateIndex();
    bool get_bGeneratedUseMaximumStreamingTexelRatio();
    void set_bGeneratedUseMaximumStreamingTexelRatio(bool value);
    float& get_GeneratedStreamingDistanceMultiplier();
    _Script_Foliage::FoliageType_InstancedStaticMesh*& get_GeneratedFoliageDefaultSettings();
    void* get_GeneratedAssetUserData();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1a8
#pragma pack(pop)
}
