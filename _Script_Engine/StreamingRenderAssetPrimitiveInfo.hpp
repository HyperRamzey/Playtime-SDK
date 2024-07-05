#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct StreamableRenderAsset;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct StreamingRenderAssetPrimitiveInfo {
    private: char pad_0[0x30]; public:
    _Script_Engine::StreamableRenderAsset*& get_RenderAsset();
    void* get_Bounds();
    float& get_TexelFactor();
    void* get_PackedRelativeBox();
    bool get_bAllowInvalidTexelFactorWhenUnregistered();
    void set_bAllowInvalidTexelFactorWhenUnregistered(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
