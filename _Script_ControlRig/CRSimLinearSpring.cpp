#include "..\FUObjectArray.hpp"
#include "CRSimLinearSpring.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
int32_t& _Script_ControlRig::CRSimLinearSpring::get_SubjectA() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
int32_t& _Script_ControlRig::CRSimLinearSpring::get_SubjectB() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
float& _Script_ControlRig::CRSimLinearSpring::get_Coefficient() {
    return *(float*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_ControlRig::CRSimLinearSpring::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.CRSimLinearSpring");
    return result;
}
float& _Script_ControlRig::CRSimLinearSpring::get_Equilibrium() {
    return *(float*)((uintptr_t)this + 0xc);
}
