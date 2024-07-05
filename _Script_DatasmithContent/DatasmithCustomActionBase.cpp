#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "DatasmithCustomActionBase.hpp"
_Script_CoreUObject::Class* _Script_DatasmithContent::DatasmithCustomActionBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/DatasmithContent.DatasmithCustomActionBase");
    return result;
}
