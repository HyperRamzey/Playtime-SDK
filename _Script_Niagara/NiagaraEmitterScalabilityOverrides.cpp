#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraEmitterScalabilityOverrides.hpp"
void* _Script_Niagara::NiagaraEmitterScalabilityOverrides::get_Overrides() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraEmitterScalabilityOverrides::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraEmitterScalabilityOverrides");
    return result;
}
