#include "..\FUObjectArray.hpp"
#include "RigUnit_AnimBase.hpp"
#include "RigUnit_GetWorldTime.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_ControlRig::RigUnit_GetWorldTime::get_WeekDay() {
    return *(float*)((uintptr_t)this + 0x14);
}
float& _Script_ControlRig::RigUnit_GetWorldTime::get_Year() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_ControlRig::RigUnit_GetWorldTime::get_Day() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_ControlRig::RigUnit_GetWorldTime::get_Hours() {
    return *(float*)((uintptr_t)this + 0x18);
}
float& _Script_ControlRig::RigUnit_GetWorldTime::get_Month() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_ControlRig::RigUnit_GetWorldTime::get_Minutes() {
    return *(float*)((uintptr_t)this + 0x1c);
}
float& _Script_ControlRig::RigUnit_GetWorldTime::get_Seconds() {
    return *(float*)((uintptr_t)this + 0x20);
}
float& _Script_ControlRig::RigUnit_GetWorldTime::get_OverallSeconds() {
    return *(float*)((uintptr_t)this + 0x24);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_GetWorldTime::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_GetWorldTime");
    return result;
}
