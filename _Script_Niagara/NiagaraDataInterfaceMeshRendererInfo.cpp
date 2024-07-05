#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraDataInterface.hpp"
#include "NiagaraDataInterfaceMeshRendererInfo.hpp"
#include "NiagaraMeshRendererProperties.hpp"
_Script_Niagara::NiagaraMeshRendererProperties*& _Script_Niagara::NiagaraDataInterfaceMeshRendererInfo::get_MeshRenderer() {
    return *(_Script_Niagara::NiagaraMeshRendererProperties**)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraDataInterfaceMeshRendererInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraDataInterfaceMeshRendererInfo");
    return result;
}
