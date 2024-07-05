#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraOutlinerSystemData.hpp"
void* _Script_Niagara::NiagaraOutlinerSystemData::get_AveragePerFrameTime() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Niagara::NiagaraOutlinerSystemData::get_SystemInstances() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraOutlinerSystemData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraOutlinerSystemData");
    return result;
}
void* _Script_Niagara::NiagaraOutlinerSystemData::get_MaxPerFrameTime() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_Niagara::NiagaraOutlinerSystemData::get_MaxPerInstanceTime() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Niagara::NiagaraOutlinerSystemData::get_AveragePerInstanceTime() {
    return (void*)((uintptr_t)this + 0x20);
}
