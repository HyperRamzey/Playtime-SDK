#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HoudiniAssetParameter.hpp"
#include "HoudiniAssetParameterRamp.hpp"
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniAssetParameterRamp::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterRamp");
    return result;
}
