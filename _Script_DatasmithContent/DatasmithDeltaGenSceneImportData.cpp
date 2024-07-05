#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DatasmithDeltaGenSceneImportData.hpp"
#include "DatasmithFBXSceneImportData.hpp"
bool _Script_DatasmithContent::DatasmithDeltaGenSceneImportData::get_bRemoveInvisibleNodes() {
    return (*(uint8_t*)((uintptr_t)this + 0x4a + 0)) & 1 != 0;
}
bool _Script_DatasmithContent::DatasmithDeltaGenSceneImportData::get_bMergeNodes() {
    return (*(uint8_t*)((uintptr_t)this + 0x48 + 0)) & 1 != 0;
}
void _Script_DatasmithContent::DatasmithDeltaGenSceneImportData::set_bMergeNodes(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x48 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_DatasmithContent::DatasmithDeltaGenSceneImportData::set_bSimplifyNodeHierarchy(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4b + 0);
    *(uint8_t*)((uintptr_t)this + 0x4b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_DatasmithContent::DatasmithDeltaGenSceneImportData::set_bOptimizeDuplicatedNodes(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x49 + 0);
    *(uint8_t*)((uintptr_t)this + 0x49 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_DatasmithContent::DatasmithDeltaGenSceneImportData::get_bOptimizeDuplicatedNodes() {
    return (*(uint8_t*)((uintptr_t)this + 0x49 + 0)) & 1 != 0;
}
void _Script_DatasmithContent::DatasmithDeltaGenSceneImportData::set_bRemoveInvisibleNodes(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4a + 0);
    *(uint8_t*)((uintptr_t)this + 0x4a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_DatasmithContent::DatasmithDeltaGenSceneImportData::get_bSimplifyNodeHierarchy() {
    return (*(uint8_t*)((uintptr_t)this + 0x4b + 0)) & 1 != 0;
}
bool _Script_DatasmithContent::DatasmithDeltaGenSceneImportData::get_bImportVar() {
    return (*(uint8_t*)((uintptr_t)this + 0x4c + 0)) & 1 != 0;
}
void _Script_DatasmithContent::DatasmithDeltaGenSceneImportData::set_bImportVar(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4c + 0);
    *(uint8_t*)((uintptr_t)this + 0x4c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_DatasmithContent::DatasmithDeltaGenSceneImportData::get_VarPath() {
    return (void*)((uintptr_t)this + 0x50);
}
bool _Script_DatasmithContent::DatasmithDeltaGenSceneImportData::get_bImportPos() {
    return (*(uint8_t*)((uintptr_t)this + 0x60 + 0)) & 1 != 0;
}
void _Script_DatasmithContent::DatasmithDeltaGenSceneImportData::set_bImportPos(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x60 + 0);
    *(uint8_t*)((uintptr_t)this + 0x60 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_DatasmithContent::DatasmithDeltaGenSceneImportData::get_PosPath() {
    return (void*)((uintptr_t)this + 0x68);
}
bool _Script_DatasmithContent::DatasmithDeltaGenSceneImportData::get_bImportTml() {
    return (*(uint8_t*)((uintptr_t)this + 0x78 + 0)) & 1 != 0;
}
void _Script_DatasmithContent::DatasmithDeltaGenSceneImportData::set_bImportTml(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x78 + 0);
    *(uint8_t*)((uintptr_t)this + 0x78 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_DatasmithContent::DatasmithDeltaGenSceneImportData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/DatasmithContent.DatasmithDeltaGenSceneImportData");
    return result;
}
void* _Script_DatasmithContent::DatasmithDeltaGenSceneImportData::get_TmlPath() {
    return (void*)((uintptr_t)this + 0x80);
}
