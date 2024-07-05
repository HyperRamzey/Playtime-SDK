#include "..\FUObjectArray.hpp"
#include "RigUnit_MathBoolBinaryOp.hpp"
#include "RigUnit_MathBoolNand.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathBoolNand::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathBoolNand");
    return result;
}
