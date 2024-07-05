#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Base_F_Monster {
#pragma pack(push, 1)
struct F_Monster {
    private: char pad_0[0x18]; public:
    void* get_Name_2_479A0D4C4F967C7DABC8CEB136021773();
    void* get_Class_5_C3F3B52044350ECF3564EAB7B63E3C11();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
