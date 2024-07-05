#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "MRMeshComponent.hpp"
#include "MockDataMeshTrackerComponent.hpp"
void* _Script_MRMesh::MockDataMeshTrackerComponent::get_OnMeshTrackerUpdated() {
    return (void*)((uintptr_t)this + 0x1f8);
}
bool _Script_MRMesh::MockDataMeshTrackerComponent::get_ScanWorld() {
    return (*(uint8_t*)((uintptr_t)this + 0x208 + 0)) & 1 != 0;
}
void _Script_MRMesh::MockDataMeshTrackerComponent::set_ScanWorld(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x208 + 0);
    *(uint8_t*)((uintptr_t)this + 0x208 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_MRMesh::MockDataMeshTrackerComponent::get_RequestNormals() {
    return (*(uint8_t*)((uintptr_t)this + 0x209 + 0)) & 1 != 0;
}
void _Script_MRMesh::MockDataMeshTrackerComponent::set_RequestNormals(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x209 + 0);
    *(uint8_t*)((uintptr_t)this + 0x209 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_MRMesh::MockDataMeshTrackerComponent::get_RequestVertexConfidence() {
    return (*(uint8_t*)((uintptr_t)this + 0x20a + 0)) & 1 != 0;
}
void* _Script_MRMesh::MockDataMeshTrackerComponent::get_BlockVertexColors() {
    return (void*)((uintptr_t)this + 0x210);
}
void* _Script_MRMesh::MockDataMeshTrackerComponent::get_VertexColorMode() {
    return (void*)((uintptr_t)this + 0x20b);
}
void _Script_MRMesh::MockDataMeshTrackerComponent::set_RequestVertexConfidence(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20a + 0);
    *(uint8_t*)((uintptr_t)this + 0x20a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_MRMesh::MockDataMeshTrackerComponent::get_VertexColorFromConfidenceZero() {
    return (void*)((uintptr_t)this + 0x220);
}
void* _Script_MRMesh::MockDataMeshTrackerComponent::get_VertexColorFromConfidenceOne() {
    return (void*)((uintptr_t)this + 0x230);
}
float& _Script_MRMesh::MockDataMeshTrackerComponent::get_UpdateInterval() {
    return *(float*)((uintptr_t)this + 0x240);
}
_Script_MRMesh::MRMeshComponent*& _Script_MRMesh::MockDataMeshTrackerComponent::get_MRMesh() {
    return *(_Script_MRMesh::MRMeshComponent**)((uintptr_t)this + 0x248);
}
_Script_CoreUObject::Class* _Script_MRMesh::MockDataMeshTrackerComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MRMesh.MockDataMeshTrackerComponent");
    return result;
}
void _Script_MRMesh::MockDataMeshTrackerComponent::DisconnectMRMesh(_Script_MRMesh::MRMeshComponent* InMRMeshPtr) {
    return;
}
void _Script_MRMesh::MockDataMeshTrackerComponent::ConnectMRMesh(_Script_MRMesh::MRMeshComponent* InMRMeshPtr) {
    return;
}
