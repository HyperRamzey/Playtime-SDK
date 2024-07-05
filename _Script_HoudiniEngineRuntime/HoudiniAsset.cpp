#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "HoudiniAsset.hpp"
void* _Script_HoudiniEngineRuntime::HoudiniAsset::get_AssetBytesCount() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_HoudiniEngineRuntime::HoudiniAsset::get_AssetFileName() {
    return (void*)((uintptr_t)this + 0x28);
}
void _Script_HoudiniEngineRuntime::HoudiniAsset::set_bAssetNonCommercial(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4d + 0);
    *(uint8_t*)((uintptr_t)this + 0x4d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_HoudiniEngineRuntime::HoudiniAsset::get_AssetBytes() {
    return (void*)((uintptr_t)this + 0x38);
}
bool _Script_HoudiniEngineRuntime::HoudiniAsset::get_bAssetLimitedCommercial() {
    return (*(uint8_t*)((uintptr_t)this + 0x4c + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniAsset::set_bAssetLimitedCommercial(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4c + 0);
    *(uint8_t*)((uintptr_t)this + 0x4c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniAsset::get_bAssetNonCommercial() {
    return (*(uint8_t*)((uintptr_t)this + 0x4d + 0)) & 1 != 0;
}
bool _Script_HoudiniEngineRuntime::HoudiniAsset::get_bAssetExpanded() {
    return (*(uint8_t*)((uintptr_t)this + 0x4e + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniAsset::set_bAssetExpanded(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4e + 0);
    *(uint8_t*)((uintptr_t)this + 0x4e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniAsset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HoudiniEngineRuntime.HoudiniAsset");
    return result;
}
