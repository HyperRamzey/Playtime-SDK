#include "..\FUObjectArray.hpp"
#include "RigUnit_MathBoolBinaryOp.hpp"
#include "RigUnit_MathBoolOr.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathBoolOr::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathBoolOr");
    return result;
}
