#include "..\FUObjectArray.hpp"
#include "RigUnitMutable.hpp"
#include "RigUnit_SetMultiControlRotator.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_SetMultiControlRotator::get_Entries() {
    return (void*)((uintptr_t)this + 0x68);
}
float& _Script_ControlRig::RigUnit_SetMultiControlRotator::get_Weight() {
    return *(float*)((uintptr_t)this + 0x78);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_SetMultiControlRotator::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_SetMultiControlRotator");
    return result;
}
void* _Script_ControlRig::RigUnit_SetMultiControlRotator::get_CachedControlIndices() {
    return (void*)((uintptr_t)this + 0x80);
}
