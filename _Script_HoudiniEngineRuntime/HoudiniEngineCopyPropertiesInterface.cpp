#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
#include "HoudiniEngineCopyPropertiesInterface.hpp"
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniEngineCopyPropertiesInterface::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HoudiniEngineRuntime.HoudiniEngineCopyPropertiesInterface");
    return result;
}
