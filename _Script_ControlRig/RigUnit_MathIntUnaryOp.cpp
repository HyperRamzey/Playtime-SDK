#include "..\FUObjectArray.hpp"
#include "RigUnit_MathIntBase.hpp"
#include "RigUnit_MathIntUnaryOp.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
int32_t& _Script_ControlRig::RigUnit_MathIntUnaryOp::get_Value() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
int32_t& _Script_ControlRig::RigUnit_MathIntUnaryOp::get_Result() {
    return *(int32_t*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathIntUnaryOp::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathIntUnaryOp");
    return result;
}
