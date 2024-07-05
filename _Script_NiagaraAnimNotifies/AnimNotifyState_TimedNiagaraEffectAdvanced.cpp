#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\MeshComponent.hpp"
#include "AnimNotifyState_TimedNiagaraEffect.hpp"
#include "AnimNotifyState_TimedNiagaraEffectAdvanced.hpp"
_Script_CoreUObject::Class* _Script_NiagaraAnimNotifies::AnimNotifyState_TimedNiagaraEffectAdvanced::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffectAdvanced");
    return result;
}
float _Script_NiagaraAnimNotifies::AnimNotifyState_TimedNiagaraEffectAdvanced::GetNotifyProgress(_Script_Engine::MeshComponent* MeshComp) {
    return;
}
