#include "..\FUObjectArray.hpp"
#include "RigUnit_MathColorBinaryOp.hpp"
#include "RigUnit_MathColorMul.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathColorMul::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathColorMul");
    return result;
}
