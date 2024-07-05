#include "..\FUObjectArray.hpp"
#include "RigUnit_MathQuaternionBinaryOp.hpp"
#include "RigUnit_MathQuaternionMul.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathQuaternionMul::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathQuaternionMul");
    return result;
}
