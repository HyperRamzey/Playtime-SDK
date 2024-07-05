#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\StaticMeshComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Landscape {
#pragma pack(push, 1)
struct ControlPointMeshComponent : public _Script_Engine::StaticMeshComponent {
    private: char pad_4e0[0x10]; public:
    float& get_VirtualTextureMainPassMaxDrawDistance();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x4f0
#pragma pack(pop)
}
