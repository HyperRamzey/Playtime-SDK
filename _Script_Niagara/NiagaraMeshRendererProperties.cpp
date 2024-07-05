#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\StaticMesh.hpp"
#include "NiagaraMeshRendererProperties.hpp"
#include "NiagaraRendererProperties.hpp"
void* _Script_Niagara::NiagaraMeshRendererProperties::get_PositionBinding() {
    return (void*)((uintptr_t)this + 0xd0);
}
bool _Script_Niagara::NiagaraMeshRendererProperties::get_bGpuLowLatencyTranslucency() {
    return (*(uint8_t*)((uintptr_t)this + 0x8c + 0)) & 4 != 0;
}
bool _Script_Niagara::NiagaraMeshRendererProperties::get_bLockedAxisEnable() {
    return (*(uint8_t*)((uintptr_t)this + 0xac + 0)) & 1 != 0;
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_Meshes() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_SourceMode() {
    return (void*)((uintptr_t)this + 0x88);
}
void _Script_Niagara::NiagaraMeshRendererProperties::set_bOverrideMaterials(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8c + 0);
    *(uint8_t*)((uintptr_t)this + 0x8c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_PrevScaleBinding() {
    return (void*)((uintptr_t)this + 0x6b8);
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_SortMode() {
    return (void*)((uintptr_t)this + 0x89);
}
bool _Script_Niagara::NiagaraMeshRendererProperties::get_bOverrideMaterials() {
    return (*(uint8_t*)((uintptr_t)this + 0x8c + 0)) & 1 != 0;
}
bool _Script_Niagara::NiagaraMeshRendererProperties::get_bSortOnlyWhenTranslucent() {
    return (*(uint8_t*)((uintptr_t)this + 0x8c + 0)) & 2 != 0;
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_MeshOrientationBinding() {
    return (void*)((uintptr_t)this + 0x1d8);
}
void _Script_Niagara::NiagaraMeshRendererProperties::set_bEnableFrustumCulling(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8c + 0);
    *(uint8_t*)((uintptr_t)this + 0x8c + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
void _Script_Niagara::NiagaraMeshRendererProperties::set_bSortOnlyWhenTranslucent(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8c + 0);
    *(uint8_t*)((uintptr_t)this + 0x8c + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_PrevCameraOffsetBinding() {
    return (void*)((uintptr_t)this + 0x768);
}
void _Script_Niagara::NiagaraMeshRendererProperties::set_bGpuLowLatencyTranslucency(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8c + 0);
    *(uint8_t*)((uintptr_t)this + 0x8c + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Niagara::NiagaraMeshRendererProperties::get_bSubImageBlend() {
    return (*(uint8_t*)((uintptr_t)this + 0x8c + 0)) & 8 != 0;
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_ScaleBinding() {
    return (void*)((uintptr_t)this + 0x230);
}
void _Script_Niagara::NiagaraMeshRendererProperties::set_bSubImageBlend(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8c + 0);
    *(uint8_t*)((uintptr_t)this + 0x8c + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Niagara::NiagaraMeshRendererProperties::get_bEnableFrustumCulling() {
    return (*(uint8_t*)((uintptr_t)this + 0x8c + 0)) & 16 != 0;
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_DynamicMaterialBinding() {
    return (void*)((uintptr_t)this + 0x2e0);
}
bool _Script_Niagara::NiagaraMeshRendererProperties::get_bEnableCameraDistanceCulling() {
    return (*(uint8_t*)((uintptr_t)this + 0x8c + 0)) & 32 != 0;
}
void _Script_Niagara::NiagaraMeshRendererProperties::set_bEnableCameraDistanceCulling(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8c + 0);
    *(uint8_t*)((uintptr_t)this + 0x8c + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_RendererVisibilityTagBinding() {
    return (void*)((uintptr_t)this + 0x5a0);
}
bool _Script_Niagara::NiagaraMeshRendererProperties::get_bEnableMeshFlipbook() {
    return (*(uint8_t*)((uintptr_t)this + 0x8c + 0)) & 64 != 0;
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_MaterialRandomBinding() {
    return (void*)((uintptr_t)this + 0x440);
}
void _Script_Niagara::NiagaraMeshRendererProperties::set_bEnableMeshFlipbook(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8c + 0);
    *(uint8_t*)((uintptr_t)this + 0x8c + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_OverrideMaterials() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_SubImageSize() {
    return (void*)((uintptr_t)this + 0xa0);
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_FacingMode() {
    return (void*)((uintptr_t)this + 0xa8);
}
void _Script_Niagara::NiagaraMeshRendererProperties::set_bLockedAxisEnable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xac + 0);
    *(uint8_t*)((uintptr_t)this + 0xac + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_LockedAxis() {
    return (void*)((uintptr_t)this + 0xb0);
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_LockedAxisSpace() {
    return (void*)((uintptr_t)this + 0xbc);
}
float& _Script_Niagara::NiagaraMeshRendererProperties::get_MinCameraDistance() {
    return *(float*)((uintptr_t)this + 0xc0);
}
float& _Script_Niagara::NiagaraMeshRendererProperties::get_MaxCameraDistance() {
    return *(float*)((uintptr_t)this + 0xc4);
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_RendererVisibility() {
    return (void*)((uintptr_t)this + 0xc8);
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_PivotOffset() {
    return (void*)((uintptr_t)this + 0x888);
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_ColorBinding() {
    return (void*)((uintptr_t)this + 0x128);
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_PrevVelocityBinding() {
    return (void*)((uintptr_t)this + 0x7c0);
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_VelocityBinding() {
    return (void*)((uintptr_t)this + 0x180);
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_SubImageIndexBinding() {
    return (void*)((uintptr_t)this + 0x288);
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_DynamicMaterial1Binding() {
    return (void*)((uintptr_t)this + 0x338);
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_MeshIndexBinding() {
    return (void*)((uintptr_t)this + 0x5f8);
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_DynamicMaterial2Binding() {
    return (void*)((uintptr_t)this + 0x390);
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_DynamicMaterial3Binding() {
    return (void*)((uintptr_t)this + 0x3e8);
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_CustomSortingBinding() {
    return (void*)((uintptr_t)this + 0x498);
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_NormalizedAgeBinding() {
    return (void*)((uintptr_t)this + 0x4f0);
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_CameraOffsetBinding() {
    return (void*)((uintptr_t)this + 0x548);
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_MaterialParameterBindings() {
    return (void*)((uintptr_t)this + 0x650);
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_PrevPositionBinding() {
    return (void*)((uintptr_t)this + 0x660);
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_PrevMeshOrientationBinding() {
    return (void*)((uintptr_t)this + 0x710);
}
_Script_Engine::StaticMesh*& _Script_Niagara::NiagaraMeshRendererProperties::get_ParticleMesh() {
    return *(_Script_Engine::StaticMesh**)((uintptr_t)this + 0x880);
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_PivotOffsetSpace() {
    return (void*)((uintptr_t)this + 0x894);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraMeshRendererProperties::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraMeshRendererProperties");
    return result;
}
