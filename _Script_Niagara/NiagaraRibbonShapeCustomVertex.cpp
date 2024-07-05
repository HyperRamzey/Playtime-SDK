#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraRibbonShapeCustomVertex.hpp"
void* _Script_Niagara::NiagaraRibbonShapeCustomVertex::get_Position() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Niagara::NiagaraRibbonShapeCustomVertex::get_Normal() {
    return (void*)((uintptr_t)this + 0x8);
}
float& _Script_Niagara::NiagaraRibbonShapeCustomVertex::get_TextureV() {
    return *(float*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraRibbonShapeCustomVertex::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraRibbonShapeCustomVertex");
    return result;
}
