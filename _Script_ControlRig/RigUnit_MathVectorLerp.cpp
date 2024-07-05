#include "..\FUObjectArray.hpp"
#include "RigUnit_MathVectorBase.hpp"
#include "RigUnit_MathVectorLerp.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_MathVectorLerp::get_A() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_ControlRig::RigUnit_MathVectorLerp::get_B() {
    return (void*)((uintptr_t)this + 0x14);
}
float& _Script_ControlRig::RigUnit_MathVectorLerp::get_T() {
    return *(float*)((uintptr_t)this + 0x20);
}
void* _Script_ControlRig::RigUnit_MathVectorLerp::get_Result() {
    return (void*)((uintptr_t)this + 0x24);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathVectorLerp::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathVectorLerp");
    return result;
}
