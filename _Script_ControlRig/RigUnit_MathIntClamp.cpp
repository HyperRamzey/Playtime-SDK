#include "..\FUObjectArray.hpp"
#include "RigUnit_MathIntBase.hpp"
#include "RigUnit_MathIntClamp.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
int32_t& _Script_ControlRig::RigUnit_MathIntClamp::get_Value() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
int32_t& _Script_ControlRig::RigUnit_MathIntClamp::get_Minimum() {
    return *(int32_t*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathIntClamp::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathIntClamp");
    return result;
}
int32_t& _Script_ControlRig::RigUnit_MathIntClamp::get_Maximum() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
int32_t& _Script_ControlRig::RigUnit_MathIntClamp::get_Result() {
    return *(int32_t*)((uintptr_t)this + 0x14);
}
