#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HoudiniCurveInfo.hpp"
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniCurveInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/HoudiniEngineRuntime.HoudiniCurveInfo");
    return result;
}
