#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "VehicleEngineData.hpp"
void* _Script_PhysXVehicles::VehicleEngineData::get_TorqueCurve() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_PhysXVehicles::VehicleEngineData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/PhysXVehicles.VehicleEngineData");
    return result;
}
float& _Script_PhysXVehicles::VehicleEngineData::get_MaxRPM() {
    return *(float*)((uintptr_t)this + 0x88);
}
float& _Script_PhysXVehicles::VehicleEngineData::get_DampingRateZeroThrottleClutchDisengaged() {
    return *(float*)((uintptr_t)this + 0x98);
}
float& _Script_PhysXVehicles::VehicleEngineData::get_MOI() {
    return *(float*)((uintptr_t)this + 0x8c);
}
float& _Script_PhysXVehicles::VehicleEngineData::get_DampingRateFullThrottle() {
    return *(float*)((uintptr_t)this + 0x90);
}
float& _Script_PhysXVehicles::VehicleEngineData::get_DampingRateZeroThrottleClutchEngaged() {
    return *(float*)((uintptr_t)this + 0x94);
}
