#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "NiagaraBaselineController.hpp"
#include "NiagaraEffectType.hpp"
#include "NiagaraSignificanceHandler.hpp"
void* _Script_Niagara::NiagaraEffectType::get_CullReaction() {
    return (void*)((uintptr_t)this + 0x2c);
}
void* _Script_Niagara::NiagaraEffectType::get_UpdateFrequency() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_Niagara::NiagaraSignificanceHandler*& _Script_Niagara::NiagaraEffectType::get_SignificanceHandler() {
    return *(_Script_Niagara::NiagaraSignificanceHandler**)((uintptr_t)this + 0x30);
}
_Script_Niagara::NiagaraBaselineController*& _Script_Niagara::NiagaraEffectType::get_PerformanceBaselineController() {
    return *(_Script_Niagara::NiagaraBaselineController**)((uintptr_t)this + 0x70);
}
void* _Script_Niagara::NiagaraEffectType::get_DetailLevelScalabilitySettings() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Niagara::NiagaraEffectType::get_PerfBaselineStats() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_Niagara::NiagaraEffectType::get_EmitterScalabilitySettings() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_Niagara::NiagaraEffectType::get_SystemScalabilitySettings() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_Niagara::NiagaraEffectType::get_PerfBaselineVersion() {
    return (void*)((uintptr_t)this + 0x88);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraEffectType::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraEffectType");
    return result;
}
