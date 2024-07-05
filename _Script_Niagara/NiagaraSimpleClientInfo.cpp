#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraSimpleClientInfo.hpp"
void* _Script_Niagara::NiagaraSimpleClientInfo::get_Systems() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Niagara::NiagaraSimpleClientInfo::get_Actors() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Niagara::NiagaraSimpleClientInfo::get_Components() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_Niagara::NiagaraSimpleClientInfo::get_Emitters() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraSimpleClientInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraSimpleClientInfo");
    return result;
}
