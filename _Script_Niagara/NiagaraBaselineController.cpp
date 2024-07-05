#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "NiagaraBaselineController.hpp"
#include "NiagaraEffectType.hpp"
#include "NiagaraPerfBaselineActor.hpp"
#include "NiagaraPerfBaselineStats.hpp"
#include "NiagaraSystem.hpp"
float& _Script_Niagara::NiagaraBaselineController::get_TestDuration() {
    return *(float*)((uintptr_t)this + 0x28);
}
void _Script_Niagara::NiagaraBaselineController::OnOwnerTick(float DeltaTime) {
    return;
}
_Script_Niagara::NiagaraEffectType*& _Script_Niagara::NiagaraBaselineController::get_EffectType() {
    return *(_Script_Niagara::NiagaraEffectType**)((uintptr_t)this + 0x30);
}
_Script_Niagara::NiagaraPerfBaselineActor*& _Script_Niagara::NiagaraBaselineController::get_Owner() {
    return *(_Script_Niagara::NiagaraPerfBaselineActor**)((uintptr_t)this + 0x38);
}
bool _Script_Niagara::NiagaraBaselineController::OnTickTest() {
    return;
}
void* _Script_Niagara::NiagaraBaselineController::get_System() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraBaselineController::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraBaselineController");
    return result;
}
void _Script_Niagara::NiagaraBaselineController::OnEndTest(_Script_Niagara::NiagaraPerfBaselineStats Stats) {
    return;
}
void _Script_Niagara::NiagaraBaselineController::OnBeginTest() {
    return;
}
_Script_Niagara::NiagaraSystem* _Script_Niagara::NiagaraBaselineController::GetSystem() {
    return;
}
