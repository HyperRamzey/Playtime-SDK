#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraCompilerTag.hpp"
void* _Script_Niagara::NiagaraCompilerTag::get_Variable() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Niagara::NiagaraCompilerTag::get_StringValue() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraCompilerTag::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraCompilerTag");
    return result;
}
