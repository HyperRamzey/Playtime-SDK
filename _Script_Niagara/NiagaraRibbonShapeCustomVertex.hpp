#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraRibbonShapeCustomVertex {
    private: char pad_0[0x14]; public:
    void* get_Position();
    void* get_Normal();
    float& get_TextureV();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x14
#pragma pack(pop)
}
