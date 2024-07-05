#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PSCPool.hpp"
_Script_CoreUObject::Class* _Script_Engine::PSCPool::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.PSCPool");
    return result;
}
void* _Script_Engine::PSCPool::get_FreeElements() {
    return (void*)((uintptr_t)this + 0x0);
}
