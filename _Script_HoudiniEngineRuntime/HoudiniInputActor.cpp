#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HoudiniInputActor.hpp"
#include "HoudiniInputObject.hpp"
void* _Script_HoudiniEngineRuntime::HoudiniInputActor::get_ActorComponents() {
    return (void*)((uintptr_t)this + 0xa8);
}
int32_t& _Script_HoudiniEngineRuntime::HoudiniInputActor::get_LastUpdateNumComponentsAdded() {
    return *(int32_t*)((uintptr_t)this + 0x108);
}
void* _Script_HoudiniEngineRuntime::HoudiniInputActor::get_ActorSceneComponents() {
    return (void*)((uintptr_t)this + 0xb8);
}
int32_t& _Script_HoudiniEngineRuntime::HoudiniInputActor::get_LastUpdateNumComponentsRemoved() {
    return *(int32_t*)((uintptr_t)this + 0x10c);
}
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniInputActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HoudiniEngineRuntime.HoudiniInputActor");
    return result;
}
