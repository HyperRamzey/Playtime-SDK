#include "..\FUObjectArray.hpp"
#include "RigUnit.hpp"
#include "RigUnit_ConvertEulerTransform.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_ConvertEulerTransform::get_Input() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_ConvertEulerTransform::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_ConvertEulerTransform");
    return result;
}
void* _Script_ControlRig::RigUnit_ConvertEulerTransform::get_Result() {
    return (void*)((uintptr_t)this + 0x30);
}
