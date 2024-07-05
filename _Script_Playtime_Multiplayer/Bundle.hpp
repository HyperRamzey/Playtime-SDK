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
struct Bundle : public _Script_Engine::TableRowBase {
    private: char pad_8[0x38]; public:
    void* get_Name();
    int32_t& get_Price();
    void* get_Rarity();
    bool get_bOutfit();
    void set_bOutfit(bool value);
    void* get_BundlePreviewClass();
    void* get_BundleContent();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
