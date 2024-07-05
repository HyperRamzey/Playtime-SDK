#include "..\FUObjectArray.hpp"
#include "RigUnit_MathBase.hpp"
#include "RigUnit_MathColorBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathColorBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathColorBase");
    return result;
}
