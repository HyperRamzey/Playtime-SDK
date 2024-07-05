#include "..\FUObjectArray.hpp"
#include "MathRBFInterpolateQuatVector_Target.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::MathRBFInterpolateQuatVector_Target::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.MathRBFInterpolateQuatVector_Target");
    return result;
}
void* _Script_ControlRig::MathRBFInterpolateQuatVector_Target::get_Value() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_ControlRig::MathRBFInterpolateQuatVector_Target::get_Target() {
    return (void*)((uintptr_t)this + 0x0);
}
