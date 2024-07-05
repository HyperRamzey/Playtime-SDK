#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "HoudiniInstancedActorComponent.hpp"
_Script_CoreUObject::Object*& _Script_HoudiniEngineRuntime::HoudiniInstancedActorComponent::get_InstancedObject() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x1f8);
}
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniInstancedActorComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HoudiniEngineRuntime.HoudiniInstancedActorComponent");
    return result;
}
void* _Script_HoudiniEngineRuntime::HoudiniInstancedActorComponent::get_InstancedActors() {
    return (void*)((uintptr_t)this + 0x200);
}
