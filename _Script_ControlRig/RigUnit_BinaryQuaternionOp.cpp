#include "..\FUObjectArray.hpp"
#include "RigUnit.hpp"
#include "RigUnit_BinaryQuaternionOp.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_BinaryQuaternionOp::get_Argument0() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_ControlRig::RigUnit_BinaryQuaternionOp::get_Argument1() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_ControlRig::RigUnit_BinaryQuaternionOp::get_Result() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_BinaryQuaternionOp::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_BinaryQuaternionOp");
    return result;
}
