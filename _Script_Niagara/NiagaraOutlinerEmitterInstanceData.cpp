#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraOutlinerEmitterInstanceData.hpp"
_Script_CoreUObject::Class* _Script_Niagara::NiagaraOutlinerEmitterInstanceData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraOutlinerEmitterInstanceData");
    return result;
}
void* _Script_Niagara::NiagaraOutlinerEmitterInstanceData::get_EmitterName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Niagara::NiagaraOutlinerEmitterInstanceData::get_SimTarget() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Niagara::NiagaraOutlinerEmitterInstanceData::get_ExecState() {
    return (void*)((uintptr_t)this + 0x14);
}
int32_t& _Script_Niagara::NiagaraOutlinerEmitterInstanceData::get_NumParticles() {
    return *(int32_t*)((uintptr_t)this + 0x18);
}
