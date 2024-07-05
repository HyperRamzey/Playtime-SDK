#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HoudiniInstancedOutput.hpp"
void* _Script_HoudiniEngineRuntime::HoudiniInstancedOutput::get_VariationTransformOffsets() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_HoudiniEngineRuntime::HoudiniInstancedOutput::get_OriginalObject() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_HoudiniEngineRuntime::HoudiniInstancedOutput::get_OriginalObjectIndex() {
    return *(int32_t*)((uintptr_t)this + 0x28);
}
void* _Script_HoudiniEngineRuntime::HoudiniInstancedOutput::get_OriginalTransforms() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_HoudiniEngineRuntime::HoudiniInstancedOutput::get_TransformVariationIndices() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_HoudiniEngineRuntime::HoudiniInstancedOutput::get_VariationObjects() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_HoudiniEngineRuntime::HoudiniInstancedOutput::get_OriginalInstanceIndices() {
    return (void*)((uintptr_t)this + 0x70);
}
bool _Script_HoudiniEngineRuntime::HoudiniInstancedOutput::get_bChanged() {
    return (*(uint8_t*)((uintptr_t)this + 0x80 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniInstancedOutput::set_bChanged(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x80 + 0);
    *(uint8_t*)((uintptr_t)this + 0x80 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniInstancedOutput::get_bStale() {
    return (*(uint8_t*)((uintptr_t)this + 0x81 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniInstancedOutput::set_bStale(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x81 + 0);
    *(uint8_t*)((uintptr_t)this + 0x81 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniInstancedOutput::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/HoudiniEngineRuntime.HoudiniInstancedOutput");
    return result;
}
