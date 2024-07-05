#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\MeshComponent.hpp"
#include "HoudiniStaticMesh.hpp"
#include "HoudiniStaticMeshComponent.hpp"
void _Script_HoudiniEngineRuntime::HoudiniStaticMeshComponent::set_bHoudiniIconVisible(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x49c + 0);
    *(uint8_t*)((uintptr_t)this + 0x49c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_HoudiniEngineRuntime::HoudiniStaticMesh*& _Script_HoudiniEngineRuntime::HoudiniStaticMeshComponent::get_Mesh() {
    return *(_Script_HoudiniEngineRuntime::HoudiniStaticMesh**)((uintptr_t)this + 0x478);
}
void _Script_HoudiniEngineRuntime::HoudiniStaticMeshComponent::NotifyMeshUpdated() {
    return;
}
void* _Script_HoudiniEngineRuntime::HoudiniStaticMeshComponent::get_LocalBounds() {
    return (void*)((uintptr_t)this + 0x480);
}
bool _Script_HoudiniEngineRuntime::HoudiniStaticMeshComponent::get_bHoudiniIconVisible() {
    return (*(uint8_t*)((uintptr_t)this + 0x49c + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniStaticMeshComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HoudiniEngineRuntime.HoudiniStaticMeshComponent");
    return result;
}
void _Script_HoudiniEngineRuntime::HoudiniStaticMeshComponent::SetHoudiniIconVisible(bool bInHoudiniIconVisible) {
    return;
}
void _Script_HoudiniEngineRuntime::HoudiniStaticMeshComponent::SetMesh(_Script_HoudiniEngineRuntime::HoudiniStaticMesh* InMesh) {
    return;
}
bool _Script_HoudiniEngineRuntime::HoudiniStaticMeshComponent::IsHoudiniIconVisible() {
    return;
}
_Script_HoudiniEngineRuntime::HoudiniStaticMesh* _Script_HoudiniEngineRuntime::HoudiniStaticMeshComponent::GetMesh() {
    return;
}
