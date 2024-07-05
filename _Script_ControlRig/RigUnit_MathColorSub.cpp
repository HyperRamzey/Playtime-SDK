#include "..\FUObjectArray.hpp"
#include "RigUnit_MathColorBinaryOp.hpp"
#include "RigUnit_MathColorSub.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathColorSub::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathColorSub");
    return result;
}
