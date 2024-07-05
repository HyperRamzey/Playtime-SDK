#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct StaticMesh;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraMeshRendererMeshProperties {
    private: char pad_0[0x28]; public:
    _Script_Engine::StaticMesh*& get_Mesh();
    void* get_Scale();
    void* get_PivotOffset();
    void* get_PivotOffsetSpace();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
