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
struct SoundPack : public ItemAsset {
    private: char pad_38[0x8]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
