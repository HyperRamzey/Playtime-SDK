#include "..\FUObjectArray.hpp"
#include "ARComponent.hpp"
#include "ARTrackedGeometry.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Guid.hpp"
#include "..\_Script_Engine\MaterialInterface.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_MRMesh\MRMeshComponent.hpp"
void* _Script_AugmentedReality::ARComponent::get_NativeID() {
    return (void*)((uintptr_t)this + 0x1f8);
}
bool _Script_AugmentedReality::ARComponent::get_bUseDefaultReplication() {
    return (*(uint8_t*)((uintptr_t)this + 0x238 + 0)) & 1 != 0;
}
void _Script_AugmentedReality::ARComponent::set_bUseDefaultReplication(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x238 + 0);
    *(uint8_t*)((uintptr_t)this + 0x238 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_AugmentedReality::ARTrackedGeometry*& _Script_AugmentedReality::ARComponent::get_MyTrackedGeometry() {
    return *(_Script_AugmentedReality::ARTrackedGeometry**)((uintptr_t)this + 0x258);
}
_Script_Engine::MaterialInterface*& _Script_AugmentedReality::ARComponent::get_DefaultMeshMaterial() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x240);
}
_Script_CoreUObject::Class* _Script_AugmentedReality::ARComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AugmentedReality.ARComponent");
    return result;
}
_Script_Engine::MaterialInterface*& _Script_AugmentedReality::ARComponent::get_DefaultWireframeMeshMaterial() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x248);
}
_Script_MRMesh::MRMeshComponent*& _Script_AugmentedReality::ARComponent::get_MRMeshComponent() {
    return *(_Script_MRMesh::MRMeshComponent**)((uintptr_t)this + 0x250);
}
void _Script_AugmentedReality::ARComponent::UpdateVisualization() {
    return;
}
void _Script_AugmentedReality::ARComponent::SetNativeID(_Script_CoreUObject::Guid NativeID) {
    return;
}
void _Script_AugmentedReality::ARComponent::ReceiveRemove() {
    return;
}
void _Script_AugmentedReality::ARComponent::OnRep_Payload() {
    return;
}
_Script_MRMesh::MRMeshComponent* _Script_AugmentedReality::ARComponent::GetMRMesh() {
    return;
}
