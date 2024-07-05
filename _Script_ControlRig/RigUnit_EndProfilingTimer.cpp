#include "..\FUObjectArray.hpp"
#include "RigUnit_DebugBaseMutable.hpp"
#include "RigUnit_EndProfilingTimer.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::RigUnit_EndProfilingTimer::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.RigUnit_EndProfilingTimer");
    return result;
}
int32_t& _Script_ControlRig::RigUnit_EndProfilingTimer::get_NumberOfMeasurements() {
    return *(int32_t*)((uintptr_t)this + 0x68);
}
void* _Script_ControlRig::RigUnit_EndProfilingTimer::get_Prefix() {
    return (void*)((uintptr_t)this + 0x70);
}
float& _Script_ControlRig::RigUnit_EndProfilingTimer::get_AccumulatedTime() {
    return *(float*)((uintptr_t)this + 0x80);
}
int32_t& _Script_ControlRig::RigUnit_EndProfilingTimer::get_MeasurementsLeft() {
    return *(int32_t*)((uintptr_t)this + 0x84);
}
