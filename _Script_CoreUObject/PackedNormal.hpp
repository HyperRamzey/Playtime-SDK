#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
#pragma pack(push, 1)
struct PackedNormal {
    private: char pad_0[0x4]; public:
    void* get_X();
    void* get_Y();
    void* get_Z();
    void* get_W();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x4
#pragma pack(pop)
}