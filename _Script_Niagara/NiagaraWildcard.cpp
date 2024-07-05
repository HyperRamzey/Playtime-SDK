#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraWildcard.hpp"
_Script_CoreUObject::Class* _Script_Niagara::NiagaraWildcard::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraWildcard");
    return result;
}
