#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_TextLocalization_PatchNotes {
#pragma pack(push, 1)
struct PatchNotes {
    private: char pad_0[0x28]; public:
    void* get_SectionName_6_680BF05A4B7ED7C11897D6B0C9915EB6();
    void* get_Names_7_14E5EDD247E3C17E1F01079B3B584E7E();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
