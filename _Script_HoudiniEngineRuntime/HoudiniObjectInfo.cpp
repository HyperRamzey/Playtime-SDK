#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HoudiniObjectInfo.hpp"
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniObjectInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/HoudiniEngineRuntime.HoudiniObjectInfo");
    return result;
}
