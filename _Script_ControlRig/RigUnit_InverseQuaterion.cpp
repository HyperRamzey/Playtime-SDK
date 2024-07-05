#include "..\FUObjectArray.hpp"
#include "RigUnit_InverseQuaterion.hpp"
#include "RigUnit_UnaryQuaternionOp.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_InverseQuaterion::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_InverseQuaterion");
    return result;
}
