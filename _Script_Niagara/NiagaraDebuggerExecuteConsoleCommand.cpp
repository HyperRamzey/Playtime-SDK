#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraDebuggerExecuteConsoleCommand.hpp"
void* _Script_Niagara::NiagaraDebuggerExecuteConsoleCommand::get_Command() {
    return (void*)((uintptr_t)this + 0x0);
}
bool _Script_Niagara::NiagaraDebuggerExecuteConsoleCommand::get_bRequiresWorld() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 1 != 0;
}
void _Script_Niagara::NiagaraDebuggerExecuteConsoleCommand::set_bRequiresWorld(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraDebuggerExecuteConsoleCommand::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraDebuggerExecuteConsoleCommand");
    return result;
}
