#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DatasmithSceneImportData.hpp"
#include "DatasmithTranslatedSceneImportData.hpp"
_Script_CoreUObject::Class* _Script_DatasmithContent::DatasmithTranslatedSceneImportData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/DatasmithContent.DatasmithTranslatedSceneImportData");
    return result;
}
