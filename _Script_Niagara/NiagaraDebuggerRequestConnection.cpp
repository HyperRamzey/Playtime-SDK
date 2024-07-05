#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraDebuggerRequestConnection.hpp"
void* _Script_Niagara::NiagaraDebuggerRequestConnection::get_SessionID() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Niagara::NiagaraDebuggerRequestConnection::get_InstanceID() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraDebuggerRequestConnection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraDebuggerRequestConnection");
    return result;
}
