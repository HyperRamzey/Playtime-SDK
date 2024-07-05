#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Foliage\FoliageType_InstancedStaticMesh.hpp"
#include "HoudiniAssetComponent_V1.hpp"
#include "..\_Script_PhysicsCore\PhysicalMaterial.hpp"
void _Script_HoudiniEngineRuntime::HoudiniAssetComponent_V1::set_bGeneratedDoubleSidedGeometry(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x450 + 0);
    *(uint8_t*)((uintptr_t)this + 0x450 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniAssetComponent_V1::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HoudiniEngineRuntime.HoudiniAssetComponent_V1");
    return result;
}
bool _Script_HoudiniEngineRuntime::HoudiniAssetComponent_V1::get_bGeneratedDoubleSidedGeometry() {
    return (*(uint8_t*)((uintptr_t)this + 0x450 + 0)) & 1 != 0;
}
void* _Script_HoudiniEngineRuntime::HoudiniAssetComponent_V1::get_GeneratedCollisionTraceFlag() {
    return (void*)((uintptr_t)this + 0x5b8);
}
_Script_PhysicsCore::PhysicalMaterial*& _Script_HoudiniEngineRuntime::HoudiniAssetComponent_V1::get_GeneratedPhysMaterial() {
    return *(_Script_PhysicsCore::PhysicalMaterial**)((uintptr_t)this + 0x458);
}
float& _Script_HoudiniEngineRuntime::HoudiniAssetComponent_V1::get_GeneratedDistanceFieldResolutionScale() {
    return *(float*)((uintptr_t)this + 0x5c0);
}
void* _Script_HoudiniEngineRuntime::HoudiniAssetComponent_V1::get_DefaultBodyInstance() {
    return (void*)((uintptr_t)this + 0x460);
}
void* _Script_HoudiniEngineRuntime::HoudiniAssetComponent_V1::get_GeneratedWalkableSlopeOverride() {
    return (void*)((uintptr_t)this + 0x5c4);
}
int32_t& _Script_HoudiniEngineRuntime::HoudiniAssetComponent_V1::get_GeneratedLightMapResolution() {
    return *(int32_t*)((uintptr_t)this + 0x5bc);
}
int32_t& _Script_HoudiniEngineRuntime::HoudiniAssetComponent_V1::get_GeneratedLightMapCoordinateIndex() {
    return *(int32_t*)((uintptr_t)this + 0x5d4);
}
bool _Script_HoudiniEngineRuntime::HoudiniAssetComponent_V1::get_bGeneratedUseMaximumStreamingTexelRatio() {
    return (*(uint8_t*)((uintptr_t)this + 0x5d8 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniAssetComponent_V1::set_bGeneratedUseMaximumStreamingTexelRatio(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5d8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x5d8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_HoudiniEngineRuntime::HoudiniAssetComponent_V1::get_GeneratedStreamingDistanceMultiplier() {
    return *(float*)((uintptr_t)this + 0x5dc);
}
_Script_Foliage::FoliageType_InstancedStaticMesh*& _Script_HoudiniEngineRuntime::HoudiniAssetComponent_V1::get_GeneratedFoliageDefaultSettings() {
    return *(_Script_Foliage::FoliageType_InstancedStaticMesh**)((uintptr_t)this + 0x5e0);
}
void* _Script_HoudiniEngineRuntime::HoudiniAssetComponent_V1::get_GeneratedAssetUserData() {
    return (void*)((uintptr_t)this + 0x5e8);
}
void* _Script_HoudiniEngineRuntime::HoudiniAssetComponent_V1::get_BakeFolder() {
    return (void*)((uintptr_t)this + 0x5f8);
}
void* _Script_HoudiniEngineRuntime::HoudiniAssetComponent_V1::get_TempCookFolder() {
    return (void*)((uintptr_t)this + 0x610);
}
