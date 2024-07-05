#include "..\FUObjectArray.hpp"
#include "RigUnit_MathVectorBase.hpp"
#include "RigUnit_MathVectorFromFloat.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_ControlRig::RigUnit_MathVectorFromFloat::get_Value() {
    return *(float*)((uintptr_t)this + 0x8);
}
void* _Script_ControlRig::RigUnit_MathVectorFromFloat::get_Result() {
    return (void*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathVectorFromFloat::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathVectorFromFloat");
    return result;
}
