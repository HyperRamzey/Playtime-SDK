#include "..\FUObjectArray.hpp"
#include "RigUnit_MathIntBase.hpp"
#include "RigUnit_MathIntBinaryOp.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
int32_t& _Script_ControlRig::RigUnit_MathIntBinaryOp::get_A() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
int32_t& _Script_ControlRig::RigUnit_MathIntBinaryOp::get_B() {
    return *(int32_t*)((uintptr_t)this + 0xc);
}
int32_t& _Script_ControlRig::RigUnit_MathIntBinaryOp::get_Result() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathIntBinaryOp::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathIntBinaryOp");
    return result;
}
