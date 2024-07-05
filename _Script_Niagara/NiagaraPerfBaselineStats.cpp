#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraPerfBaselineStats.hpp"
_Script_CoreUObject::Class* _Script_Niagara::NiagaraPerfBaselineStats::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraPerfBaselineStats");
    return result;
}
float& _Script_Niagara::NiagaraPerfBaselineStats::get_PerInstanceAvg_GT() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_Niagara::NiagaraPerfBaselineStats::get_PerInstanceAvg_RT() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_Niagara::NiagaraPerfBaselineStats::get_PerInstanceMax_GT() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_Niagara::NiagaraPerfBaselineStats::get_PerInstanceMax_RT() {
    return *(float*)((uintptr_t)this + 0xc);
}
