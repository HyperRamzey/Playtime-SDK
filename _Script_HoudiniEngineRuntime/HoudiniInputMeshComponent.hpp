#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "HoudiniInputSceneComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_HoudiniEngineRuntime {
#pragma pack(push, 1)
struct HoudiniInputMeshComponent : public HoudiniInputSceneComponent {
    private: char pad_e0[0x40]; public:
    void* get_StaticMesh();
    void* get_MeshComponentsMaterials();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x120
#pragma pack(pop)
}
