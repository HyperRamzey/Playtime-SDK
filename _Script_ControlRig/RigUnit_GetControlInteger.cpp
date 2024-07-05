#include "..\FUObjectArray.hpp"
#include "RigUnit.hpp"
#include "RigUnit_GetControlInteger.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_GetControlInteger::get_Control() {
    return (void*)((uintptr_t)this + 0x8);
}
int32_t& _Script_ControlRig::RigUnit_GetControlInteger::get_IntegerValue() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_GetControlInteger::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_GetControlInteger");
    return result;
}
int32_t& _Script_ControlRig::RigUnit_GetControlInteger::get_Minimum() {
    return *(int32_t*)((uintptr_t)this + 0x14);
}
int32_t& _Script_ControlRig::RigUnit_GetControlInteger::get_Maximum() {
    return *(int32_t*)((uintptr_t)this + 0x18);
}
void* _Script_ControlRig::RigUnit_GetControlInteger::get_CachedControlIndex() {
    return (void*)((uintptr_t)this + 0x1c);
}
