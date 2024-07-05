#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "HoudiniParameterRampModificationEvent.hpp"
bool _Script_HoudiniEngineRuntime::HoudiniParameterRampModificationEvent::get_bIsInsertEvent() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniParameterRampModificationEvent::set_bIsInsertEvent(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniParameterRampModificationEvent::get_bIsFloatRamp() {
    return (*(uint8_t*)((uintptr_t)this + 0x29 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniParameterRampModificationEvent::set_bIsFloatRamp(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x29 + 0);
    *(uint8_t*)((uintptr_t)this + 0x29 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_HoudiniEngineRuntime::HoudiniParameterRampModificationEvent::get_DeleteInstanceIndex() {
    return *(int32_t*)((uintptr_t)this + 0x2c);
}
float& _Script_HoudiniEngineRuntime::HoudiniParameterRampModificationEvent::get_InsertPosition() {
    return *(float*)((uintptr_t)this + 0x30);
}
void* _Script_HoudiniEngineRuntime::HoudiniParameterRampModificationEvent::get_InsertColor() {
    return (void*)((uintptr_t)this + 0x38);
}
float& _Script_HoudiniEngineRuntime::HoudiniParameterRampModificationEvent::get_InsertFloat() {
    return *(float*)((uintptr_t)this + 0x34);
}
void* _Script_HoudiniEngineRuntime::HoudiniParameterRampModificationEvent::get_InsertInterpolation() {
    return (void*)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniParameterRampModificationEvent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HoudiniEngineRuntime.HoudiniParameterRampModificationEvent");
    return result;
}
