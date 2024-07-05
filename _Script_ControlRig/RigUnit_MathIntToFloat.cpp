#include "..\FUObjectArray.hpp"
#include "RigUnit_MathIntBase.hpp"
#include "RigUnit_MathIntToFloat.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathIntToFloat::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathIntToFloat");
    return result;
}
int32_t& _Script_ControlRig::RigUnit_MathIntToFloat::get_Value() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
float& _Script_ControlRig::RigUnit_MathIntToFloat::get_Result() {
    return *(float*)((uintptr_t)this + 0xc);
}
