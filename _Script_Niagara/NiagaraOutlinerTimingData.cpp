#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraOutlinerTimingData.hpp"
float& _Script_Niagara::NiagaraOutlinerTimingData::get_GameThread() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_Niagara::NiagaraOutlinerTimingData::get_RenderThread() {
    return *(float*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraOutlinerTimingData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraOutlinerTimingData");
    return result;
}
