#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "DatasmithAdditionalData.hpp"
_Script_CoreUObject::Class* _Script_DatasmithContent::DatasmithAdditionalData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/DatasmithContent.DatasmithAdditionalData");
    return result;
}