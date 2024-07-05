#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\SceneComponent.hpp"
namespace _Script_Engine {
struct StaticMesh;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_HoudiniEngineRuntime {
#pragma pack(push, 1)
struct HoudiniMeshSplitInstancerComponent : public _Script_Engine::SceneComponent {
    private: char pad_200[0x20]; public:
    void* get_Instances();
    void* get_OverrideMaterials();
    _Script_Engine::StaticMesh*& get_InstancedMesh();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x220
#pragma pack(pop)
}
