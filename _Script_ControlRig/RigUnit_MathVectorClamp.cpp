#include "..\FUObjectArray.hpp"
#include "RigUnit_MathVectorBase.hpp"
#include "RigUnit_MathVectorClamp.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathVectorClamp::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathVectorClamp");
    return result;
}
void* _Script_ControlRig::RigUnit_MathVectorClamp::get_Result() {
    return (void*)((uintptr_t)this + 0x2c);
}
void* _Script_ControlRig::RigUnit_MathVectorClamp::get_Value() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_ControlRig::RigUnit_MathVectorClamp::get_Minimum() {
    return (void*)((uintptr_t)this + 0x14);
}
void* _Script_ControlRig::RigUnit_MathVectorClamp::get_Maximum() {
    return (void*)((uintptr_t)this + 0x20);
}
