#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraScriptHighlight.hpp"
void* _Script_Niagara::NiagaraScriptHighlight::get_Color() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Niagara::NiagaraScriptHighlight::get_DisplayName() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraScriptHighlight::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraScriptHighlight");
    return result;
}