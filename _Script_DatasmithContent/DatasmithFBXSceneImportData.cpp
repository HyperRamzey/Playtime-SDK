#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DatasmithFBXSceneImportData.hpp"
#include "DatasmithSceneImportData.hpp"
void* _Script_DatasmithContent::DatasmithFBXSceneImportData::get_IntermediateSerialization() {
    return (void*)((uintptr_t)this + 0x40);
}
bool _Script_DatasmithContent::DatasmithFBXSceneImportData::get_bGenerateLightmapUVs() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
void _Script_DatasmithContent::DatasmithFBXSceneImportData::set_bGenerateLightmapUVs(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_DatasmithContent::DatasmithFBXSceneImportData::get_TexturesDir() {
    return (void*)((uintptr_t)this + 0x30);
}
bool _Script_DatasmithContent::DatasmithFBXSceneImportData::get_bColorizeMaterials() {
    return (*(uint8_t*)((uintptr_t)this + 0x41 + 0)) & 1 != 0;
}
void _Script_DatasmithContent::DatasmithFBXSceneImportData::set_bColorizeMaterials(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x41 + 0);
    *(uint8_t*)((uintptr_t)this + 0x41 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_DatasmithContent::DatasmithFBXSceneImportData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/DatasmithContent.DatasmithFBXSceneImportData");
    return result;
}
