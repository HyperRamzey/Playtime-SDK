#include "..\FUObjectArray.hpp"
#include "RigUnit_SimBase.hpp"
#include "RigUnit_Timeline.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_ControlRig::RigUnit_Timeline::get_Speed() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_ControlRig::RigUnit_Timeline::get_AccumulatedValue() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_ControlRig::RigUnit_Timeline::get_Time() {
    return *(float*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_Timeline::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_Timeline");
    return result;
}
