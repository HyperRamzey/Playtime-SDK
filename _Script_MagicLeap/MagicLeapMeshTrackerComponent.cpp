#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_MRMesh\MRMeshComponent.hpp"
#include "MagicLeapMeshTrackerComponent.hpp"
#include "MagicLeapTrackingMeshInfo.hpp"
void* _Script_MagicLeap::MagicLeapMeshTrackerComponent::get_OnMeshTrackerUpdated() {
    return (void*)((uintptr_t)this + 0x200);
}
_Script_MRMesh::MRMeshComponent*& _Script_MagicLeap::MagicLeapMeshTrackerComponent::get_MRMesh() {
    return *(_Script_MRMesh::MRMeshComponent**)((uintptr_t)this + 0x270);
}
bool _Script_MagicLeap::MagicLeapMeshTrackerComponent::get_ScanWorld() {
    return (*(uint8_t*)((uintptr_t)this + 0x210 + 0)) & 1 != 0;
}
float& _Script_MagicLeap::MagicLeapMeshTrackerComponent::get_PerimeterOfGapsToFill() {
    return *(float*)((uintptr_t)this + 0x224);
}
void* _Script_MagicLeap::MagicLeapMeshTrackerComponent::get_LevelOfDetail() {
    return (void*)((uintptr_t)this + 0x220);
}
int32_t& _Script_MagicLeap::MagicLeapMeshTrackerComponent::get_BricksPerFrame() {
    return *(int32_t*)((uintptr_t)this + 0x278);
}
void _Script_MagicLeap::MagicLeapMeshTrackerComponent::set_ScanWorld(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x210 + 0);
    *(uint8_t*)((uintptr_t)this + 0x210 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_MagicLeap::MagicLeapMeshTrackerComponent::get_MeshType() {
    return (void*)((uintptr_t)this + 0x211);
}
_Script_Engine::BoxComponent*& _Script_MagicLeap::MagicLeapMeshTrackerComponent::get_BoundingVolume() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x218);
}
bool _Script_MagicLeap::MagicLeapMeshTrackerComponent::get_Planarize() {
    return (*(uint8_t*)((uintptr_t)this + 0x228 + 0)) & 1 != 0;
}
void _Script_MagicLeap::MagicLeapMeshTrackerComponent::set_Planarize(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x228 + 0);
    *(uint8_t*)((uintptr_t)this + 0x228 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_MagicLeap::MagicLeapMeshTrackerComponent::get_DisconnectedSectionArea() {
    return *(float*)((uintptr_t)this + 0x22c);
}
bool _Script_MagicLeap::MagicLeapMeshTrackerComponent::get_RequestNormals() {
    return (*(uint8_t*)((uintptr_t)this + 0x230 + 0)) & 1 != 0;
}
void _Script_MagicLeap::MagicLeapMeshTrackerComponent::set_RequestNormals(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x230 + 0);
    *(uint8_t*)((uintptr_t)this + 0x230 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_MagicLeap::MagicLeapMeshTrackerComponent::get_RequestVertexConfidence() {
    return (*(uint8_t*)((uintptr_t)this + 0x231 + 0)) & 1 != 0;
}
void _Script_MagicLeap::MagicLeapMeshTrackerComponent::set_RequestVertexConfidence(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x231 + 0);
    *(uint8_t*)((uintptr_t)this + 0x231 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_MagicLeap::MagicLeapMeshTrackerComponent::get_VertexColorMode() {
    return (void*)((uintptr_t)this + 0x232);
}
void* _Script_MagicLeap::MagicLeapMeshTrackerComponent::get_BlockVertexColors() {
    return (void*)((uintptr_t)this + 0x238);
}
void* _Script_MagicLeap::MagicLeapMeshTrackerComponent::get_VertexColorFromConfidenceZero() {
    return (void*)((uintptr_t)this + 0x248);
}
void* _Script_MagicLeap::MagicLeapMeshTrackerComponent::get_VertexColorFromConfidenceOne() {
    return (void*)((uintptr_t)this + 0x258);
}
bool _Script_MagicLeap::MagicLeapMeshTrackerComponent::get_RemoveOverlappingTriangles() {
    return (*(uint8_t*)((uintptr_t)this + 0x268 + 0)) & 1 != 0;
}
void _Script_MagicLeap::MagicLeapMeshTrackerComponent::set_RemoveOverlappingTriangles(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x268 + 0);
    *(uint8_t*)((uintptr_t)this + 0x268 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_MagicLeap::MagicLeapMeshTrackerComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MagicLeap.MagicLeapMeshTrackerComponent");
    return result;
}
void _Script_MagicLeap::MagicLeapMeshTrackerComponent::SelectMeshBlocks(_Script_MagicLeap::MagicLeapTrackingMeshInfo& NewMeshInfo, void*& RequestedMesh) {
    return;
}
int32_t _Script_MagicLeap::MagicLeapMeshTrackerComponent::GetNumQueuedBlockUpdates() {
    return;
}
void _Script_MagicLeap::MagicLeapMeshTrackerComponent::DisconnectMRMesh(_Script_MRMesh::MRMeshComponent* InMRMeshPtr) {
    return;
}
void _Script_MagicLeap::MagicLeapMeshTrackerComponent::DisconnectBlockSelector() {
    return;
}
void _Script_MagicLeap::MagicLeapMeshTrackerComponent::ConnectMRMesh(_Script_MRMesh::MRMeshComponent* InMRMeshPtr) {
    return;
}
void _Script_MagicLeap::MagicLeapMeshTrackerComponent::ConnectBlockSelector(void* Selector) {
    return;
}
