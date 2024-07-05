#include "..\FUObjectArray.hpp"
#include "CRSimPointConstraint.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::CRSimPointConstraint::get_Type() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_ControlRig::CRSimPointConstraint::get_SubjectA() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
int32_t& _Script_ControlRig::CRSimPointConstraint::get_SubjectB() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
void* _Script_ControlRig::CRSimPointConstraint::get_DataB() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_ControlRig::CRSimPointConstraint::get_DataA() {
    return (void*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_ControlRig::CRSimPointConstraint::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.CRSimPointConstraint");
    return result;
}
