#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NCPool.hpp"
void* _Script_Niagara::NCPool::get_FreeElements() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Niagara::NCPool::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NCPool");
    return result;
}
