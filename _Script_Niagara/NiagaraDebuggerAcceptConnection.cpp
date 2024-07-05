#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraDebuggerAcceptConnection.hpp"
void* _Script_Niagara::NiagaraDebuggerAcceptConnection::get_SessionID() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Niagara::NiagaraDebuggerAcceptConnection::get_InstanceID() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraDebuggerAcceptConnection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraDebuggerAcceptConnection");
    return result;
}
