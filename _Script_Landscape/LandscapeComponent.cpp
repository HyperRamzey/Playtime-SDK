#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\MaterialInstanceDynamic.hpp"
#include "..\_Script_Engine\MaterialInterface.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\Texture2D.hpp"
#include "LandscapeComponent.hpp"
#include "LandscapeLODStreamingProxy.hpp"
#include "LandscapeLayerInfoObject.hpp"
_Script_Landscape::LandscapeLODStreamingProxy*& _Script_Landscape::LandscapeComponent::get_LODStreamingProxy() {
    return *(_Script_Landscape::LandscapeLODStreamingProxy**)((uintptr_t)this + 0x560);
}
int32_t& _Script_Landscape::LandscapeComponent::get_SectionBaseX() {
    return *(int32_t*)((uintptr_t)this + 0x450);
}
_Script_Engine::Texture2D*& _Script_Landscape::LandscapeComponent::get_HeightmapTexture() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x538);
}
void* _Script_Landscape::LandscapeComponent::get_MaterialInstancesDynamic() {
    return (void*)((uintptr_t)this + 0x498);
}
int32_t& _Script_Landscape::LandscapeComponent::get_SubsectionSizeQuads() {
    return *(int32_t*)((uintptr_t)this + 0x45c);
}
float& _Script_Landscape::LandscapeComponent::get_StaticLightingResolution() {
    return *(float*)((uintptr_t)this + 0x598);
}
int32_t& _Script_Landscape::LandscapeComponent::get_SectionBaseY() {
    return *(int32_t*)((uintptr_t)this + 0x454);
}
int32_t& _Script_Landscape::LandscapeComponent::get_ComponentSizeQuads() {
    return *(int32_t*)((uintptr_t)this + 0x458);
}
_Script_Engine::MaterialInstanceDynamic* _Script_Landscape::LandscapeComponent::GetMaterialInstanceDynamic(int32_t InIndex) {
    return;
}
_Script_Engine::MaterialInterface*& _Script_Landscape::LandscapeComponent::get_OverrideHoleMaterial() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x470);
}
int32_t& _Script_Landscape::LandscapeComponent::get_NumSubsections() {
    return *(int32_t*)((uintptr_t)this + 0x460);
}
void* _Script_Landscape::LandscapeComponent::get_MobileBlendableLayerMask() {
    return (void*)((uintptr_t)this + 0x5d0);
}
void* _Script_Landscape::LandscapeComponent::get_MapBuildDataId() {
    return (void*)((uintptr_t)this + 0x568);
}
_Script_Engine::MaterialInterface*& _Script_Landscape::LandscapeComponent::get_OverrideMaterial() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x468);
}
void* _Script_Landscape::LandscapeComponent::get_OverrideMaterials() {
    return (void*)((uintptr_t)this + 0x478);
}
void* _Script_Landscape::LandscapeComponent::get_MaterialInstances() {
    return (void*)((uintptr_t)this + 0x488);
}
void* _Script_Landscape::LandscapeComponent::get_LODIndexToMaterialIndex() {
    return (void*)((uintptr_t)this + 0x4a8);
}
void* _Script_Landscape::LandscapeComponent::get_MaterialIndexToDisabledTessellationMaterial() {
    return (void*)((uintptr_t)this + 0x4b8);
}
_Script_Engine::Texture2D*& _Script_Landscape::LandscapeComponent::get_XYOffsetmapTexture() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x4c8);
}
void* _Script_Landscape::LandscapeComponent::get_WeightmapScaleBias() {
    return (void*)((uintptr_t)this + 0x4d0);
}
float& _Script_Landscape::LandscapeComponent::get_WeightmapSubsectionOffset() {
    return *(float*)((uintptr_t)this + 0x4e0);
}
void* _Script_Landscape::LandscapeComponent::get_HeightmapScaleBias() {
    return (void*)((uintptr_t)this + 0x4f0);
}
void* _Script_Landscape::LandscapeComponent::get_CachedLocalBox() {
    return (void*)((uintptr_t)this + 0x500);
}
void* _Script_Landscape::LandscapeComponent::get_CollisionComponent() {
    return (void*)((uintptr_t)this + 0x51c);
}
void* _Script_Landscape::LandscapeComponent::get_WeightmapLayerAllocations() {
    return (void*)((uintptr_t)this + 0x540);
}
void* _Script_Landscape::LandscapeComponent::get_WeightmapTextures() {
    return (void*)((uintptr_t)this + 0x550);
}
void* _Script_Landscape::LandscapeComponent::get_IrrelevantLights() {
    return (void*)((uintptr_t)this + 0x578);
}
int32_t& _Script_Landscape::LandscapeComponent::get_CollisionMipLevel() {
    return *(int32_t*)((uintptr_t)this + 0x588);
}
int32_t& _Script_Landscape::LandscapeComponent::get_SimpleCollisionMipLevel() {
    return *(int32_t*)((uintptr_t)this + 0x58c);
}
float& _Script_Landscape::LandscapeComponent::get_NegativeZBoundsExtension() {
    return *(float*)((uintptr_t)this + 0x590);
}
float& _Script_Landscape::LandscapeComponent::get_PositiveZBoundsExtension() {
    return *(float*)((uintptr_t)this + 0x594);
}
int32_t& _Script_Landscape::LandscapeComponent::get_ForcedLOD() {
    return *(int32_t*)((uintptr_t)this + 0x59c);
}
int32_t& _Script_Landscape::LandscapeComponent::get_LODBias() {
    return *(int32_t*)((uintptr_t)this + 0x5a0);
}
void* _Script_Landscape::LandscapeComponent::get_StateId() {
    return (void*)((uintptr_t)this + 0x5a4);
}
void* _Script_Landscape::LandscapeComponent::get_BakedTextureMaterialGuid() {
    return (void*)((uintptr_t)this + 0x5b4);
}
_Script_Engine::Texture2D*& _Script_Landscape::LandscapeComponent::get_GIBakedBaseColorTexture() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x5c8);
}
_Script_Engine::MaterialInterface*& _Script_Landscape::LandscapeComponent::get_MobileMaterialInterface() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x5d8);
}
void* _Script_Landscape::LandscapeComponent::get_MobileMaterialInterfaces() {
    return (void*)((uintptr_t)this + 0x5e0);
}
void* _Script_Landscape::LandscapeComponent::get_MobileWeightmapTextures() {
    return (void*)((uintptr_t)this + 0x5f0);
}
_Script_CoreUObject::Class* _Script_Landscape::LandscapeComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Landscape.LandscapeComponent");
    return result;
}
float _Script_Landscape::LandscapeComponent::EditorGetPaintLayerWeightByNameAtLocation(_Script_CoreUObject::Vector& InLocation, void* InPaintLayerName) {
    return;
}
float _Script_Landscape::LandscapeComponent::EditorGetPaintLayerWeightAtLocation(_Script_CoreUObject::Vector& InLocation, _Script_Landscape::LandscapeLayerInfoObject* PaintLayer) {
    return;
}
