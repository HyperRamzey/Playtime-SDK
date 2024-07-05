#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "HoudiniOutput.hpp"
void* _Script_HoudiniEngineRuntime::HoudiniOutput::get_Type() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_HoudiniEngineRuntime::HoudiniOutput::get_ReplacementMaterials() {
    return (void*)((uintptr_t)this + 0x130);
}
void* _Script_HoudiniEngineRuntime::HoudiniOutput::get_HoudiniGeoPartObjects() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_HoudiniEngineRuntime::HoudiniOutput::get_InstancedOutputs() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_HoudiniEngineRuntime::HoudiniOutput::get_OutputObjects() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_HoudiniEngineRuntime::HoudiniOutput::get_AssignementMaterials() {
    return (void*)((uintptr_t)this + 0xe0);
}
void _Script_HoudiniEngineRuntime::HoudiniOutput::set_bHasEditableNodeBuilt(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1a9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1a9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniOutput::get_bLandscapeWorldComposition() {
    return (*(uint8_t*)((uintptr_t)this + 0x184 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniOutput::set_bLandscapeWorldComposition(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x184 + 0);
    *(uint8_t*)((uintptr_t)this + 0x184 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_HoudiniEngineRuntime::HoudiniOutput::get_HoudiniCreatedSocketActors() {
    return (void*)((uintptr_t)this + 0x188);
}
void* _Script_HoudiniEngineRuntime::HoudiniOutput::get_HoudiniAttachedSocketActors() {
    return (void*)((uintptr_t)this + 0x198);
}
bool _Script_HoudiniEngineRuntime::HoudiniOutput::get_bIsEditableNode() {
    return (*(uint8_t*)((uintptr_t)this + 0x1a8 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniOutput::set_bIsEditableNode(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1a8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1a8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniOutput::get_bHasEditableNodeBuilt() {
    return (*(uint8_t*)((uintptr_t)this + 0x1a9 + 0)) & 1 != 0;
}
bool _Script_HoudiniEngineRuntime::HoudiniOutput::get_bIsUpdating() {
    return (*(uint8_t*)((uintptr_t)this + 0x1aa + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniOutput::set_bIsUpdating(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1aa + 0);
    *(uint8_t*)((uintptr_t)this + 0x1aa + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniOutput::get_bCanDeleteHoudiniNodes() {
    return (*(uint8_t*)((uintptr_t)this + 0x1ab + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniOutput::set_bCanDeleteHoudiniNodes(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1ab + 0);
    *(uint8_t*)((uintptr_t)this + 0x1ab + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniOutput::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HoudiniEngineRuntime.HoudiniOutput");
    return result;
}
