#include "..\FUObjectArray.hpp"
#include "RigUnit_CCDIK_RotationLimitPerItem.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_CCDIK_RotationLimitPerItem::get_Item() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_ControlRig::RigUnit_CCDIK_RotationLimitPerItem::get_Limit() {
    return *(float*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_CCDIK_RotationLimitPerItem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_CCDIK_RotationLimitPerItem");
    return result;
}
