#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraDataInterface.hpp"
#include "NiagaraDataInterfaceDebugDraw.hpp"
_Script_CoreUObject::Class* _Script_Niagara::NiagaraDataInterfaceDebugDraw::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraDataInterfaceDebugDraw");
    return result;
}
