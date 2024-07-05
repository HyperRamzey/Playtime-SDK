#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_Engine\BodySetup.hpp"
#include "..\_Script_Engine\MaterialInterface.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "MRMeshComponent.hpp"
_Script_Engine::MaterialInterface*& _Script_MRMesh::MRMeshComponent::get_Material() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x460);
}
bool _Script_MRMesh::MRMeshComponent::IsConnected() {
    return;
}
void _Script_MRMesh::MRMeshComponent::set_bNeverCreateCollisionMesh(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x472 + 0);
    *(uint8_t*)((uintptr_t)this + 0x472 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_MRMesh::MRMeshComponent::get_bNeverCreateCollisionMesh() {
    return (*(uint8_t*)((uintptr_t)this + 0x472 + 0)) & 1 != 0;
}
_Script_Engine::MaterialInterface*& _Script_MRMesh::MRMeshComponent::get_WireframeMaterial() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x468);
}
bool _Script_MRMesh::MRMeshComponent::get_bCreateMeshProxySections() {
    return (*(uint8_t*)((uintptr_t)this + 0x470 + 0)) & 1 != 0;
}
void _Script_MRMesh::MRMeshComponent::set_bCreateMeshProxySections(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x470 + 0);
    *(uint8_t*)((uintptr_t)this + 0x470 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_MRMesh::MRMeshComponent::SetUseWireframe(bool bUseWireframe) {
    return;
}
bool _Script_MRMesh::MRMeshComponent::get_bUpdateNavMeshOnMeshUpdate() {
    return (*(uint8_t*)((uintptr_t)this + 0x471 + 0)) & 1 != 0;
}
void _Script_MRMesh::MRMeshComponent::set_bUpdateNavMeshOnMeshUpdate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x471 + 0);
    *(uint8_t*)((uintptr_t)this + 0x471 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::BodySetup*& _Script_MRMesh::MRMeshComponent::get_CachedBodySetup() {
    return *(_Script_Engine::BodySetup**)((uintptr_t)this + 0x478);
}
void* _Script_MRMesh::MRMeshComponent::get_BodySetups() {
    return (void*)((uintptr_t)this + 0x480);
}
_Script_CoreUObject::Class* _Script_MRMesh::MRMeshComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MRMesh.MRMeshComponent");
    return result;
}
void _Script_MRMesh::MRMeshComponent::SetWireframeMaterial(_Script_Engine::MaterialInterface* InMaterial) {
    return;
}
void _Script_MRMesh::MRMeshComponent::SetWireframeColor(_Script_CoreUObject::LinearColor& InColor) {
    return;
}
void _Script_MRMesh::MRMeshComponent::SetEnableMeshOcclusion(bool bEnable) {
    return;
}
_Script_CoreUObject::LinearColor _Script_MRMesh::MRMeshComponent::GetWireframeColor() {
    return;
}
bool _Script_MRMesh::MRMeshComponent::GetUseWireframe() {
    return;
}
bool _Script_MRMesh::MRMeshComponent::GetEnableMeshOcclusion() {
    return;
}
void _Script_MRMesh::MRMeshComponent::ForceNavMeshUpdate() {
    return;
}
void _Script_MRMesh::MRMeshComponent::Clear() {
    return;
}
