#include "..\FUObjectArray.hpp"
#include "RigUnit_MathColorBase.hpp"
#include "RigUnit_MathColorLerp.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_MathColorLerp::get_A() {
    return (void*)((uintptr_t)this + 0x8);
}
float& _Script_ControlRig::RigUnit_MathColorLerp::get_T() {
    return *(float*)((uintptr_t)this + 0x28);
}
void* _Script_ControlRig::RigUnit_MathColorLerp::get_B() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_ControlRig::RigUnit_MathColorLerp::get_Result() {
    return (void*)((uintptr_t)this + 0x2c);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathColorLerp::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathColorLerp");
    return result;
}
