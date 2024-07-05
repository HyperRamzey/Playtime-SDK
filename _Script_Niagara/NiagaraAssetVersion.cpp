#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraAssetVersion.hpp"
_Script_CoreUObject::Class* _Script_Niagara::NiagaraAssetVersion::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraAssetVersion");
    return result;
}
int32_t& _Script_Niagara::NiagaraAssetVersion::get_MajorVersion() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
int32_t& _Script_Niagara::NiagaraAssetVersion::get_MinorVersion() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
void* _Script_Niagara::NiagaraAssetVersion::get_VersionGuid() {
    return (void*)((uintptr_t)this + 0x8);
}
bool _Script_Niagara::NiagaraAssetVersion::get_bIsVisibleInVersionSelector() {
    return (*(uint8_t*)((uintptr_t)this + 0x18 + 0)) & 1 != 0;
}
void _Script_Niagara::NiagaraAssetVersion::set_bIsVisibleInVersionSelector(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x18 + 0);
    *(uint8_t*)((uintptr_t)this + 0x18 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
