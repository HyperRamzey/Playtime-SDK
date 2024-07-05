#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Texture.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AugmentedReality {
#pragma pack(push, 1)
struct ARTexture : public _Script_Engine::Texture {
    private: char pad_180[0x20]; public:
    void* get_TextureType();
    float& get_Timestamp();
    void* get_ExternalTextureGuid();
    void* get_Size();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1a0
#pragma pack(pop)
}
