#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraOutlinerWorldData.hpp"
void* _Script_Niagara::NiagaraOutlinerWorldData::get_MaxPerFrameTime() {
    return (void*)((uintptr_t)this + 0x5c);
}
void* _Script_Niagara::NiagaraOutlinerWorldData::get_Systems() {
    return (void*)((uintptr_t)this + 0x0);
}
bool _Script_Niagara::NiagaraOutlinerWorldData::get_bHasBegunPlay() {
    return (*(uint8_t*)((uintptr_t)this + 0x50 + 0)) & 1 != 0;
}
void _Script_Niagara::NiagaraOutlinerWorldData::set_bHasBegunPlay(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x50 + 0);
    *(uint8_t*)((uintptr_t)this + 0x50 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Niagara::NiagaraOutlinerWorldData::get_WorldType() {
    return (void*)((uintptr_t)this + 0x51);
}
void* _Script_Niagara::NiagaraOutlinerWorldData::get_NetMode() {
    return (void*)((uintptr_t)this + 0x52);
}
void* _Script_Niagara::NiagaraOutlinerWorldData::get_AveragePerFrameTime() {
    return (void*)((uintptr_t)this + 0x54);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraOutlinerWorldData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraOutlinerWorldData");
    return result;
}
