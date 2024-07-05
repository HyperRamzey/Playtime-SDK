#include "..\FUObjectArray.hpp"
#include "RigUnit_MathTransformBase.hpp"
#include "RigUnit_MathTransformTransformVector.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_MathTransformTransformVector::get_Transform() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_ControlRig::RigUnit_MathTransformTransformVector::get_Location() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_ControlRig::RigUnit_MathTransformTransformVector::get_Result() {
    return (void*)((uintptr_t)this + 0x4c);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathTransformTransformVector::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathTransformTransformVector");
    return result;
}
