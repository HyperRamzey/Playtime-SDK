#include "..\FUObjectArray.hpp"
#include "RigUnit_MathVectorBinaryOp.hpp"
#include "RigUnit_MathVectorMax.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathVectorMax::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathVectorMax");
    return result;
}