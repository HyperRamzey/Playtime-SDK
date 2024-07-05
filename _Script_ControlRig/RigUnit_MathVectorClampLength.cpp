#include "..\FUObjectArray.hpp"
#include "RigUnit_MathVectorBase.hpp"
#include "RigUnit_MathVectorClampLength.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_ControlRig::RigUnit_MathVectorClampLength::get_MinimumLength() {
    return *(float*)((uintptr_t)this + 0x14);
}
void* _Script_ControlRig::RigUnit_MathVectorClampLength::get_Value() {
    return (void*)((uintptr_t)this + 0x8);
}
float& _Script_ControlRig::RigUnit_MathVectorClampLength::get_MaximumLength() {
    return *(float*)((uintptr_t)this + 0x18);
}
void* _Script_ControlRig::RigUnit_MathVectorClampLength::get_Result() {
    return (void*)((uintptr_t)this + 0x1c);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathVectorClampLength::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathVectorClampLength");
    return result;
}
