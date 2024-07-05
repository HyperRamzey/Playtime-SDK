#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraDataInterfaceRWBase.hpp"
#include "NiagaraDataInterfaceRenderTarget2D.hpp"
void* _Script_Niagara::NiagaraDataInterfaceRenderTarget2D::get_Size() {
    return (void*)((uintptr_t)this + 0xd8);
}
void* _Script_Niagara::NiagaraDataInterfaceRenderTarget2D::get_MipMapGeneration() {
    return (void*)((uintptr_t)this + 0xe0);
}
void* _Script_Niagara::NiagaraDataInterfaceRenderTarget2D::get_OverrideRenderTargetFormat() {
    return (void*)((uintptr_t)this + 0xe1);
}
bool _Script_Niagara::NiagaraDataInterfaceRenderTarget2D::get_bInheritUserParameterSettings() {
    return (*(uint8_t*)((uintptr_t)this + 0xe2 + 0)) & 1 != 0;
}
void _Script_Niagara::NiagaraDataInterfaceRenderTarget2D::set_bInheritUserParameterSettings(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe2 + 0);
    *(uint8_t*)((uintptr_t)this + 0xe2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Niagara::NiagaraDataInterfaceRenderTarget2D::get_bOverrideFormat() {
    return (*(uint8_t*)((uintptr_t)this + 0xe2 + 0)) & 2 != 0;
}
void* _Script_Niagara::NiagaraDataInterfaceRenderTarget2D::get_RenderTargetUserParameter() {
    return (void*)((uintptr_t)this + 0xe8);
}
void _Script_Niagara::NiagaraDataInterfaceRenderTarget2D::set_bOverrideFormat(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe2 + 0);
    *(uint8_t*)((uintptr_t)this + 0xe2 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_Niagara::NiagaraDataInterfaceRenderTarget2D::get_ManagedRenderTargets() {
    return (void*)((uintptr_t)this + 0x158);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraDataInterfaceRenderTarget2D::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraDataInterfaceRenderTarget2D");
    return result;
}
