#include "..\FUObjectArray.hpp"
#include "RigUnit_MathTransformBase.hpp"
#include "RigUnit_MathTransformToEulerTransform.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_MathTransformToEulerTransform::get_Result() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_ControlRig::RigUnit_MathTransformToEulerTransform::get_Value() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_MathTransformToEulerTransform::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_MathTransformToEulerTransform");
    return result;
}
