#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "TOPNetwork.hpp"
int32_t& _Script_HoudiniEngineRuntime::TOPNetwork::get_NodeId() {
    return *(int32_t*)((uintptr_t)this + 0x28);
}
void* _Script_HoudiniEngineRuntime::TOPNetwork::get_NodeName() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_HoudiniEngineRuntime::TOPNetwork::get_NodePath() {
    return (void*)((uintptr_t)this + 0x40);
}
void _Script_HoudiniEngineRuntime::TOPNetwork::set_bShowResults(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x78 + 0);
    *(uint8_t*)((uintptr_t)this + 0x78 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_HoudiniEngineRuntime::TOPNetwork::get_ParentName() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_HoudiniEngineRuntime::TOPNetwork::get_AllTOPNodes() {
    return (void*)((uintptr_t)this + 0x50);
}
int32_t& _Script_HoudiniEngineRuntime::TOPNetwork::get_SelectedTOPIndex() {
    return *(int32_t*)((uintptr_t)this + 0x60);
}
bool _Script_HoudiniEngineRuntime::TOPNetwork::get_bShowResults() {
    return (*(uint8_t*)((uintptr_t)this + 0x78 + 0)) & 1 != 0;
}
bool _Script_HoudiniEngineRuntime::TOPNetwork::get_bAutoLoadResults() {
    return (*(uint8_t*)((uintptr_t)this + 0x79 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::TOPNetwork::set_bAutoLoadResults(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x79 + 0);
    *(uint8_t*)((uintptr_t)this + 0x79 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::TOPNetwork::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HoudiniEngineRuntime.TOPNetwork");
    return result;
}
