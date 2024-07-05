#include "..\FUObjectArray.hpp"
#include "RigUnit_MathFloatConstHalfPi.hpp"
#include "RigUnit_MathFloatConstant.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathFloatConstHalfPi::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathFloatConstHalfPi");
    return result;
}
