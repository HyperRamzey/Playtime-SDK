#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HoudiniAssetParameter.hpp"
#include "HoudiniAssetParameterFolder.hpp"
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniAssetParameterFolder::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterFolder");
    return result;
}
