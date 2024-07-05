#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\TableRowBase.hpp"
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Playtime_Multiplayer {
#pragma pack(push, 1)
struct Perk : public _Script_Engine::TableRowBase {
    private: char pad_8[0x90]; public:
    void* get_PerkType();
    void* get_DisplayName();
    _Script_Engine::Texture2D*& get_Icon();
    void* get_Description();
    void* get_LevelOneDescription();
    void* get_LevelTwoDescription();
    void* get_LevelThreeDescription();
    int32_t& get_LevelOnePrice();
    int32_t& get_LevelTwoPrice();
    int32_t& get_LevelThreePrice();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x98
#pragma pack(pop)
}
