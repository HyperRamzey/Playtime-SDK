#include "..\FUObjectArray.hpp"
#include "RigUnit_MathIntAdd.hpp"
#include "RigUnit_MathIntBinaryOp.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathIntAdd::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathIntAdd");
    return result;
}
