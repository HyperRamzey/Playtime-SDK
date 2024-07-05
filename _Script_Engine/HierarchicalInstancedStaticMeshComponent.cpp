#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HierarchicalInstancedStaticMeshComponent.hpp"
#include "InstancedStaticMeshComponent.hpp"
int32_t& _Script_Engine::HierarchicalInstancedStaticMeshComponent::get_OcclusionLayerNumNodes() {
    return *(int32_t*)((uintptr_t)this + 0x600);
}
void* _Script_Engine::HierarchicalInstancedStaticMeshComponent::get_SortedInstances() {
    return (void*)((uintptr_t)this + 0x598);
}
void* _Script_Engine::HierarchicalInstancedStaticMeshComponent::get_BuiltInstanceBounds() {
    return (void*)((uintptr_t)this + 0x5b0);
}
int32_t& _Script_Engine::HierarchicalInstancedStaticMeshComponent::get_NumBuiltInstances() {
    return *(int32_t*)((uintptr_t)this + 0x5a8);
}
bool _Script_Engine::HierarchicalInstancedStaticMeshComponent::get_bDisableCollision() {
    return (*(uint8_t*)((uintptr_t)this + 0x620 + 0)) & 1 != 0;
}
void _Script_Engine::HierarchicalInstancedStaticMeshComponent::set_bEnableDensityScaling(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5f8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x5f8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::HierarchicalInstancedStaticMeshComponent::get_bEnableDensityScaling() {
    return (*(uint8_t*)((uintptr_t)this + 0x5f8 + 0)) & 1 != 0;
}
void* _Script_Engine::HierarchicalInstancedStaticMeshComponent::get_UnbuiltInstanceBounds() {
    return (void*)((uintptr_t)this + 0x5cc);
}
void* _Script_Engine::HierarchicalInstancedStaticMeshComponent::get_UnbuiltInstanceBoundsList() {
    return (void*)((uintptr_t)this + 0x5e8);
}
void* _Script_Engine::HierarchicalInstancedStaticMeshComponent::get_CacheMeshExtendedBounds() {
    return (void*)((uintptr_t)this + 0x604);
}
void _Script_Engine::HierarchicalInstancedStaticMeshComponent::set_bDisableCollision(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x620 + 0);
    *(uint8_t*)((uintptr_t)this + 0x620 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Engine::HierarchicalInstancedStaticMeshComponent::get_InstanceCountToRender() {
    return *(int32_t*)((uintptr_t)this + 0x624);
}
_Script_CoreUObject::Class* _Script_Engine::HierarchicalInstancedStaticMeshComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.HierarchicalInstancedStaticMeshComponent");
    return result;
}
bool _Script_Engine::HierarchicalInstancedStaticMeshComponent::RemoveInstances(void*& InstancesToRemove) {
    return;
}
