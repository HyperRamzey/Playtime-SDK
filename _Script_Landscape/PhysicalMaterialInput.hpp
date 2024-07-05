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
namespace _Script_Landscape {
#pragma pack(push, 1)
struct PhysicalMaterialInput {
    private: char pad_0[0x20]; public:
    _Script_PhysicsCore::PhysicalMaterial*& get_PhysicalMaterial();
    void* get_Input();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
