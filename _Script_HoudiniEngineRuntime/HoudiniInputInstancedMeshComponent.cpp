#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HoudiniInputInstancedMeshComponent.hpp"
#include "HoudiniInputMeshComponent.hpp"
void* _Script_HoudiniEngineRuntime::HoudiniInputInstancedMeshComponent::get_InstanceTransforms() {
    return (void*)((uintptr_t)this + 0x118);
}
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniInputInstancedMeshComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HoudiniEngineRuntime.HoudiniInputInstancedMeshComponent");
    return result;
}
