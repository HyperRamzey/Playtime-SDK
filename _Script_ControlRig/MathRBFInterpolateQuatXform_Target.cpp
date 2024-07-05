#include "..\FUObjectArray.hpp"
#include "MathRBFInterpolateQuatXform_Target.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::MathRBFInterpolateQuatXform_Target::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.MathRBFInterpolateQuatXform_Target");
    return result;
}
void* _Script_ControlRig::MathRBFInterpolateQuatXform_Target::get_Target() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_ControlRig::MathRBFInterpolateQuatXform_Target::get_Value() {
    return (void*)((uintptr_t)this + 0x10);
}
