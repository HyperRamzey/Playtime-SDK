#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraBaselineController.hpp"
#include "NiagaraBaselineController_Basic.hpp"
int32_t& _Script_Niagara::NiagaraBaselineController_Basic::get_NumInstances() {
    return *(int32_t*)((uintptr_t)this + 0x68);
}
void* _Script_Niagara::NiagaraBaselineController_Basic::get_SpawnedComponents() {
    return (void*)((uintptr_t)this + 0x70);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraBaselineController_Basic::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraBaselineController_Basic");
    return result;
}
