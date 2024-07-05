#include "..\FUObjectArray.hpp"
#include "RigUnit_MathVectorRad.hpp"
#include "RigUnit_MathVectorUnaryOp.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathVectorRad::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathVectorRad");
    return result;
}
