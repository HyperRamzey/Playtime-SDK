#include "..\FUObjectArray.hpp"
#include "RigUnit_MathFloatBase.hpp"
#include "RigUnit_MathFloatUnaryOp.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_ControlRig::RigUnit_MathFloatUnaryOp::get_Value() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_ControlRig::RigUnit_MathFloatUnaryOp::get_Result() {
    return *(float*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathFloatUnaryOp::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathFloatUnaryOp");
    return result;
}
