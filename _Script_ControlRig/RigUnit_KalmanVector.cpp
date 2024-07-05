#include "..\FUObjectArray.hpp"
#include "RigUnit_KalmanVector.hpp"
#include "RigUnit_SimBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
int32_t& _Script_ControlRig::RigUnit_KalmanVector::get_LastInsertIndex() {
    return *(int32_t*)((uintptr_t)this + 0x38);
}
void* _Script_ControlRig::RigUnit_KalmanVector::get_Value() {
    return (void*)((uintptr_t)this + 0x8);
}
int32_t& _Script_ControlRig::RigUnit_KalmanVector::get_BufferSize() {
    return *(int32_t*)((uintptr_t)this + 0x14);
}
void* _Script_ControlRig::RigUnit_KalmanVector::get_Buffer() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_ControlRig::RigUnit_KalmanVector::get_Result() {
    return (void*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_KalmanVector::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_KalmanVector");
    return result;
}
