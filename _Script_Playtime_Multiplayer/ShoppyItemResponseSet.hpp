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
struct ShoppyItemResponseSet {
    private: char pad_0[0x70]; public:
    void* get_Name();
    void* get_SaleInfo();
    void* get_StartTime();
    void* get_EndTime();
    void* get_Sale();
    void* get_Featured();
    void* get_Bundles();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x70
#pragma pack(pop)
}
