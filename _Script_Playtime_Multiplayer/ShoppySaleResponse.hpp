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
struct ShoppySaleResponse {
    private: char pad_0[0x20]; public:
    void* get_Name();
    void* get_StartTime();
    void* get_EndTime();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
