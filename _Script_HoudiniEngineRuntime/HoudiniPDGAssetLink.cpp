#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "HoudiniPDGAssetLink.hpp"
void* _Script_HoudiniEngineRuntime::HoudiniPDGAssetLink::get_AllTOPNetworks() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_HoudiniEngineRuntime::HoudiniPDGAssetLink::get_AssetNodePath() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_HoudiniEngineRuntime::HoudiniPDGAssetLink::get_AssetName() {
    return (void*)((uintptr_t)this + 0x28);
}
int32_t& _Script_HoudiniEngineRuntime::HoudiniPDGAssetLink::get_AssetId() {
    return *(int32_t*)((uintptr_t)this + 0x48);
}
void _Script_HoudiniEngineRuntime::HoudiniPDGAssetLink::set_bAutoCook(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x65 + 0);
    *(uint8_t*)((uintptr_t)this + 0x65 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_HoudiniEngineRuntime::HoudiniPDGAssetLink::get_SelectedTOPNetworkIndex() {
    return *(int32_t*)((uintptr_t)this + 0x60);
}
bool _Script_HoudiniEngineRuntime::HoudiniPDGAssetLink::get_bAutoCook() {
    return (*(uint8_t*)((uintptr_t)this + 0x65 + 0)) & 1 != 0;
}
void* _Script_HoudiniEngineRuntime::HoudiniPDGAssetLink::get_LinkState() {
    return (void*)((uintptr_t)this + 0x64);
}
bool _Script_HoudiniEngineRuntime::HoudiniPDGAssetLink::get_bUseTOPNodeFilter() {
    return (*(uint8_t*)((uintptr_t)this + 0x66 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniPDGAssetLink::set_bUseTOPNodeFilter(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x66 + 0);
    *(uint8_t*)((uintptr_t)this + 0x66 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_HoudiniEngineRuntime::HoudiniPDGAssetLink::get_bUseTOPOutputFilter() {
    return (*(uint8_t*)((uintptr_t)this + 0x67 + 0)) & 1 != 0;
}
void* _Script_HoudiniEngineRuntime::HoudiniPDGAssetLink::get_WorkItemTally() {
    return (void*)((uintptr_t)this + 0x90);
}
void _Script_HoudiniEngineRuntime::HoudiniPDGAssetLink::set_bUseTOPOutputFilter(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x67 + 0);
    *(uint8_t*)((uintptr_t)this + 0x67 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_HoudiniEngineRuntime::HoudiniPDGAssetLink::get_TOPNodeFilter() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_HoudiniEngineRuntime::HoudiniPDGAssetLink::get_TOPOutputFilter() {
    return (void*)((uintptr_t)this + 0x78);
}
int32_t& _Script_HoudiniEngineRuntime::HoudiniPDGAssetLink::get_NumWorkitems() {
    return *(int32_t*)((uintptr_t)this + 0x88);
}
void* _Script_HoudiniEngineRuntime::HoudiniPDGAssetLink::get_OutputCachePath() {
    return (void*)((uintptr_t)this + 0xb8);
}
bool _Script_HoudiniEngineRuntime::HoudiniPDGAssetLink::get_bNeedsUIRefresh() {
    return (*(uint8_t*)((uintptr_t)this + 0xc8 + 0)) & 1 != 0;
}
void _Script_HoudiniEngineRuntime::HoudiniPDGAssetLink::set_bNeedsUIRefresh(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::Actor*& _Script_HoudiniEngineRuntime::HoudiniPDGAssetLink::get_OutputParentActor() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0xd0);
}
void* _Script_HoudiniEngineRuntime::HoudiniPDGAssetLink::get_BakeFolder() {
    return (void*)((uintptr_t)this + 0xd8);
}
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniPDGAssetLink::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HoudiniEngineRuntime.HoudiniPDGAssetLink");
    return result;
}
