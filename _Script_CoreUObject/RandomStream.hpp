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
struct RandomStream {
    private: char pad_0[0x8]; public:
    int32_t& get_InitialSeed();
    int32_t& get_Seed();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x8
#pragma pack(pop)
}