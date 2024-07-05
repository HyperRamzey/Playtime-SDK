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
struct ItemDefinition : public _Script_Engine::TableRowBase {
    private: char pad_8[0xb8]; public:
    void* get_Name();
    void* get_Description();
    int32_t& get_ItemFlags();
    void* get_Rarity();
    void* get_Thumbnail();
    void* get_BigThumbnail();
    void* get_Item();
    bool get_bUnlockedByDefault();
    void set_bUnlockedByDefault(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc0
#pragma pack(pop)
}
