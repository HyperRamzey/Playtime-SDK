#include "..\FUObjectArray.hpp"
#include "RigUnit_MathVectorBase.hpp"
#include "RigUnit_MathVectorScale.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_MathVectorScale::get_Value() {
    return (void*)((uintptr_t)this + 0x8);
}
float& _Script_ControlRig::RigUnit_MathVectorScale::get_Factor() {
    return *(float*)((uintptr_t)this + 0x14);
}
void* _Script_ControlRig::RigUnit_MathVectorScale::get_Result() {
    return (void*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathVectorScale::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathVectorScale");
    return result;
}
