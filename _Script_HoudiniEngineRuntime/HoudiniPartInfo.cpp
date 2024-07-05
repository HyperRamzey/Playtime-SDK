#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HoudiniPartInfo.hpp"
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniPartInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/HoudiniEngineRuntime.HoudiniPartInfo");
    return result;
}
