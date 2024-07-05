#include "..\FUObjectArray.hpp"
#include "RigUnit_SimBase.hpp"
#include "RigUnit_TimeOffsetTransform.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
int32_t& _Script_ControlRig::RigUnit_TimeOffsetTransform::get_BufferSize() {
    return *(int32_t*)((uintptr_t)this + 0x44);
}
void* _Script_ControlRig::RigUnit_TimeOffsetTransform::get_Value() {
    return (void*)((uintptr_t)this + 0x10);
}
int32_t& _Script_ControlRig::RigUnit_TimeOffsetTransform::get_UpperBound() {
    return *(int32_t*)((uintptr_t)this + 0xa4);
}
float& _Script_ControlRig::RigUnit_TimeOffsetTransform::get_SecondsAgo() {
    return *(float*)((uintptr_t)this + 0x40);
}
float& _Script_ControlRig::RigUnit_TimeOffsetTransform::get_TimeRange() {
    return *(float*)((uintptr_t)this + 0x48);
}
void* _Script_ControlRig::RigUnit_TimeOffsetTransform::get_Result() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_ControlRig::RigUnit_TimeOffsetTransform::get_Buffer() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_ControlRig::RigUnit_TimeOffsetTransform::get_DeltaTimes() {
    return (void*)((uintptr_t)this + 0x90);
}
int32_t& _Script_ControlRig::RigUnit_TimeOffsetTransform::get_LastInsertIndex() {
    return *(int32_t*)((uintptr_t)this + 0xa0);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_TimeOffsetTransform::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_TimeOffsetTransform");
    return result;
}
