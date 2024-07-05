#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimInstance.hpp"
namespace _Script_PhysXVehicles {
struct WheeledVehicleMovementComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_PhysXVehicles {
struct WheeledVehicle;
}
namespace _Script_PhysXVehicles {
#pragma pack(push, 1)
struct VehicleAnimInstance : public _Script_Engine::AnimInstance {
    private: char pad_2c0[0x7a0]; public:
    _Script_PhysXVehicles::WheeledVehicleMovementComponent*& get_WheeledVehicleMovementComponent();
    static _Script_CoreUObject::Class* static_class();
    _Script_PhysXVehicles::WheeledVehicle* GetVehicle();
}; // Size: 0xa60
#pragma pack(pop)
}