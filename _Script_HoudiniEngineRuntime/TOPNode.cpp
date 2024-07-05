#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "TOPNode.hpp"
void* _Script_HoudiniEngineRuntime::TOPNode::get_WorkResult() {
    return (void*)((uintptr_t)this + 0x68);
}
int32_t& _Script_HoudiniEngineRuntime::TOPNode::get_NodeId() {
    return *(int32_t*)((uintptr_t)this + 0x28);
}
void* _Script_HoudiniEngineRuntime::TOPNode::get_NodeName() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_HoudiniEngineRuntime::TOPNode::get_NodePath() {
    return (void*)((uintptr_t)this + 0x40);
}
void _Script_HoudiniEngineRuntime::TOPNode::set_bHasChildNodes(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7d + 0);
    *(uint8_t*)((uintptr_t)this + 0x7d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_HoudiniEngineRuntime::TOPNode::get_ParentName() {
    return (void*)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Object*& _Script_HoudiniEngineRuntime::TOPNode::get_WorkResultParent() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x60);
}
void _Script_HoudiniEngineRuntime::TOPNode::set_bHasReceivedCookCompleteEvent(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x408 + 0);
    *(uint8_t*)((uintptr_t)this + 0x408 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::TOPNode::get_bHidden() {
    return (*(uint8_t*)((uintptr_t)this + 0x78 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::TOPNode::set_bHidden(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x78 + 0);
    *(uint8_t*)((uintptr_t)this + 0x78 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::TOPNode::get_bAutoLoad() {
    return (*(uint8_t*)((uintptr_t)this + 0x79 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::TOPNode::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HoudiniEngineRuntime.TOPNode");
    return result;
}
void _Script_HoudiniEngineRuntime::TOPNode::set_bAutoLoad(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x79 + 0);
    *(uint8_t*)((uintptr_t)this + 0x79 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_HoudiniEngineRuntime::TOPNode::get_NodeState() {
    return (void*)((uintptr_t)this + 0x7a);
}
void* _Script_HoudiniEngineRuntime::TOPNode::get_ClearedLandscapeLayers() {
    return (void*)((uintptr_t)this + 0x80);
}
bool _Script_HoudiniEngineRuntime::TOPNode::get_bCachedHaveNotLoadedWorkResults() {
    return (*(uint8_t*)((uintptr_t)this + 0x7b + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::TOPNode::set_bCachedHaveNotLoadedWorkResults(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7b + 0);
    *(uint8_t*)((uintptr_t)this + 0x7b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::TOPNode::get_bCachedHaveLoadedWorkResults() {
    return (*(uint8_t*)((uintptr_t)this + 0x7c + 0)) & 1 != 0;
}
void* _Script_HoudiniEngineRuntime::TOPNode::get_WorkItemTally() {
    return (void*)((uintptr_t)this + 0x1a8);
}
void _Script_HoudiniEngineRuntime::TOPNode::set_bCachedHaveLoadedWorkResults(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7c + 0);
    *(uint8_t*)((uintptr_t)this + 0x7c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::TOPNode::get_bHasChildNodes() {
    return (*(uint8_t*)((uintptr_t)this + 0x7d + 0)) & 1 != 0;
}
bool _Script_HoudiniEngineRuntime::TOPNode::get_bShow() {
    return (*(uint8_t*)((uintptr_t)this + 0x150 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::TOPNode::set_bShow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x150 + 0);
    *(uint8_t*)((uintptr_t)this + 0x150 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_HoudiniEngineRuntime::TOPNode::get_BakedWorkResultObjectOutputs() {
    return (void*)((uintptr_t)this + 0x158);
}
void* _Script_HoudiniEngineRuntime::TOPNode::get_AggregatedWorkItemTally() {
    return (void*)((uintptr_t)this + 0x3e0);
}
bool _Script_HoudiniEngineRuntime::TOPNode::get_bHasReceivedCookCompleteEvent() {
    return (*(uint8_t*)((uintptr_t)this + 0x408 + 0)) & 1 != 0;
}
void* _Script_HoudiniEngineRuntime::TOPNode::get_OutputActorOwner() {
    return (void*)((uintptr_t)this + 0x410);
}
