#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraDataInterfaceRWBase.hpp"
#include "NiagaraDataInterfaceRenderTargetCube.hpp"
int32_t& _Script_Niagara::NiagaraDataInterfaceRenderTargetCube::get_Size() {
    return *(int32_t*)((uintptr_t)this + 0xd8);
}
void _Script_Niagara::NiagaraDataInterfaceRenderTargetCube::set_bOverrideFormat(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xdd + 0);
    *(uint8_t*)((uintptr_t)this + 0xdd + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Niagara::NiagaraDataInterfaceRenderTargetCube::get_bOverrideFormat() {
    return (*(uint8_t*)((uintptr_t)this + 0xdd + 0)) & 2 != 0;
}
void* _Script_Niagara::NiagaraDataInterfaceRenderTargetCube::get_OverrideRenderTargetFormat() {
    return (void*)((uintptr_t)this + 0xdc);
}
void* _Script_Niagara::NiagaraDataInterfaceRenderTargetCube::get_RenderTargetUserParameter() {
    return (void*)((uintptr_t)this + 0xe0);
}
bool _Script_Niagara::NiagaraDataInterfaceRenderTargetCube::get_bInheritUserParameterSettings() {
    return (*(uint8_t*)((uintptr_t)this + 0xdd + 0)) & 1 != 0;
}
void _Script_Niagara::NiagaraDataInterfaceRenderTargetCube::set_bInheritUserParameterSettings(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xdd + 0);
    *(uint8_t*)((uintptr_t)this + 0xdd + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Niagara::NiagaraDataInterfaceRenderTargetCube::get_ManagedRenderTargets() {
    return (void*)((uintptr_t)this + 0x100);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraDataInterfaceRenderTargetCube::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraDataInterfaceRenderTargetCube");
    return result;
}
