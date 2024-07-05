#include "..\FUObjectArray.hpp"
#include "RigUnit_MathColorBase.hpp"
#include "RigUnit_MathColorBinaryOp.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_MathColorBinaryOp::get_Result() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_ControlRig::RigUnit_MathColorBinaryOp::get_A() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_ControlRig::RigUnit_MathColorBinaryOp::get_B() {
    return (void*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathColorBinaryOp::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathColorBinaryOp");
    return result;
}
