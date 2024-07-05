#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\TextRenderComponent.hpp"
#include "NiagaraBaselineController.hpp"
#include "NiagaraPerfBaselineActor.hpp"
_Script_Niagara::NiagaraBaselineController*& _Script_Niagara::NiagaraPerfBaselineActor::get_Controller() {
    return *(_Script_Niagara::NiagaraBaselineController**)((uintptr_t)this + 0x220);
}
_Script_Engine::TextRenderComponent*& _Script_Niagara::NiagaraPerfBaselineActor::get_Label() {
    return *(_Script_Engine::TextRenderComponent**)((uintptr_t)this + 0x228);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraPerfBaselineActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraPerfBaselineActor");
    return result;
}
