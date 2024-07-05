#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraDebuggerOutlinerUpdate.hpp"
void* _Script_Niagara::NiagaraDebuggerOutlinerUpdate::get_OutlinerData() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraDebuggerOutlinerUpdate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraDebuggerOutlinerUpdate");
    return result;
}
