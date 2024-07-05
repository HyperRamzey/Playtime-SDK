#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraCompileDependency.hpp"
void* _Script_Niagara::NiagaraCompileDependency::get_LinkerErrorMessage() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Niagara::NiagaraCompileDependency::get_NodeGuid() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Niagara::NiagaraCompileDependency::get_StackGuids() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Niagara::NiagaraCompileDependency::get_PinGuid() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_Niagara::NiagaraCompileDependency::get_DependentVariable() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraCompileDependency::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraCompileDependency");
    return result;
}
