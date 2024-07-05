#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ItemAsset.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct LoadingScreenAsset : public ItemAsset {
    private: char pad_38[0x28]; public:
    void* get_LoadingScreenImage();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
