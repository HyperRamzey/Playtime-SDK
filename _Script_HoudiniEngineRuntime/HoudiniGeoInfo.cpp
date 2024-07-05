#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HoudiniGeoInfo.hpp"
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniGeoInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/HoudiniEngineRuntime.HoudiniGeoInfo");
    return result;
}
