#include "..\FUObjectArray.hpp"
#include "MathRBFInterpolateQuatQuat_Target.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::MathRBFInterpolateQuatQuat_Target::get_Target() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_ControlRig::MathRBFInterpolateQuatQuat_Target::get_Value() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_ControlRig::MathRBFInterpolateQuatQuat_Target::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.MathRBFInterpolateQuatQuat_Target");
    return result;
}
