#include "..\FUObjectArray.hpp"
#include "RigUnit_KalmanFloat.hpp"
#include "RigUnit_SimBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_ControlRig::RigUnit_KalmanFloat::get_Value() {
    return *(float*)((uintptr_t)this + 0x8);
}
int32_t& _Script_ControlRig::RigUnit_KalmanFloat::get_BufferSize() {
    return *(int32_t*)((uintptr_t)this + 0xc);
}
float& _Script_ControlRig::RigUnit_KalmanFloat::get_Result() {
    return *(float*)((uintptr_t)this + 0x10);
}
void* _Script_ControlRig::RigUnit_KalmanFloat::get_Buffer() {
    return (void*)((uintptr_t)this + 0x18);
}
int32_t& _Script_ControlRig::RigUnit_KalmanFloat::get_LastInsertIndex() {
    return *(int32_t*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_KalmanFloat::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_KalmanFloat");
    return result;
}
