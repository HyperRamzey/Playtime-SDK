#include "..\FUObjectArray.hpp"
#include "RigUnit_MathRBFInterpolateQuatBase.hpp"
#include "RigUnit_MathRBFInterpolateQuatFloat.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_MathRBFInterpolateQuatFloat::get_Targets() {
    return (void*)((uintptr_t)this + 0xd0);
}
float& _Script_ControlRig::RigUnit_MathRBFInterpolateQuatFloat::get_Output() {
    return *(float*)((uintptr_t)this + 0xe0);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathRBFInterpolateQuatFloat::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathRBFInterpolateQuatFloat");
    return result;
}
