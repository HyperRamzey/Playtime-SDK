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
struct ToyBoxResponseItem {
    private: char pad_0[0xc]; public:
    int32_t& get_ID();
    bool get_bFree();
    void set_bFree(bool value);
    int32_t& get_Level();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc
#pragma pack(pop)
}
