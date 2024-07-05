#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HoudiniInputDataTable.hpp"
#include "HoudiniInputObject.hpp"
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniInputDataTable::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HoudiniEngineRuntime.HoudiniInputDataTable");
    return result;
}
