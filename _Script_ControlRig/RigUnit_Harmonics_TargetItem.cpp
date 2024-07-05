#include "..\FUObjectArray.hpp"
#include "RigUnit_Harmonics_TargetItem.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_Harmonics_TargetItem::get_Item() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_Harmonics_TargetItem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_Harmonics_TargetItem");
    return result;
}
float& _Script_ControlRig::RigUnit_Harmonics_TargetItem::get_Ratio() {
    return *(float*)((uintptr_t)this + 0xc);
}
