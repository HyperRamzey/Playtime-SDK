#include "..\FUObjectArray.hpp"
#include "RigUnit_CCDIK_WorkData.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_CCDIK_WorkData::get_Chain() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_ControlRig::RigUnit_CCDIK_WorkData::get_CachedEffector() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_ControlRig::RigUnit_CCDIK_WorkData::get_CachedItems() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_ControlRig::RigUnit_CCDIK_WorkData::get_RotationLimitIndex() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_ControlRig::RigUnit_CCDIK_WorkData::get_RotationLimitsPerItem() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_CCDIK_WorkData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_CCDIK_WorkData");
    return result;
}
