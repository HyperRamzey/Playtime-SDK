#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraBakerTextureSettings {
    private: char pad_0[0x30]; public:
    void* get_OutputName();
    void* get_SourceBinding();
    bool get_bUseFrameSize();
    void set_bUseFrameSize(bool value);
    void* get_FrameSize();
    void* get_TextureSize();
    _Script_Engine::Texture2D*& get_GeneratedTexture();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
