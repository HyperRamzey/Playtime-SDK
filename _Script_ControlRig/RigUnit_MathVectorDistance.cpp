#include "..\FUObjectArray.hpp"
#include "RigUnit_MathVectorBase.hpp"
#include "RigUnit_MathVectorDistance.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathVectorDistance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathVectorDistance");
    return result;
}
float& _Script_ControlRig::RigUnit_MathVectorDistance::get_Result() {
    return *(float*)((uintptr_t)this + 0x20);
}
void* _Script_ControlRig::RigUnit_MathVectorDistance::get_A() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_ControlRig::RigUnit_MathVectorDistance::get_B() {
    return (void*)((uintptr_t)this + 0x14);
}
