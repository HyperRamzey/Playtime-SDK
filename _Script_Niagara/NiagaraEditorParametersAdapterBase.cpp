#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "NiagaraEditorParametersAdapterBase.hpp"
_Script_CoreUObject::Class* _Script_Niagara::NiagaraEditorParametersAdapterBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraEditorParametersAdapterBase");
    return result;
}
