#include "..\FUObjectArray.hpp"
#include "RigUnit_MathIntBinaryOp.hpp"
#include "RigUnit_MathIntMul.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathIntMul::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathIntMul");
    return result;
}
