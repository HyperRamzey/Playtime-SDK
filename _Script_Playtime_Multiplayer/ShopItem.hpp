#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\TableRowBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct ShopItem : public _Script_Engine::TableRowBase {
    private: char pad_8[0x88]; public:
    void* get_Name();
    int32_t& get_Price();
    int32_t& get_TicketPrice();
    void* get_EventName();
    void* get_Rarity();
    bool get_bGetPriceFromTypeAndRarity();
    void set_bGetPriceFromTypeAndRarity(bool value);
    int32_t& get_OverridePrice();
    void* get_Thumbnail();
    void* get_BigThumbnail();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x90
#pragma pack(pop)
}
