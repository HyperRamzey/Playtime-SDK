#include "..\FUObjectArray.hpp"
#include "RigUnit_MathVectorRound.hpp"
#include "RigUnit_MathVectorUnaryOp.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathVectorRound::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathVectorRound");
    return result;
}
