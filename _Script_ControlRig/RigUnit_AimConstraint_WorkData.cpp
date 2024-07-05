#include "..\FUObjectArray.hpp"
#include "RigUnit_AimConstraint_WorkData.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_AimConstraint_WorkData::get_ConstraintData() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_AimConstraint_WorkData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_AimConstraint_WorkData");
    return result;
}
