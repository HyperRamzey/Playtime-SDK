#include "..\FUObjectArray.hpp"
#include "RigUnit_MathFloatBinaryOp.hpp"
#include "RigUnit_MathFloatMax.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathFloatMax::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathFloatMax");
    return result;
}
