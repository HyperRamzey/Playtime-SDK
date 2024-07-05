#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "WheeledVehicleMovementComponent.hpp"
#include "WheeledVehicleMovementComponent4W.hpp"
void* _Script_PhysXVehicles::WheeledVehicleMovementComponent4W::get_DifferentialSetup() {
    return (void*)((uintptr_t)this + 0x330);
}
void* _Script_PhysXVehicles::WheeledVehicleMovementComponent4W::get_EngineSetup() {
    return (void*)((uintptr_t)this + 0x290);
}
void* _Script_PhysXVehicles::WheeledVehicleMovementComponent4W::get_TransmissionSetup() {
    return (void*)((uintptr_t)this + 0x350);
}
float& _Script_PhysXVehicles::WheeledVehicleMovementComponent4W::get_AckermannAccuracy() {
    return *(float*)((uintptr_t)this + 0x34c);
}
void* _Script_PhysXVehicles::WheeledVehicleMovementComponent4W::get_SteeringCurve() {
    return (void*)((uintptr_t)this + 0x380);
}
_Script_CoreUObject::Class* _Script_PhysXVehicles::WheeledVehicleMovementComponent4W::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/PhysXVehicles.WheeledVehicleMovementComponent4W");
    return result;
}
