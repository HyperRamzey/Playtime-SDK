#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MagicLeap {
#pragma pack(push, 1)
struct PurchaseItemDetails {
    private: char pad_0[0x40]; public:
    void* get_Price();
    void* get_Name();
    void* get_Type();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
