#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PooledCameraShakes.hpp"
void* _Script_Engine::PooledCameraShakes::get_PooledShakes() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::PooledCameraShakes::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.PooledCameraShakes");
    return result;
}
