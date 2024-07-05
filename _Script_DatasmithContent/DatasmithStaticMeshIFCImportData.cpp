#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DatasmithStaticMeshIFCImportData.hpp"
#include "DatasmithStaticMeshImportData.hpp"
void* _Script_DatasmithContent::DatasmithStaticMeshIFCImportData::get_SourceGlobalId() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_DatasmithContent::DatasmithStaticMeshIFCImportData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/DatasmithContent.DatasmithStaticMeshIFCImportData");
    return result;
}
