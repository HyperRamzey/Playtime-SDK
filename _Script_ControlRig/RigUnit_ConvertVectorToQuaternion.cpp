#include "..\FUObjectArray.hpp"
#include "RigUnit.hpp"
#include "RigUnit_ConvertVectorToQuaternion.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_ConvertVectorToQuaternion::get_Input() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_ControlRig::RigUnit_ConvertVectorToQuaternion::get_Result() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_ConvertVectorToQuaternion::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_ConvertVectorToQuaternion");
    return result;
}
