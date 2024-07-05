#include "..\FUObjectArray.hpp"
#include "RigUnit_MathVectorAngle.hpp"
#include "RigUnit_MathVectorBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_MathVectorAngle::get_A() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_ControlRig::RigUnit_MathVectorAngle::get_B() {
    return (void*)((uintptr_t)this + 0x14);
}
float& _Script_ControlRig::RigUnit_MathVectorAngle::get_Result() {
    return *(float*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathVectorAngle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathVectorAngle");
    return result;
}
