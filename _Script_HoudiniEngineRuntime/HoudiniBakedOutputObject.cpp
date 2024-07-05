#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HoudiniBakedOutputObject.hpp"
void* _Script_HoudiniEngineRuntime::HoudiniBakedOutputObject::get_Actor() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_HoudiniEngineRuntime::HoudiniBakedOutputObject::get_InstancedComponents() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_HoudiniEngineRuntime::HoudiniBakedOutputObject::get_InstancedActors() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_HoudiniEngineRuntime::HoudiniBakedOutputObject::get_BakedComponent() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_HoudiniEngineRuntime::HoudiniBakedOutputObject::get_Blueprint() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_HoudiniEngineRuntime::HoudiniBakedOutputObject::get_ActorBakeName() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_HoudiniEngineRuntime::HoudiniBakedOutputObject::get_BakedObject() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_HoudiniEngineRuntime::HoudiniBakedOutputObject::get_LandscapeLayers() {
    return (void*)((uintptr_t)this + 0x68);
}
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniBakedOutputObject::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/HoudiniEngineRuntime.HoudiniBakedOutputObject");
    return result;
}
