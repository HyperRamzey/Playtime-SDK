#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HoudiniVolumeInfo.hpp"
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniVolumeInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/HoudiniEngineRuntime.HoudiniVolumeInfo");
    return result;
}
