#include "..\FUObjectArray.hpp"
#include "RigUnit_MathRBFInterpolateQuatBase.hpp"
#include "RigUnit_MathRBFInterpolateQuatColor.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_MathRBFInterpolateQuatColor::get_Targets() {
    return (void*)((uintptr_t)this + 0xd0);
}
void* _Script_ControlRig::RigUnit_MathRBFInterpolateQuatColor::get_Output() {
    return (void*)((uintptr_t)this + 0xe0);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathRBFInterpolateQuatColor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathRBFInterpolateQuatColor");
    return result;
}
