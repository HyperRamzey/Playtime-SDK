#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DatasmithGLTFSceneImportData.hpp"
#include "DatasmithSceneImportData.hpp"
float& _Script_DatasmithContent::DatasmithGLTFSceneImportData::get_Version() {
    return *(float*)((uintptr_t)this + 0x38);
}
void* _Script_DatasmithContent::DatasmithGLTFSceneImportData::get_Generator() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_DatasmithContent::DatasmithGLTFSceneImportData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/DatasmithContent.DatasmithGLTFSceneImportData");
    return result;
}
void* _Script_DatasmithContent::DatasmithGLTFSceneImportData::get_Author() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_DatasmithContent::DatasmithGLTFSceneImportData::get_License() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_DatasmithContent::DatasmithGLTFSceneImportData::get_Source() {
    return (void*)((uintptr_t)this + 0x60);
}
