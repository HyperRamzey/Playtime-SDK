#include "..\FUObjectArray.hpp"
#include "RigUnit_SimBase.hpp"
#include "RigUnit_TimeOffsetFloat.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_ControlRig::RigUnit_TimeOffsetFloat::get_Result() {
    return *(float*)((uintptr_t)this + 0x18);
}
float& _Script_ControlRig::RigUnit_TimeOffsetFloat::get_TimeRange() {
    return *(float*)((uintptr_t)this + 0x14);
}
float& _Script_ControlRig::RigUnit_TimeOffsetFloat::get_Value() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_ControlRig::RigUnit_TimeOffsetFloat::get_SecondsAgo() {
    return *(float*)((uintptr_t)this + 0xc);
}
void* _Script_ControlRig::RigUnit_TimeOffsetFloat::get_DeltaTimes() {
    return (void*)((uintptr_t)this + 0x30);
}
int32_t& _Script_ControlRig::RigUnit_TimeOffsetFloat::get_BufferSize() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
void* _Script_ControlRig::RigUnit_TimeOffsetFloat::get_Buffer() {
    return (void*)((uintptr_t)this + 0x20);
}
int32_t& _Script_ControlRig::RigUnit_TimeOffsetFloat::get_LastInsertIndex() {
    return *(int32_t*)((uintptr_t)this + 0x40);
}
int32_t& _Script_ControlRig::RigUnit_TimeOffsetFloat::get_UpperBound() {
    return *(int32_t*)((uintptr_t)this + 0x44);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_TimeOffsetFloat::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_TimeOffsetFloat");
    return result;
}
