#include "..\FUObjectArray.hpp"
#include "RigUnit_MathVectorUnaryOp.hpp"
#include "RigUnit_MathVectorUnit.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathVectorUnit::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathVectorUnit");
    return result;
}
