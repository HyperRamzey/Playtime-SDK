#include "..\FUObjectArray.hpp"
#include "RigUnit_MathIntBinaryOp.hpp"
#include "RigUnit_MathIntMin.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathIntMin::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathIntMin");
    return result;
}