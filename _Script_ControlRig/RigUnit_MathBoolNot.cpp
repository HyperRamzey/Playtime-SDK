#include "..\FUObjectArray.hpp"
#include "RigUnit_MathBoolNot.hpp"
#include "RigUnit_MathBoolUnaryOp.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathBoolNot::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathBoolNot");
    return result;
}
