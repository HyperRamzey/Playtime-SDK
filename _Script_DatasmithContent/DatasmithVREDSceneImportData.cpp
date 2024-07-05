#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DatasmithFBXSceneImportData.hpp"
#include "DatasmithVREDSceneImportData.hpp"
bool _Script_DatasmithContent::DatasmithVREDSceneImportData::get_bMergeNodes() {
    return (*(uint8_t*)((uintptr_t)this + 0x48 + 0)) & 1 != 0;
}
void _Script_DatasmithContent::DatasmithVREDSceneImportData::set_bMergeNodes(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x48 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_DatasmithContent::DatasmithVREDSceneImportData::get_MatsPath() {
    return (void*)((uintptr_t)this + 0x50);
}
bool _Script_DatasmithContent::DatasmithVREDSceneImportData::get_bOptimizeDuplicatedNodes() {
    return (*(uint8_t*)((uintptr_t)this + 0x49 + 0)) & 1 != 0;
}
void _Script_DatasmithContent::DatasmithVREDSceneImportData::set_bOptimizeDuplicatedNodes(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x49 + 0);
    *(uint8_t*)((uintptr_t)this + 0x49 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_DatasmithContent::DatasmithVREDSceneImportData::set_bImportMats(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4a + 0);
    *(uint8_t*)((uintptr_t)this + 0x4a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_DatasmithContent::DatasmithVREDSceneImportData::get_bImportMats() {
    return (*(uint8_t*)((uintptr_t)this + 0x4a + 0)) & 1 != 0;
}
bool _Script_DatasmithContent::DatasmithVREDSceneImportData::get_bImportVar() {
    return (*(uint8_t*)((uintptr_t)this + 0x60 + 0)) & 1 != 0;
}
void _Script_DatasmithContent::DatasmithVREDSceneImportData::set_bImportVar(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x60 + 0);
    *(uint8_t*)((uintptr_t)this + 0x60 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_DatasmithContent::DatasmithVREDSceneImportData::get_bCleanVar() {
    return (*(uint8_t*)((uintptr_t)this + 0x61 + 0)) & 1 != 0;
}
void _Script_DatasmithContent::DatasmithVREDSceneImportData::set_bCleanVar(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x61 + 0);
    *(uint8_t*)((uintptr_t)this + 0x61 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_DatasmithContent::DatasmithVREDSceneImportData::set_bImportLightInfo(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x78 + 0);
    *(uint8_t*)((uintptr_t)this + 0x78 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_DatasmithContent::DatasmithVREDSceneImportData::get_VarPath() {
    return (void*)((uintptr_t)this + 0x68);
}
bool _Script_DatasmithContent::DatasmithVREDSceneImportData::get_bImportLightInfo() {
    return (*(uint8_t*)((uintptr_t)this + 0x78 + 0)) & 1 != 0;
}
void* _Script_DatasmithContent::DatasmithVREDSceneImportData::get_LightInfoPath() {
    return (void*)((uintptr_t)this + 0x80);
}
bool _Script_DatasmithContent::DatasmithVREDSceneImportData::get_bImportClipInfo() {
    return (*(uint8_t*)((uintptr_t)this + 0x90 + 0)) & 1 != 0;
}
void _Script_DatasmithContent::DatasmithVREDSceneImportData::set_bImportClipInfo(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x90 + 0);
    *(uint8_t*)((uintptr_t)this + 0x90 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_DatasmithContent::DatasmithVREDSceneImportData::get_ClipInfoPath() {
    return (void*)((uintptr_t)this + 0x98);
}
_Script_CoreUObject::Class* _Script_DatasmithContent::DatasmithVREDSceneImportData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/DatasmithContent.DatasmithVREDSceneImportData");
    return result;
}
