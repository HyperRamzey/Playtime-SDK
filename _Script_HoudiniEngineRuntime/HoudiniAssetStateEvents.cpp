#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
#include "HoudiniAssetStateEvents.hpp"
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniAssetStateEvents::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HoudiniEngineRuntime.HoudiniAssetStateEvents");
    return result;
}
