#include "..\FUObjectArray.hpp"
#include "RigUnit.hpp"
#include "RigUnit_ConvertQuaternion.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_ConvertQuaternion::get_Input() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_ControlRig::RigUnit_ConvertQuaternion::get_Result() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_ConvertQuaternion::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_ConvertQuaternion");
    return result;
}
