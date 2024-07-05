#include "..\FUObjectArray.hpp"
#include "RigUnitMutable.hpp"
#include "RigUnit_SetControlColor.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_SetControlColor::get_Control() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_ControlRig::RigUnit_SetControlColor::get_Color() {
    return (void*)((uintptr_t)this + 0x70);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_SetControlColor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_SetControlColor");
    return result;
}
void* _Script_ControlRig::RigUnit_SetControlColor::get_CachedControlIndex() {
    return (void*)((uintptr_t)this + 0x80);
}
