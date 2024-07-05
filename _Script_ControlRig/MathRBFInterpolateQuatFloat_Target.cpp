#include "..\FUObjectArray.hpp"
#include "MathRBFInterpolateQuatFloat_Target.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::MathRBFInterpolateQuatFloat_Target::get_Target() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_ControlRig::MathRBFInterpolateQuatFloat_Target::get_Value() {
    return *(float*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_ControlRig::MathRBFInterpolateQuatFloat_Target::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.MathRBFInterpolateQuatFloat_Target");
    return result;
}
