#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraOutlinerSystemInstanceData.hpp"
bool _Script_Niagara::NiagaraOutlinerSystemInstanceData::get_bPendingKill() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
void _Script_Niagara::NiagaraOutlinerSystemInstanceData::set_bPendingKill(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Niagara::NiagaraOutlinerSystemInstanceData::get_ActualExecutionState() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_Niagara::NiagaraOutlinerSystemInstanceData::get_ComponentName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Niagara::NiagaraOutlinerSystemInstanceData::get_Emitters() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Niagara::NiagaraOutlinerSystemInstanceData::get_MaxTime() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Niagara::NiagaraOutlinerSystemInstanceData::get_RequestedExecutionState() {
    return (void*)((uintptr_t)this + 0x24);
}
void* _Script_Niagara::NiagaraOutlinerSystemInstanceData::get_PoolMethod() {
    return (void*)((uintptr_t)this + 0x34);
}
void* _Script_Niagara::NiagaraOutlinerSystemInstanceData::get_ScalabilityState() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Niagara::NiagaraOutlinerSystemInstanceData::get_AverageTime() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraOutlinerSystemInstanceData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraOutlinerSystemInstanceData");
    return result;
}
