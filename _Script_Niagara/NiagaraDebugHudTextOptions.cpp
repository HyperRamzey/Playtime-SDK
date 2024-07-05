#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraDebugHudTextOptions.hpp"
_Script_CoreUObject::Class* _Script_Niagara::NiagaraDebugHudTextOptions::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraDebugHudTextOptions");
    return result;
}
void* _Script_Niagara::NiagaraDebugHudTextOptions::get_Font() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Niagara::NiagaraDebugHudTextOptions::get_HorizontalAlignment() {
    return (void*)((uintptr_t)this + 0x4);
}
void* _Script_Niagara::NiagaraDebugHudTextOptions::get_VerticalAlignment() {
    return (void*)((uintptr_t)this + 0x5);
}
void* _Script_Niagara::NiagaraDebugHudTextOptions::get_ScreenOffset() {
    return (void*)((uintptr_t)this + 0x8);
}
