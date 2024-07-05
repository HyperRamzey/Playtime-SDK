#include "..\FUObjectArray.hpp"
#include "RigUnit.hpp"
#include "RigUnit_BinaryFloatOp.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_ControlRig::RigUnit_BinaryFloatOp::get_Argument0() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_ControlRig::RigUnit_BinaryFloatOp::get_Argument1() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_ControlRig::RigUnit_BinaryFloatOp::get_Result() {
    return *(float*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_BinaryFloatOp::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_BinaryFloatOp");
    return result;
}
