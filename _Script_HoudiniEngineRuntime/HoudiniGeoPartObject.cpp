#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HoudiniGeoPartObject.hpp"
int32_t& _Script_HoudiniEngineRuntime::HoudiniGeoPartObject::get_AssetId() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
bool _Script_HoudiniEngineRuntime::HoudiniGeoPartObject::get_bHasCustomPartName() {
    return (*(uint8_t*)((uintptr_t)this + 0x48 + 0)) & 1 != 0;
}
void* _Script_HoudiniEngineRuntime::HoudiniGeoPartObject::get_AssetName() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_HoudiniEngineRuntime::HoudiniGeoPartObject::get_ObjectName() {
    return (void*)((uintptr_t)this + 0x20);
}
int32_t& _Script_HoudiniEngineRuntime::HoudiniGeoPartObject::get_ObjectId() {
    return *(int32_t*)((uintptr_t)this + 0x18);
}
int32_t& _Script_HoudiniEngineRuntime::HoudiniGeoPartObject::get_GeoId() {
    return *(int32_t*)((uintptr_t)this + 0x30);
}
int32_t& _Script_HoudiniEngineRuntime::HoudiniGeoPartObject::get_PartId() {
    return *(int32_t*)((uintptr_t)this + 0x34);
}
void* _Script_HoudiniEngineRuntime::HoudiniGeoPartObject::get_PartName() {
    return (void*)((uintptr_t)this + 0x38);
}
void _Script_HoudiniEngineRuntime::HoudiniGeoPartObject::set_bHasCustomPartName(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x48 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_HoudiniEngineRuntime::HoudiniGeoPartObject::get_SplitGroups() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_HoudiniEngineRuntime::HoudiniGeoPartObject::get_TransformMatrix() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_HoudiniEngineRuntime::HoudiniGeoPartObject::get_InstancerType() {
    return (void*)((uintptr_t)this + 0xa1);
}
void* _Script_HoudiniEngineRuntime::HoudiniGeoPartObject::get_NodePath() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_HoudiniEngineRuntime::HoudiniGeoPartObject::get_Type() {
    return (void*)((uintptr_t)this + 0xa0);
}
void* _Script_HoudiniEngineRuntime::HoudiniGeoPartObject::get_VolumeName() {
    return (void*)((uintptr_t)this + 0xa8);
}
bool _Script_HoudiniEngineRuntime::HoudiniGeoPartObject::get_bHasEditLayers() {
    return (*(uint8_t*)((uintptr_t)this + 0xb8 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniGeoPartObject::set_bIsVisible(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_HoudiniEngineRuntime::HoudiniGeoPartObject::set_bHasEditLayers(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_HoudiniEngineRuntime::HoudiniGeoPartObject::get_VolumeLayerName() {
    return (void*)((uintptr_t)this + 0xc0);
}
void _Script_HoudiniEngineRuntime::HoudiniGeoPartObject::set_bIsTemplated(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd6 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd6 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_HoudiniEngineRuntime::HoudiniGeoPartObject::get_VolumeTileIndex() {
    return *(int32_t*)((uintptr_t)this + 0xd0);
}
bool _Script_HoudiniEngineRuntime::HoudiniGeoPartObject::get_bIsVisible() {
    return (*(uint8_t*)((uintptr_t)this + 0xd4 + 0)) & 1 != 0;
}
bool _Script_HoudiniEngineRuntime::HoudiniGeoPartObject::get_bIsEditable() {
    return (*(uint8_t*)((uintptr_t)this + 0xd5 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniGeoPartObject::set_bIsEditable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd5 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd5 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniGeoPartObject::get_bIsTemplated() {
    return (*(uint8_t*)((uintptr_t)this + 0xd6 + 0)) & 1 != 0;
}
bool _Script_HoudiniEngineRuntime::HoudiniGeoPartObject::get_bIsInstanced() {
    return (*(uint8_t*)((uintptr_t)this + 0xd7 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniGeoPartObject::set_bHasMaterialsChanged(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xdb + 0);
    *(uint8_t*)((uintptr_t)this + 0xdb + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_HoudiniEngineRuntime::HoudiniGeoPartObject::set_bIsInstanced(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd7 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd7 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniGeoPartObject::get_bHasGeoChanged() {
    return (*(uint8_t*)((uintptr_t)this + 0xd8 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniGeoPartObject::set_bHasGeoChanged(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniGeoPartObject::get_bHasPartChanged() {
    return (*(uint8_t*)((uintptr_t)this + 0xd9 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniGeoPartObject::set_bHasPartChanged(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd9 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniGeoPartObject::get_bHasTransformChanged() {
    return (*(uint8_t*)((uintptr_t)this + 0xda + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniGeoPartObject::set_bHasTransformChanged(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xda + 0);
    *(uint8_t*)((uintptr_t)this + 0xda + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniGeoPartObject::get_bHasMaterialsChanged() {
    return (*(uint8_t*)((uintptr_t)this + 0xdb + 0)) & 1 != 0;
}
void* _Script_HoudiniEngineRuntime::HoudiniGeoPartObject::get_AllMeshSockets() {
    return (void*)((uintptr_t)this + 0x220);
}
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniGeoPartObject::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/HoudiniEngineRuntime.HoudiniGeoPartObject");
    return result;
}
