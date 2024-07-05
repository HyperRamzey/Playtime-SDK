#include "..\FUObjectArray.hpp"
#include "RigUnitMutable.hpp"
#include "RigUnit_SimBaseMutable.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_SimBaseMutable::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_SimBaseMutable");
    return result;
}
