#include "..\FUObjectArray.hpp"
#include "RigUnit_MathFloatSign.hpp"
#include "RigUnit_MathFloatUnaryOp.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathFloatSign::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathFloatSign");
    return result;
}
