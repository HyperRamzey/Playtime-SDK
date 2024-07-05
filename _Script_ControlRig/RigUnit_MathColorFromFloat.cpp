#include "..\FUObjectArray.hpp"
#include "RigUnit_MathColorBase.hpp"
#include "RigUnit_MathColorFromFloat.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_ControlRig::RigUnit_MathColorFromFloat::get_Value() {
    return *(float*)((uintptr_t)this + 0x8);
}
void* _Script_ControlRig::RigUnit_MathColorFromFloat::get_Result() {
    return (void*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathColorFromFloat::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathColorFromFloat");
    return result;
}
