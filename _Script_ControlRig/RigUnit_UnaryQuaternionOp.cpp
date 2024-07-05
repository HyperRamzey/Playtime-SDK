#include "..\FUObjectArray.hpp"
#include "RigUnit.hpp"
#include "RigUnit_UnaryQuaternionOp.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_UnaryQuaternionOp::get_Argument() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_UnaryQuaternionOp::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_UnaryQuaternionOp");
    return result;
}
void* _Script_ControlRig::RigUnit_UnaryQuaternionOp::get_Result() {
    return (void*)((uintptr_t)this + 0x20);
}
