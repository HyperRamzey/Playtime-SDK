#include "..\FUObjectArray.hpp"
#include "NiagaraDataInterfacePhysicsField.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Niagara\NiagaraDataInterface.hpp"
_Script_CoreUObject::Class* _Script_ChaosNiagara::NiagaraDataInterfacePhysicsField::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ChaosNiagara.NiagaraDataInterfacePhysicsField");
    return result;
}
