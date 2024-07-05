#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraDebuggerConnectionClosed.hpp"
void* _Script_Niagara::NiagaraDebuggerConnectionClosed::get_SessionID() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Niagara::NiagaraDebuggerConnectionClosed::get_InstanceID() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraDebuggerConnectionClosed::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraDebuggerConnectionClosed");
    return result;
}
