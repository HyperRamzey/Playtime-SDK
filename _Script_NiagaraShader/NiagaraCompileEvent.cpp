#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraCompileEvent.hpp"
void* _Script_NiagaraShader::NiagaraCompileEvent::get_StackGuids() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_NiagaraShader::NiagaraCompileEvent::get_Severity() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_NiagaraShader::NiagaraCompileEvent::get_NodeGuid() {
    return (void*)((uintptr_t)this + 0x2c);
}
void* _Script_NiagaraShader::NiagaraCompileEvent::get_ShortDescription() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_NiagaraShader::NiagaraCompileEvent::get_Message() {
    return (void*)((uintptr_t)this + 0x8);
}
bool _Script_NiagaraShader::NiagaraCompileEvent::get_bDismissable() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
void* _Script_NiagaraShader::NiagaraCompileEvent::get_PinGuid() {
    return (void*)((uintptr_t)this + 0x3c);
}
void _Script_NiagaraShader::NiagaraCompileEvent::set_bDismissable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_NiagaraShader::NiagaraCompileEvent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/NiagaraShader.NiagaraCompileEvent");
    return result;
}
