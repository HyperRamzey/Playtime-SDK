#include "..\FUObjectArray.hpp"
#include "RigUnit_MathVectorBase.hpp"
#include "RigUnit_MathVectorUnaryOp.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_MathVectorUnaryOp::get_Value() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_ControlRig::RigUnit_MathVectorUnaryOp::get_Result() {
    return (void*)((uintptr_t)this + 0x14);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathVectorUnaryOp::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathVectorUnaryOp");
    return result;
}
