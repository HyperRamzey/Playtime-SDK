#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HoudiniInputMeshComponent.hpp"
#include "HoudiniInputSceneComponent.hpp"
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniInputMeshComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HoudiniEngineRuntime.HoudiniInputMeshComponent");
    return result;
}
void* _Script_HoudiniEngineRuntime::HoudiniInputMeshComponent::get_StaticMesh() {
    return (void*)((uintptr_t)this + 0xe0);
}
void* _Script_HoudiniEngineRuntime::HoudiniInputMeshComponent::get_MeshComponentsMaterials() {
    return (void*)((uintptr_t)this + 0x108);
}
