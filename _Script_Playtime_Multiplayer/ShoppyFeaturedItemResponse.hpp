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
struct ShoppyFeaturedItemResponse {
    private: char pad_0[0x20]; public:
    int32_t& get_ID();
    int32_t& get_PriceInCoins();
    int32_t& get_PriceInTickets();
    void* get_Rarity();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
