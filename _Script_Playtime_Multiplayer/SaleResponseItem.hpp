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
struct SaleResponseItem {
    private: char pad_0[0xc]; public:
    int32_t& get_ID();
    int32_t& get_SalePrice();
    int32_t& get_OriginalPrice();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc
#pragma pack(pop)
}
