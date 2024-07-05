#include "..\FUObjectArray.hpp"
#include "RigUnit_MathRBFInterpolateQuatBase.hpp"
#include "RigUnit_MathRBFInterpolateQuatVector.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_MathRBFInterpolateQuatVector::get_Targets() {
    return (void*)((uintptr_t)this + 0xd0);
}
void* _Script_ControlRig::RigUnit_MathRBFInterpolateQuatVector::get_Output() {
    return (void*)((uintptr_t)this + 0xe0);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathRBFInterpolateQuatVector::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathRBFInterpolateQuatVector");
    return result;
}
