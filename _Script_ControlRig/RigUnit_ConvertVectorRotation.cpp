#include "..\FUObjectArray.hpp"
#include "RigUnit_ConvertRotation.hpp"
#include "RigUnit_ConvertVectorRotation.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_ConvertVectorRotation::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_ConvertVectorRotation");
    return result;
}
