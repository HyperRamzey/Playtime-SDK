#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraVariableBase.hpp"
void* _Script_Niagara::NiagaraVariableBase::get_Name() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Niagara::NiagaraVariableBase::get_TypeDefHandle() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraVariableBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraVariableBase");
    return result;
}
