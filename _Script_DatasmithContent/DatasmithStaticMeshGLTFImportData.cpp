#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DatasmithStaticMeshGLTFImportData.hpp"
#include "DatasmithStaticMeshImportData.hpp"
void* _Script_DatasmithContent::DatasmithStaticMeshGLTFImportData::get_SourceMeshName() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_DatasmithContent::DatasmithStaticMeshGLTFImportData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/DatasmithContent.DatasmithStaticMeshGLTFImportData");
    return result;
}
