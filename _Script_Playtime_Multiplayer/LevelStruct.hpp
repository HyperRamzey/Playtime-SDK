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
struct LevelStruct : public _Script_Engine::TableRowBase {
    private: char pad_8[0x58]; public:
    int32_t& get_ID();
    void* get_CommonName();
    void* get_Filename();
    void* get_Level();
    _Script_Engine::Texture2D*& get_Thumbnail();
    bool get_bShowInHostScreen();
    void set_bShowInHostScreen(bool value);
    bool get_bDevOnly();
    void set_bDevOnly(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
