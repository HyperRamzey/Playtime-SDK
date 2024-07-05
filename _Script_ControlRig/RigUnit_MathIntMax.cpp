#include "..\FUObjectArray.hpp"
#include "RigUnit_MathIntBinaryOp.hpp"
#include "RigUnit_MathIntMax.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathIntMax::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathIntMax");
    return result;
}
