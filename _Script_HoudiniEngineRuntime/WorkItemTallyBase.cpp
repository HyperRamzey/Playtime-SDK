#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "WorkItemTallyBase.hpp"
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::WorkItemTallyBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/HoudiniEngineRuntime.WorkItemTallyBase");
    return result;
}
