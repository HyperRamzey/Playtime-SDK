#include "..\FUObjectArray.hpp"
#include "RigUnit_BinaryFloatOp.hpp"
#include "RigUnit_Multiply_FloatFloat.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_Multiply_FloatFloat::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_Multiply_FloatFloat");
    return result;
}
