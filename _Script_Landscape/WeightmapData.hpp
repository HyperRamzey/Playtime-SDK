#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Landscape {
#pragma pack(push, 1)
struct WeightmapData {
    private: char pad_0[0x30]; public:
    void* get_Textures();
    void* get_LayerAllocations();
    void* get_TextureUsages();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}