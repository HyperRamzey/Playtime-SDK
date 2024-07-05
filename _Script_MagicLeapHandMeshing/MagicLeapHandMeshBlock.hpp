#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MagicLeapHandMeshing {
#pragma pack(push, 1)
struct MagicLeapHandMeshBlock {
    private: char pad_0[0x28]; public:
    int32_t& get_IndexCount();
    int32_t& get_VertexCount();
    void* get_Vertex();
    void* get_Index();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
