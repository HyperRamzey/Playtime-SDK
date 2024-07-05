#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_PhysicsCore {
struct PhysicalMaterial;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_PhysXVehicles {
#pragma pack(push, 1)
struct TireConfigMaterialFriction {
    private: char pad_0[0x10]; public:
    _Script_PhysicsCore::PhysicalMaterial*& get_PhysicalMaterial();
    float& get_FrictionScale();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}