#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HoudiniAssetInstanceInput.hpp"
#include "HoudiniAssetParameter.hpp"
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniAssetInstanceInput::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HoudiniEngineRuntime.HoudiniAssetInstanceInput");
    return result;
}
