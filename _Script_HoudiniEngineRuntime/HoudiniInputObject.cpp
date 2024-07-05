#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "HoudiniInputObject.hpp"
void* _Script_HoudiniEngineRuntime::HoudiniInputObject::get_InputObject() {
    return (void*)((uintptr_t)this + 0x28);
}
void _Script_HoudiniEngineRuntime::HoudiniInputObject::set_bHasChanged(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9c + 0);
    *(uint8_t*)((uintptr_t)this + 0x9c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_HoudiniEngineRuntime::HoudiniInputObject::get_Transform() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_HoudiniEngineRuntime::HoudiniInputObject::get_Type() {
    return (void*)((uintptr_t)this + 0x80);
}
bool _Script_HoudiniEngineRuntime::HoudiniInputObject::get_bHasChanged() {
    return (*(uint8_t*)((uintptr_t)this + 0x9c + 0)) & 1 != 0;
}
int32_t& _Script_HoudiniEngineRuntime::HoudiniInputObject::get_InputNodeId() {
    return *(int32_t*)((uintptr_t)this + 0x84);
}
int32_t& _Script_HoudiniEngineRuntime::HoudiniInputObject::get_InputObjectNodeId() {
    return *(int32_t*)((uintptr_t)this + 0x88);
}
void* _Script_HoudiniEngineRuntime::HoudiniInputObject::get_Guid() {
    return (void*)((uintptr_t)this + 0x8c);
}
bool _Script_HoudiniEngineRuntime::HoudiniInputObject::get_bNeedsToTriggerUpdate() {
    return (*(uint8_t*)((uintptr_t)this + 0x9d + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniInputObject::set_bNeedsToTriggerUpdate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9d + 0);
    *(uint8_t*)((uintptr_t)this + 0x9d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniInputObject::get_bTransformChanged() {
    return (*(uint8_t*)((uintptr_t)this + 0x9e + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniInputObject::set_bTransformChanged(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9e + 0);
    *(uint8_t*)((uintptr_t)this + 0x9e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniInputObject::get_bImportAsReference() {
    return (*(uint8_t*)((uintptr_t)this + 0x9f + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniInputObject::set_bImportAsReference(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9f + 0);
    *(uint8_t*)((uintptr_t)this + 0x9f + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniInputObject::get_bImportAsReferenceRotScaleEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0xa0 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniInputObject::set_bImportAsReferenceRotScaleEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniInputObject::get_bCanDeleteHoudiniNodes() {
    return (*(uint8_t*)((uintptr_t)this + 0xa1 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniInputObject::set_bCanDeleteHoudiniNodes(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa1 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniInputObject::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HoudiniEngineRuntime.HoudiniInputObject");
    return result;
}
