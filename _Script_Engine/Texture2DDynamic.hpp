#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Texture.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct Texture2DDynamic : public Texture {
    private: char pad_180[0x10]; public:
    void* get_Format();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x190
#pragma pack(pop)
}