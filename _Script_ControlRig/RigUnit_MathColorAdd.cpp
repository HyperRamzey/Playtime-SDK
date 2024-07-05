#include "..\FUObjectArray.hpp"
#include "RigUnit_MathColorAdd.hpp"
#include "RigUnit_MathColorBinaryOp.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathColorAdd::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathColorAdd");
    return result;
}
