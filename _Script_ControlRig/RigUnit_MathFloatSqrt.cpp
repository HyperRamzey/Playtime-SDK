#include "..\FUObjectArray.hpp"
#include "RigUnit_MathFloatSqrt.hpp"
#include "RigUnit_MathFloatUnaryOp.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathFloatSqrt::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathFloatSqrt");
    return result;
}
