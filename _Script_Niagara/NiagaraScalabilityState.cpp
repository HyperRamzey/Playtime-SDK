#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraScalabilityState.hpp"
bool _Script_Niagara::NiagaraScalabilityState::get_bCulledByDistance() {
    return (*(uint8_t*)((uintptr_t)this + 0x4 + 0)) & 4 != 0;
}
float& _Script_Niagara::NiagaraScalabilityState::get_Significance() {
    return *(float*)((uintptr_t)this + 0x0);
}
void _Script_Niagara::NiagaraScalabilityState::set_bPreviousCulled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Niagara::NiagaraScalabilityState::get_bPreviousCulled() {
    return (*(uint8_t*)((uintptr_t)this + 0x4 + 0)) & 2 != 0;
}
bool _Script_Niagara::NiagaraScalabilityState::get_bCulled() {
    return (*(uint8_t*)((uintptr_t)this + 0x4 + 0)) & 1 != 0;
}
void _Script_Niagara::NiagaraScalabilityState::set_bCulled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Niagara::NiagaraScalabilityState::get_bCulledByInstanceCount() {
    return (*(uint8_t*)((uintptr_t)this + 0x4 + 0)) & 8 != 0;
}
void _Script_Niagara::NiagaraScalabilityState::set_bCulledByDistance(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_Niagara::NiagaraScalabilityState::set_bCulledByInstanceCount(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Niagara::NiagaraScalabilityState::get_bCulledByVisibility() {
    return (*(uint8_t*)((uintptr_t)this + 0x4 + 0)) & 16 != 0;
}
void _Script_Niagara::NiagaraScalabilityState::set_bCulledByVisibility(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Niagara::NiagaraScalabilityState::get_bCulledByGlobalBudget() {
    return (*(uint8_t*)((uintptr_t)this + 0x4 + 0)) & 32 != 0;
}
void _Script_Niagara::NiagaraScalabilityState::set_bCulledByGlobalBudget(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraScalabilityState::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraScalabilityState");
    return result;
}
