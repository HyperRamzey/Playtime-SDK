#include "..\FUObjectArray.hpp"
#include "RigUnit_MathBase.hpp"
#include "RigUnit_RandomFloat.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
int32_t& _Script_ControlRig::RigUnit_RandomFloat::get_Seed() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
float& _Script_ControlRig::RigUnit_RandomFloat::get_Result() {
    return *(float*)((uintptr_t)this + 0x18);
}
float& _Script_ControlRig::RigUnit_RandomFloat::get_Minimum() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_ControlRig::RigUnit_RandomFloat::get_LastResult() {
    return *(float*)((uintptr_t)this + 0x1c);
}
float& _Script_ControlRig::RigUnit_RandomFloat::get_Maximum() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_ControlRig::RigUnit_RandomFloat::get_Duration() {
    return *(float*)((uintptr_t)this + 0x14);
}
int32_t& _Script_ControlRig::RigUnit_RandomFloat::get_LastSeed() {
    return *(int32_t*)((uintptr_t)this + 0x20);
}
float& _Script_ControlRig::RigUnit_RandomFloat::get_TimeLeft() {
    return *(float*)((uintptr_t)this + 0x24);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_RandomFloat::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_RandomFloat");
    return result;
}
