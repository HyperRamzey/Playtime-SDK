#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraNumeric.hpp"
_Script_CoreUObject::Class* _Script_Niagara::NiagaraNumeric::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraNumeric");
    return result;
}