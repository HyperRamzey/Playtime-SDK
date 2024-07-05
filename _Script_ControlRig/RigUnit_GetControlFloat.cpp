#include "..\FUObjectArray.hpp"
#include "RigUnit.hpp"
#include "RigUnit_GetControlFloat.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_ControlRig::RigUnit_GetControlFloat::get_FloatValue() {
    return *(float*)((uintptr_t)this + 0x10);
}
void* _Script_ControlRig::RigUnit_GetControlFloat::get_Control() {
    return (void*)((uintptr_t)this + 0x8);
}
float& _Script_ControlRig::RigUnit_GetControlFloat::get_Minimum() {
    return *(float*)((uintptr_t)this + 0x14);
}
float& _Script_ControlRig::RigUnit_GetControlFloat::get_Maximum() {
    return *(float*)((uintptr_t)this + 0x18);
}
void* _Script_ControlRig::RigUnit_GetControlFloat::get_CachedControlIndex() {
    return (void*)((uintptr_t)this + 0x1c);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_GetControlFloat::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_GetControlFloat");
    return result;
}
