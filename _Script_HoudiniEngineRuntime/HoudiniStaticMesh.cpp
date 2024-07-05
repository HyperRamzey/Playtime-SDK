#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Box.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Color.hpp"
#include "..\_Script_CoreUObject\IntVector.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_Engine\MaterialInterface.hpp"
#include "..\_Script_Engine\StaticMaterial.hpp"
#include "HoudiniStaticMesh.hpp"
void* _Script_HoudiniEngineRuntime::HoudiniStaticMesh::GetVertexInstanceVTangents() {
    return;
}
bool _Script_HoudiniEngineRuntime::HoudiniStaticMesh::get_bHasNormals() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
void* _Script_HoudiniEngineRuntime::HoudiniStaticMesh::GetStaticMaterials() {
    return;
}
void _Script_HoudiniEngineRuntime::HoudiniStaticMesh::set_bHasNormals(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_HoudiniEngineRuntime::HoudiniStaticMesh::get_NumUVLayers() {
    return (void*)((uintptr_t)this + 0x2c);
}
void _Script_HoudiniEngineRuntime::HoudiniStaticMesh::set_bHasColors(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2a + 0);
    *(uint8_t*)((uintptr_t)this + 0x2a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_HoudiniEngineRuntime::HoudiniStaticMesh::CalculateTangents(bool bInComputeWeightedNormals) {
    return;
}
bool _Script_HoudiniEngineRuntime::HoudiniStaticMesh::get_bHasTangents() {
    return (*(uint8_t*)((uintptr_t)this + 0x29 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniStaticMesh::SetHasPerFaceMaterials(bool bInHasPerFaceMaterials) {
    return;
}
void _Script_HoudiniEngineRuntime::HoudiniStaticMesh::set_bHasTangents(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x29 + 0);
    *(uint8_t*)((uintptr_t)this + 0x29 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_HoudiniEngineRuntime::HoudiniStaticMesh::get_TriangleIndices() {
    return (void*)((uintptr_t)this + 0x48);
}
bool _Script_HoudiniEngineRuntime::HoudiniStaticMesh::get_bHasColors() {
    return (*(uint8_t*)((uintptr_t)this + 0x2a + 0)) & 1 != 0;
}
bool _Script_HoudiniEngineRuntime::HoudiniStaticMesh::get_bHasPerFaceMaterials() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniStaticMesh::set_bHasPerFaceMaterials(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_HoudiniEngineRuntime::HoudiniStaticMesh::get_VertexPositions() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_HoudiniEngineRuntime::HoudiniStaticMesh::GetNumTriangles() {
    return;
}
void* _Script_HoudiniEngineRuntime::HoudiniStaticMesh::get_VertexInstanceColors() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_HoudiniEngineRuntime::HoudiniStaticMesh::get_VertexInstanceNormals() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_HoudiniEngineRuntime::HoudiniStaticMesh::GetNumStaticMaterials() {
    return;
}
void* _Script_HoudiniEngineRuntime::HoudiniStaticMesh::get_VertexInstanceUTangents() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_HoudiniEngineRuntime::HoudiniStaticMesh::get_VertexInstanceVTangents() {
    return (void*)((uintptr_t)this + 0x88);
}
void* _Script_HoudiniEngineRuntime::HoudiniStaticMesh::get_VertexInstanceUVs() {
    return (void*)((uintptr_t)this + 0x98);
}
void* _Script_HoudiniEngineRuntime::HoudiniStaticMesh::get_MaterialIDsPerTriangle() {
    return (void*)((uintptr_t)this + 0xa8);
}
void* _Script_HoudiniEngineRuntime::HoudiniStaticMesh::get_StaticMaterials() {
    return (void*)((uintptr_t)this + 0xb8);
}
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniStaticMesh::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HoudiniEngineRuntime.HoudiniStaticMesh");
    return result;
}
void _Script_HoudiniEngineRuntime::HoudiniStaticMesh::SetVertexPosition(void* InVertexIndex, _Script_CoreUObject::Vector& InPosition) {
    return;
}
void _Script_HoudiniEngineRuntime::HoudiniStaticMesh::SetTriangleVertexVTangent(void* InTriangleIndex, void* InTriangleVertexIndex, _Script_CoreUObject::Vector& InVTangent) {
    return;
}
void _Script_HoudiniEngineRuntime::HoudiniStaticMesh::SetTriangleVertexUV(void* InTriangleIndex, void* InTriangleVertexIndex, void* InUVLayer, _Script_CoreUObject::Vector2D& InUV) {
    return;
}
void _Script_HoudiniEngineRuntime::HoudiniStaticMesh::SetTriangleVertexUTangent(void* InTriangleIndex, void* InTriangleVertexIndex, _Script_CoreUObject::Vector& InUTangent) {
    return;
}
void _Script_HoudiniEngineRuntime::HoudiniStaticMesh::SetTriangleVertexNormal(void* InTriangleIndex, void* InTriangleVertexIndex, _Script_CoreUObject::Vector& InNormal) {
    return;
}
void _Script_HoudiniEngineRuntime::HoudiniStaticMesh::SetTriangleVertexIndices(void* InTriangleIndex, _Script_CoreUObject::IntVector& InTriangleVertexIndices) {
    return;
}
void _Script_HoudiniEngineRuntime::HoudiniStaticMesh::SetTriangleVertexColor(void* InTriangleIndex, void* InTriangleVertexIndex, _Script_CoreUObject::Color& InColor) {
    return;
}
void _Script_HoudiniEngineRuntime::HoudiniStaticMesh::SetTriangleMaterialID(void* InTriangleIndex, int32_t InMaterialID) {
    return;
}
void* _Script_HoudiniEngineRuntime::HoudiniStaticMesh::GetTriangleIndices() {
    return;
}
void _Script_HoudiniEngineRuntime::HoudiniStaticMesh::SetStaticMaterial(void* InMaterialIndex, _Script_Engine::StaticMaterial& InStaticMaterial) {
    return;
}
void _Script_HoudiniEngineRuntime::HoudiniStaticMesh::SetNumUVLayers(void* InNumUVLayers) {
    return;
}
void _Script_HoudiniEngineRuntime::HoudiniStaticMesh::SetNumStaticMaterials(void* InNumStaticMaterials) {
    return;
}
_Script_CoreUObject::Box _Script_HoudiniEngineRuntime::HoudiniStaticMesh::CalcBounds() {
    return;
}
void _Script_HoudiniEngineRuntime::HoudiniStaticMesh::SetHasTangents(bool bInHasTangents) {
    return;
}
void* _Script_HoudiniEngineRuntime::HoudiniStaticMesh::GetVertexInstanceColors() {
    return;
}
void _Script_HoudiniEngineRuntime::HoudiniStaticMesh::SetHasNormals(bool bInHasNormals) {
    return;
}
void* _Script_HoudiniEngineRuntime::HoudiniStaticMesh::AddStaticMaterial(_Script_Engine::StaticMaterial& InStaticMaterial) {
    return;
}
void _Script_HoudiniEngineRuntime::HoudiniStaticMesh::SetHasColors(bool bInHasColors) {
    return;
}
void _Script_HoudiniEngineRuntime::HoudiniStaticMesh::Optimize() {
    return;
}
bool _Script_HoudiniEngineRuntime::HoudiniStaticMesh::IsValid(bool bInSkipVertexIndicesCheck) {
    return;
}
void _Script_HoudiniEngineRuntime::HoudiniStaticMesh::Initialize(void* InNumVertices, void* InNumTriangles, void* InNumUVLayers, void* InInitialNumStaticMaterials, bool bInHasNormals, bool bInHasTangents, bool bInHasColors, bool bInHasPerFaceMaterials) {
    return;
}
bool _Script_HoudiniEngineRuntime::HoudiniStaticMesh::HasTangents() {
    return;
}
bool _Script_HoudiniEngineRuntime::HoudiniStaticMesh::HasPerFaceMaterials() {
    return;
}
bool _Script_HoudiniEngineRuntime::HoudiniStaticMesh::HasNormals() {
    return;
}
bool _Script_HoudiniEngineRuntime::HoudiniStaticMesh::HasColors() {
    return;
}
void* _Script_HoudiniEngineRuntime::HoudiniStaticMesh::GetVertexPositions() {
    return;
}
void* _Script_HoudiniEngineRuntime::HoudiniStaticMesh::GetVertexInstanceUVs() {
    return;
}
void* _Script_HoudiniEngineRuntime::HoudiniStaticMesh::GetVertexInstanceUTangents() {
    return;
}
void* _Script_HoudiniEngineRuntime::HoudiniStaticMesh::GetVertexInstanceNormals() {
    return;
}
void* _Script_HoudiniEngineRuntime::HoudiniStaticMesh::GetNumVertices() {
    return;
}
void* _Script_HoudiniEngineRuntime::HoudiniStaticMesh::GetNumVertexInstances() {
    return;
}
void* _Script_HoudiniEngineRuntime::HoudiniStaticMesh::GetNumUVLayers() {
    return;
}
int32_t _Script_HoudiniEngineRuntime::HoudiniStaticMesh::GetMaterialIndex(void* InMaterialSlotName) {
    return;
}
void* _Script_HoudiniEngineRuntime::HoudiniStaticMesh::GetMaterialIDsPerTriangle() {
    return;
}
_Script_Engine::MaterialInterface* _Script_HoudiniEngineRuntime::HoudiniStaticMesh::GetMaterial(int32_t InMaterialIndex) {
    return;
}
void _Script_HoudiniEngineRuntime::HoudiniStaticMesh::CalculateNormals(bool bInComputeWeightedNormals) {
    return;
}
