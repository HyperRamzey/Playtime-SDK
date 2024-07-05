#include "..\FUObjectArray.hpp"
#include "RigUnitMutable.hpp"
#include "RigUnit_SetControlInteger.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_SetControlInteger::get_Control() {
    return (void*)((uintptr_t)this + 0x68);
}
int32_t& _Script_ControlRig::RigUnit_SetControlInteger::get_IntegerValue() {
    return *(int32_t*)((uintptr_t)this + 0x74);
}
int32_t& _Script_ControlRig::RigUnit_SetControlInteger::get_Weight() {
    return *(int32_t*)((uintptr_t)this + 0x70);
}
void* _Script_ControlRig::RigUnit_SetControlInteger::get_CachedControlIndex() {
    return (void*)((uintptr_t)this + 0x78);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_SetControlInteger::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_SetControlInteger");
    return result;
}
