#include "..\FUObjectArray.hpp"
#include "RigUnit_SimBase.hpp"
#include "RigUnit_TimeOffsetVector.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_TimeOffsetVector::get_Value() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_ControlRig::RigUnit_TimeOffsetVector::get_Buffer() {
    return (void*)((uintptr_t)this + 0x30);
}
int32_t& _Script_ControlRig::RigUnit_TimeOffsetVector::get_UpperBound() {
    return *(int32_t*)((uintptr_t)this + 0x54);
}
float& _Script_ControlRig::RigUnit_TimeOffsetVector::get_SecondsAgo() {
    return *(float*)((uintptr_t)this + 0x14);
}
int32_t& _Script_ControlRig::RigUnit_TimeOffsetVector::get_BufferSize() {
    return *(int32_t*)((uintptr_t)this + 0x18);
}
float& _Script_ControlRig::RigUnit_TimeOffsetVector::get_TimeRange() {
    return *(float*)((uintptr_t)this + 0x1c);
}
void* _Script_ControlRig::RigUnit_TimeOffsetVector::get_DeltaTimes() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_ControlRig::RigUnit_TimeOffsetVector::get_Result() {
    return (void*)((uintptr_t)this + 0x20);
}
int32_t& _Script_ControlRig::RigUnit_TimeOffsetVector::get_LastInsertIndex() {
    return *(int32_t*)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_TimeOffsetVector::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_TimeOffsetVector");
    return result;
}
