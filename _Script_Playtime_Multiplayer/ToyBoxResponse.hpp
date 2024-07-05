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
struct ToyBoxResponse {
    private: char pad_0[0x40]; public:
    void* get_ID();
    void* get_DisplayName();
    void* get_StartTime();
    void* get_EndTime();
    void* get_Items();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
