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
struct Item : public _Script_Engine::TableRowBase {
    private: char pad_8[0x50]; public:
    void* get_Name();
    void* get_ItemType();
    void* get_Rarity();
    void* get_Thumbnail();
    bool get_bUnlockedByDefault();
    void set_bUnlockedByDefault(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}
