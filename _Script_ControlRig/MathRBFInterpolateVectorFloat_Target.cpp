#include "..\FUObjectArray.hpp"
#include "MathRBFInterpolateVectorFloat_Target.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::MathRBFInterpolateVectorFloat_Target::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.MathRBFInterpolateVectorFloat_Target");
    return result;
}
void* _Script_ControlRig::MathRBFInterpolateVectorFloat_Target::get_Target() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_ControlRig::MathRBFInterpolateVectorFloat_Target::get_Value() {
    return *(float*)((uintptr_t)this + 0xc);
}
