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
struct LandscapeMeshProxyComponent : public _Script_Engine::StaticMeshComponent {
    private: char pad_4e0[0x30]; public:
    void* get_LandscapeGuid();
    void* get_ProxyComponentBases();
    void* get_ProxyLOD();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x510
#pragma pack(pop)
}
