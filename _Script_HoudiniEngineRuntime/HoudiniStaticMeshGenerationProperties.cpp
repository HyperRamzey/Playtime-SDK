#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Foliage\FoliageType_InstancedStaticMesh.hpp"
#include "HoudiniStaticMeshGenerationProperties.hpp"
#include "..\_Script_PhysicsCore\PhysicalMaterial.hpp"
void* _Script_HoudiniEngineRuntime::HoudiniStaticMeshGenerationProperties::get_GeneratedWalkableSlopeOverride() {
    return (void*)((uintptr_t)this + 0x170);
}
bool _Script_HoudiniEngineRuntime::HoudiniStaticMeshGenerationProperties::get_bGeneratedDoubleSidedGeometry() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniStaticMeshGenerationProperties::set_bGeneratedDoubleSidedGeometry(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_PhysicsCore::PhysicalMaterial*& _Script_HoudiniEngineRuntime::HoudiniStaticMeshGenerationProperties::get_GeneratedPhysMaterial() {
    return *(_Script_PhysicsCore::PhysicalMaterial**)((uintptr_t)this + 0x8);
}
int32_t& _Script_HoudiniEngineRuntime::HoudiniStaticMeshGenerationProperties::get_GeneratedLightMapResolution() {
    return *(int32_t*)((uintptr_t)this + 0x16c);
}
void* _Script_HoudiniEngineRuntime::HoudiniStaticMeshGenerationProperties::get_DefaultBodyInstance() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_HoudiniEngineRuntime::HoudiniStaticMeshGenerationProperties::get_GeneratedCollisionTraceFlag() {
    return (void*)((uintptr_t)this + 0x168);
}
int32_t& _Script_HoudiniEngineRuntime::HoudiniStaticMeshGenerationProperties::get_GeneratedLightMapCoordinateIndex() {
    return *(int32_t*)((uintptr_t)this + 0x180);
}
bool _Script_HoudiniEngineRuntime::HoudiniStaticMeshGenerationProperties::get_bGeneratedUseMaximumStreamingTexelRatio() {
    return (*(uint8_t*)((uintptr_t)this + 0x184 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniStaticMeshGenerationProperties::set_bGeneratedUseMaximumStreamingTexelRatio(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x184 + 0);
    *(uint8_t*)((uintptr_t)this + 0x184 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_HoudiniEngineRuntime::HoudiniStaticMeshGenerationProperties::get_GeneratedStreamingDistanceMultiplier() {
    return *(float*)((uintptr_t)this + 0x188);
}
_Script_Foliage::FoliageType_InstancedStaticMesh*& _Script_HoudiniEngineRuntime::HoudiniStaticMeshGenerationProperties::get_GeneratedFoliageDefaultSettings() {
    return *(_Script_Foliage::FoliageType_InstancedStaticMesh**)((uintptr_t)this + 0x190);
}
void* _Script_HoudiniEngineRuntime::HoudiniStaticMeshGenerationProperties::get_GeneratedAssetUserData() {
    return (void*)((uintptr_t)this + 0x198);
}
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniStaticMeshGenerationProperties::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/HoudiniEngineRuntime.HoudiniStaticMeshGenerationProperties");
    return result;
}
