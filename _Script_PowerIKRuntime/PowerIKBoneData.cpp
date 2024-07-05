#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PowerIKBoneData.hpp"
_Script_CoreUObject::Class* _Script_PowerIKRuntime::PowerIKBoneData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/PowerIKRuntime.PowerIKBoneData");
    return result;
}
