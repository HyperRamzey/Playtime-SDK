#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponentInstanceData.hpp"
#include "HoudiniAsset.hpp"
#include "HoudiniAssetBlueprintInstanceData.hpp"
bool _Script_HoudiniEngineRuntime::HoudiniAssetBlueprintInstanceData::get_bHasBeenLoaded() {
    return (*(uint8_t*)((uintptr_t)this + 0x80 + 0)) & 1 != 0;
}
_Script_HoudiniEngineRuntime::HoudiniAsset*& _Script_HoudiniEngineRuntime::HoudiniAssetBlueprintInstanceData::get_HoudiniAsset() {
    return *(_Script_HoudiniEngineRuntime::HoudiniAsset**)((uintptr_t)this + 0x68);
}
int32_t& _Script_HoudiniEngineRuntime::HoudiniAssetBlueprintInstanceData::get_AssetId() {
    return *(int32_t*)((uintptr_t)this + 0x70);
}
void* _Script_HoudiniEngineRuntime::HoudiniAssetBlueprintInstanceData::get_SubAssetIndex() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_HoudiniEngineRuntime::HoudiniAssetBlueprintInstanceData::get_AssetState() {
    return (void*)((uintptr_t)this + 0x74);
}
void _Script_HoudiniEngineRuntime::HoudiniAssetBlueprintInstanceData::set_bHasBeenLoaded(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x80 + 0);
    *(uint8_t*)((uintptr_t)this + 0x80 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_HoudiniEngineRuntime::HoudiniAssetBlueprintInstanceData::get_AssetCookCount() {
    return (void*)((uintptr_t)this + 0x7c);
}
bool _Script_HoudiniEngineRuntime::HoudiniAssetBlueprintInstanceData::get_bHasBeenDuplicated() {
    return (*(uint8_t*)((uintptr_t)this + 0x81 + 0)) & 1 != 0;
}
void* _Script_HoudiniEngineRuntime::HoudiniAssetBlueprintInstanceData::get_HapiGUID() {
    return (void*)((uintptr_t)this + 0x98);
}
void _Script_HoudiniEngineRuntime::HoudiniAssetBlueprintInstanceData::set_bHasBeenDuplicated(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x81 + 0);
    *(uint8_t*)((uintptr_t)this + 0x81 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniAssetBlueprintInstanceData::get_bPendingDelete() {
    return (*(uint8_t*)((uintptr_t)this + 0x82 + 0)) & 1 != 0;
}
bool _Script_HoudiniEngineRuntime::HoudiniAssetBlueprintInstanceData::get_bRegisteredComponentTemplate() {
    return (*(uint8_t*)((uintptr_t)this + 0xa8 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniAssetBlueprintInstanceData::set_bPendingDelete(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x82 + 0);
    *(uint8_t*)((uintptr_t)this + 0x82 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniAssetBlueprintInstanceData::get_bRecookRequested() {
    return (*(uint8_t*)((uintptr_t)this + 0x83 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniAssetBlueprintInstanceData::set_bRecookRequested(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x83 + 0);
    *(uint8_t*)((uintptr_t)this + 0x83 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniAssetBlueprintInstanceData::get_bRebuildRequested() {
    return (*(uint8_t*)((uintptr_t)this + 0x84 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniAssetBlueprintInstanceData::set_bRebuildRequested(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x84 + 0);
    *(uint8_t*)((uintptr_t)this + 0x84 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniAssetBlueprintInstanceData::get_bEnableCooking() {
    return (*(uint8_t*)((uintptr_t)this + 0x85 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniAssetBlueprintInstanceData::set_bEnableCooking(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x85 + 0);
    *(uint8_t*)((uintptr_t)this + 0x85 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniAssetBlueprintInstanceData::get_bForceNeedUpdate() {
    return (*(uint8_t*)((uintptr_t)this + 0x86 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniAssetBlueprintInstanceData::set_bForceNeedUpdate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x86 + 0);
    *(uint8_t*)((uintptr_t)this + 0x86 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniAssetBlueprintInstanceData::get_bLastCookSuccess() {
    return (*(uint8_t*)((uintptr_t)this + 0x87 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniAssetBlueprintInstanceData::set_bLastCookSuccess(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x87 + 0);
    *(uint8_t*)((uintptr_t)this + 0x87 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_HoudiniEngineRuntime::HoudiniAssetBlueprintInstanceData::get_ComponentGUID() {
    return (void*)((uintptr_t)this + 0x88);
}
void _Script_HoudiniEngineRuntime::HoudiniAssetBlueprintInstanceData::set_bRegisteredComponentTemplate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_HoudiniEngineRuntime::HoudiniAssetBlueprintInstanceData::get_SourceName() {
    return (void*)((uintptr_t)this + 0xb0);
}
void* _Script_HoudiniEngineRuntime::HoudiniAssetBlueprintInstanceData::get_Outputs() {
    return (void*)((uintptr_t)this + 0xc0);
}
void* _Script_HoudiniEngineRuntime::HoudiniAssetBlueprintInstanceData::get_Inputs() {
    return (void*)((uintptr_t)this + 0x110);
}
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniAssetBlueprintInstanceData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/HoudiniEngineRuntime.HoudiniAssetBlueprintInstanceData");
    return result;
}
