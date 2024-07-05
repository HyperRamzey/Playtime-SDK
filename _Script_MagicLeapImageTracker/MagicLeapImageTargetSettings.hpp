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
namespace _Script_MagicLeapImageTracker {
#pragma pack(push, 1)
struct MagicLeapImageTargetSettings {
    private: char pad_0[0x20]; public:
    _Script_Engine::Texture2D*& get_ImageTexture();
    void* get_Name();
    float& get_LongerDimension();
    bool get_bIsStationary();
    void set_bIsStationary(bool value);
    bool get_BIsEnabled();
    void set_BIsEnabled(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
