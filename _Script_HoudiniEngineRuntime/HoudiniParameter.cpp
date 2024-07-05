#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "HoudiniParameter.hpp"
void _Script_HoudiniEngineRuntime::HoudiniParameter::set_bJoinNext(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x67 + 0);
    *(uint8_t*)((uintptr_t)this + 0x67 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_HoudiniEngineRuntime::HoudiniParameter::get_Name() {
    return (void*)((uintptr_t)this + 0x28);
}
int32_t& _Script_HoudiniEngineRuntime::HoudiniParameter::get_NodeId() {
    return *(int32_t*)((uintptr_t)this + 0x50);
}
void* _Script_HoudiniEngineRuntime::HoudiniParameter::get_Label() {
    return (void*)((uintptr_t)this + 0x38);
}
int32_t& _Script_HoudiniEngineRuntime::HoudiniParameter::get_ParentParmId() {
    return *(int32_t*)((uintptr_t)this + 0x58);
}
bool _Script_HoudiniEngineRuntime::HoudiniParameter::get_bJoinNext() {
    return (*(uint8_t*)((uintptr_t)this + 0x67 + 0)) & 1 != 0;
}
void* _Script_HoudiniEngineRuntime::HoudiniParameter::get_ParmType() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_HoudiniEngineRuntime::HoudiniParameter::get_TupleSize() {
    return (void*)((uintptr_t)this + 0x4c);
}
int32_t& _Script_HoudiniEngineRuntime::HoudiniParameter::get_ChildIndex() {
    return *(int32_t*)((uintptr_t)this + 0x5c);
}
int32_t& _Script_HoudiniEngineRuntime::HoudiniParameter::get_ParmId() {
    return *(int32_t*)((uintptr_t)this + 0x54);
}
bool _Script_HoudiniEngineRuntime::HoudiniParameter::get_bIsVisible() {
    return (*(uint8_t*)((uintptr_t)this + 0x60 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniParameter::set_bIsVisible(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x60 + 0);
    *(uint8_t*)((uintptr_t)this + 0x60 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniParameter::get_bIsParentFolderVisible() {
    return (*(uint8_t*)((uintptr_t)this + 0x61 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniParameter::set_bIsDirectChildOfMultiParm(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x69 + 0);
    *(uint8_t*)((uintptr_t)this + 0x69 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_HoudiniEngineRuntime::HoudiniParameter::set_bIsParentFolderVisible(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x61 + 0);
    *(uint8_t*)((uintptr_t)this + 0x61 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniParameter::get_bIsDisabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x62 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniParameter::set_bIsDisabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x62 + 0);
    *(uint8_t*)((uintptr_t)this + 0x62 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniParameter::get_bHasChanged() {
    return (*(uint8_t*)((uintptr_t)this + 0x63 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniParameter::set_bHasChanged(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x63 + 0);
    *(uint8_t*)((uintptr_t)this + 0x63 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniParameter::get_bNeedsToTriggerUpdate() {
    return (*(uint8_t*)((uintptr_t)this + 0x64 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniParameter::set_bNeedsToTriggerUpdate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x64 + 0);
    *(uint8_t*)((uintptr_t)this + 0x64 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniParameter::get_bIsDefault() {
    return (*(uint8_t*)((uintptr_t)this + 0x65 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniParameter::set_bIsDefault(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x65 + 0);
    *(uint8_t*)((uintptr_t)this + 0x65 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniParameter::get_bIsSpare() {
    return (*(uint8_t*)((uintptr_t)this + 0x66 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniParameter::set_bIsSpare(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x66 + 0);
    *(uint8_t*)((uintptr_t)this + 0x66 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniParameter::get_bIsChildOfMultiParm() {
    return (*(uint8_t*)((uintptr_t)this + 0x68 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniParameter::set_bIsChildOfMultiParm(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x68 + 0);
    *(uint8_t*)((uintptr_t)this + 0x68 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniParameter::get_bIsDirectChildOfMultiParm() {
    return (*(uint8_t*)((uintptr_t)this + 0x69 + 0)) & 1 != 0;
}
bool _Script_HoudiniEngineRuntime::HoudiniParameter::get_bPendingRevertToDefault() {
    return (*(uint8_t*)((uintptr_t)this + 0x6a + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniParameter::set_bPendingRevertToDefault(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6a + 0);
    *(uint8_t*)((uintptr_t)this + 0x6a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_HoudiniEngineRuntime::HoudiniParameter::get_TuplePendingRevertToDefault() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_HoudiniEngineRuntime::HoudiniParameter::get_Help() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_HoudiniEngineRuntime::HoudiniParameter::get_TagCount() {
    return (void*)((uintptr_t)this + 0x90);
}
int32_t& _Script_HoudiniEngineRuntime::HoudiniParameter::get_ValueIndex() {
    return *(int32_t*)((uintptr_t)this + 0x94);
}
bool _Script_HoudiniEngineRuntime::HoudiniParameter::get_bHasExpression() {
    return (*(uint8_t*)((uintptr_t)this + 0x98 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniParameter::set_bHasExpression(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x98 + 0);
    *(uint8_t*)((uintptr_t)this + 0x98 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_HoudiniEngineRuntime::HoudiniParameter::set_bAutoUpdate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x100 + 0);
    *(uint8_t*)((uintptr_t)this + 0x100 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniParameter::get_bShowExpression() {
    return (*(uint8_t*)((uintptr_t)this + 0x99 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniParameter::set_bShowExpression(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x99 + 0);
    *(uint8_t*)((uintptr_t)this + 0x99 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_HoudiniEngineRuntime::HoudiniParameter::get_ParamExpression() {
    return (void*)((uintptr_t)this + 0xa0);
}
void* _Script_HoudiniEngineRuntime::HoudiniParameter::get_Tags() {
    return (void*)((uintptr_t)this + 0xb0);
}
bool _Script_HoudiniEngineRuntime::HoudiniParameter::get_bAutoUpdate() {
    return (*(uint8_t*)((uintptr_t)this + 0x100 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniParameter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HoudiniEngineRuntime.HoudiniParameter");
    return result;
}
