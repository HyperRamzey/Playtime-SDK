#include "..\FUObjectArray.hpp"
#include "RigUnit_MathRBFInterpolateVectorBase.hpp"
#include "RigUnit_MathRBFInterpolateVectorQuat.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_MathRBFInterpolateVectorQuat::get_Targets() {
    return (void*)((uintptr_t)this + 0xb0);
}
void* _Script_ControlRig::RigUnit_MathRBFInterpolateVectorQuat::get_Output() {
    return (void*)((uintptr_t)this + 0xc0);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathRBFInterpolateVectorQuat::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathRBFInterpolateVectorQuat");
    return result;
}
