#include "..\FUObjectArray.hpp"
#include "RigControlValue.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::RigControlValue::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigControlValue");
    return result;
}
void* _Script_ControlRig::RigControlValue::get_FloatStorage() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_ControlRig::RigControlValue::get_Storage() {
    return (void*)((uintptr_t)this + 0x50);
}
