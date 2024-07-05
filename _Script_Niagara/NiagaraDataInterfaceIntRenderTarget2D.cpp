#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraDataInterfaceIntRenderTarget2D.hpp"
#include "NiagaraDataInterfaceRWBase.hpp"
void* _Script_Niagara::NiagaraDataInterfaceIntRenderTarget2D::get_Size() {
    return (void*)((uintptr_t)this + 0xd8);
}
void* _Script_Niagara::NiagaraDataInterfaceIntRenderTarget2D::get_RenderTargetUserParameter() {
    return (void*)((uintptr_t)this + 0xe0);
}
void* _Script_Niagara::NiagaraDataInterfaceIntRenderTarget2D::get_ManagedRenderTargets() {
    return (void*)((uintptr_t)this + 0x100);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraDataInterfaceIntRenderTarget2D::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraDataInterfaceIntRenderTarget2D");
    return result;
}
