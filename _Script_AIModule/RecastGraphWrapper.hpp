#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_NavigationSystem {
struct RecastNavMesh;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct RecastGraphWrapper {
    private: char pad_0[0x98]; public:
    _Script_NavigationSystem::RecastNavMesh*& get_RecastNavMeshActor();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x98
#pragma pack(pop)
}
