#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct PerkPackage {
    private: char pad_0[0x18]; public:
    void* get_FirstPerk();
    int32_t& get_FirstPerkLevel();
    void* get_SecondPerk();
    int32_t& get_SecondPerkLevel();
    void* get_ThirdPerk();
    int32_t& get_ThirdPerkLevel();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
