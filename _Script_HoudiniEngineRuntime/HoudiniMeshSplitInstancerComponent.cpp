#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\StaticMesh.hpp"
#include "HoudiniMeshSplitInstancerComponent.hpp"
void* _Script_HoudiniEngineRuntime::HoudiniMeshSplitInstancerComponent::get_Instances() {
    return (void*)((uintptr_t)this + 0x1f8);
}
void* _Script_HoudiniEngineRuntime::HoudiniMeshSplitInstancerComponent::get_OverrideMaterials() {
    return (void*)((uintptr_t)this + 0x208);
}
_Script_Engine::StaticMesh*& _Script_HoudiniEngineRuntime::HoudiniMeshSplitInstancerComponent::get_InstancedMesh() {
    return *(_Script_Engine::StaticMesh**)((uintptr_t)this + 0x218);
}
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniMeshSplitInstancerComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HoudiniEngineRuntime.HoudiniMeshSplitInstancerComponent");
    return result;
}
