#include "..\FUObjectArray.hpp"
#include "RigUnit_MathIntSign.hpp"
#include "RigUnit_MathIntUnaryOp.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathIntSign::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathIntSign");
    return result;
}