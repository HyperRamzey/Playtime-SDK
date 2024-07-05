#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HoudiniInputObject.hpp"
#include "HoudiniInputSceneComponent.hpp"
void* _Script_HoudiniEngineRuntime::HoudiniInputSceneComponent::get_ActorTransform() {
    return (void*)((uintptr_t)this + 0xb0);
}
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniInputSceneComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HoudiniEngineRuntime.HoudiniInputSceneComponent");
    return result;
}
