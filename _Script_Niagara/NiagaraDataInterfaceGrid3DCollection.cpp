#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\VolumeTexture.hpp"
#include "NiagaraComponent.hpp"
#include "NiagaraDataInterfaceGrid3D.hpp"
#include "NiagaraDataInterfaceGrid3DCollection.hpp"
void* _Script_Niagara::NiagaraDataInterfaceGrid3DCollection::get_RenderTargetUserParameter() {
    return (void*)((uintptr_t)this + 0x108);
}
int32_t& _Script_Niagara::NiagaraDataInterfaceGrid3DCollection::get_NumAttributes() {
    return *(int32_t*)((uintptr_t)this + 0x100);
}
void* _Script_Niagara::NiagaraDataInterfaceGrid3DCollection::get_OverrideBufferFormat() {
    return (void*)((uintptr_t)this + 0x128);
}
bool _Script_Niagara::NiagaraDataInterfaceGrid3DCollection::get_bOverrideFormat() {
    return (*(uint8_t*)((uintptr_t)this + 0x129 + 0)) & 1 != 0;
}
void _Script_Niagara::NiagaraDataInterfaceGrid3DCollection::GetTextureSize(_Script_Niagara::NiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY, int32_t& SizeZ) {
    return;
}
void _Script_Niagara::NiagaraDataInterfaceGrid3DCollection::set_bOverrideFormat(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x129 + 0);
    *(uint8_t*)((uintptr_t)this + 0x129 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraDataInterfaceGrid3DCollection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraDataInterfaceGrid3DCollection");
    return result;
}
void _Script_Niagara::NiagaraDataInterfaceGrid3DCollection::GetRawTextureSize(_Script_Niagara::NiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY, int32_t& SizeZ) {
    return;
}
bool _Script_Niagara::NiagaraDataInterfaceGrid3DCollection::FillVolumeTexture(_Script_Niagara::NiagaraComponent* Component, _Script_Engine::VolumeTexture* Dest, int32_t AttributeIndex) {
    return;
}
bool _Script_Niagara::NiagaraDataInterfaceGrid3DCollection::FillRawVolumeTexture(_Script_Niagara::NiagaraComponent* Component, _Script_Engine::VolumeTexture* Dest, int32_t& TilesX, int32_t& TilesY, int32_t& TileZ) {
    return;
}
