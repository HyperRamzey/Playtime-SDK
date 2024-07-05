#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Slate {
#pragma pack(push, 1)
struct CustomizedToolMenu {
    private: char pad_0[0x1e8]; public:
    void* get_Name();
    void* get_Entries();
    void* get_Sections();
    void* get_EntryOrder();
    void* get_SectionOrder();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1e8
#pragma pack(pop)
}