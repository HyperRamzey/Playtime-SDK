#include "..\FUObjectArray.hpp"
#include "RigUnit_MathBoolConstFalse.hpp"
#include "RigUnit_MathBoolConstant.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathBoolConstFalse::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathBoolConstFalse");
    return result;
}
