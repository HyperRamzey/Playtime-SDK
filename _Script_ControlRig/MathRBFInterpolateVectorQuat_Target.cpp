#include "..\FUObjectArray.hpp"
#include "MathRBFInterpolateVectorQuat_Target.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::MathRBFInterpolateVectorQuat_Target::get_Target() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_ControlRig::MathRBFInterpolateVectorQuat_Target::get_Value() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_ControlRig::MathRBFInterpolateVectorQuat_Target::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.MathRBFInterpolateVectorQuat_Target");
    return result;
}
