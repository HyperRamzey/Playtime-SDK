#include "..\FUObjectArray.hpp"
#include "RigUnit_KalmanTransform.hpp"
#include "RigUnit_SimBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::RigUnit_KalmanTransform::get_Buffer() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_ControlRig::RigUnit_KalmanTransform::get_Value() {
    return (void*)((uintptr_t)this + 0x10);
}
int32_t& _Script_ControlRig::RigUnit_KalmanTransform::get_BufferSize() {
    return *(int32_t*)((uintptr_t)this + 0x40);
}
void* _Script_ControlRig::RigUnit_KalmanTransform::get_Result() {
    return (void*)((uintptr_t)this + 0x50);
}
int32_t& _Script_ControlRig::RigUnit_KalmanTransform::get_LastInsertIndex() {
    return *(int32_t*)((uintptr_t)this + 0x90);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_KalmanTransform::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_KalmanTransform");
    return result;
}
