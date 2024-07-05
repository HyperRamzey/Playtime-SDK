#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "VersionedNiagaraScriptData.hpp"
_Script_CoreUObject::Class* _Script_Niagara::VersionedNiagaraScriptData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.VersionedNiagaraScriptData");
    return result;
}
